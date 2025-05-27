import os
import glob
import sys

CURRENT_DIRECTORY = os.getcwd()
XRAY_API_PATH = os.path.join(CURRENT_DIRECTORY, 'xray_api')
DIST_PATH = os.path.join(CURRENT_DIRECTORY, 'dist')

PYTHON_OUTPUT_PATH = os.path.join(DIST_PATH, "python")
CPP_OUTPUT_PATH = os.path.join(DIST_PATH, "cpp")
CSHARP_OUTPUT_PATH = os.path.join(DIST_PATH, "csharp")
RUBY_OUTPUT_PATH = os.path.join(DIST_PATH, "ruby")
NODEJS_OUTPUT_PATH = os.path.join(DIST_PATH, "nodejs")
TYPESCRIPT_OUTPUT_PATH = os.path.join(DIST_PATH, "typescript")


def find_proto_files():
    return glob.glob(os.path.join(XRAY_API_PATH, '**', '*.proto'), recursive=True)


def ensure_output_directory(path):
    if not os.path.exists(path):
        os.makedirs(path)
        print(f"Created directory: {path}")


proto_files = find_proto_files()

print(f"Found {len(proto_files)} proto files:")
for proto_file in proto_files:
    print(f"  - {proto_file}")

if len(proto_files) == 0:
    print("No proto files found! Make sure to run download-proto-files.py first.")
    sys.exit(1)

if len(sys.argv) < 2:
    print("Please use the script correctly!")
    sys.exit(1)

compiler = sys.argv[1]
print(f"Compiling for: {compiler}")

if compiler == "python":
    ensure_output_directory(PYTHON_OUTPUT_PATH)
    command = (
        f"python -m grpc_tools.protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--python_out={PYTHON_OUTPUT_PATH} "
        f"--grpc_python_out={PYTHON_OUTPUT_PATH} "
        f"{' '.join(proto_files)}"
    )
elif compiler == "cpp":
    ensure_output_directory(CPP_OUTPUT_PATH)
    command = (
        f"protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--cpp_out={CPP_OUTPUT_PATH} "
        f"--grpc_out={CPP_OUTPUT_PATH} "
        "--plugin=protoc-gen-grpc=$(which grpc_cpp_plugin) "
        f"{' '.join(proto_files)}"
    )
elif compiler == "csharp":
    ensure_output_directory(CSHARP_OUTPUT_PATH)
    command = (
        f"protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--csharp_out={CSHARP_OUTPUT_PATH} "
        f"--grpc_out={CSHARP_OUTPUT_PATH} "
        "--plugin=protoc-gen-grpc=$(which grpc_csharp_plugin) "
        f"{' '.join(proto_files)}"
    )
elif compiler == "ruby":
    ensure_output_directory(RUBY_OUTPUT_PATH)
    command = (
        f"protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--ruby_out={RUBY_OUTPUT_PATH} "
        f"--grpc_out={RUBY_OUTPUT_PATH} "
        "--plugin=protoc-gen-grpc=$(which grpc_ruby_plugin) "
        f"{' '.join(proto_files)}"
    )
elif compiler == "nodejs":
    ensure_output_directory(NODEJS_OUTPUT_PATH)
    command = (
        f"protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--js_out=import_style=commonjs,binary:{NODEJS_OUTPUT_PATH} "
        f"--grpc_out=grpc_js:{NODEJS_OUTPUT_PATH} "
        "--plugin=protoc-gen-js=$(which protoc-gen-js) "
        f"{' '.join(proto_files)}"
    )
elif compiler == "typescript":
    ensure_output_directory(TYPESCRIPT_OUTPUT_PATH)
    command = (
        f"protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--ts_out=grpc_js:{TYPESCRIPT_OUTPUT_PATH} "
        "--plugin=protoc-gen-ts=$(which protoc-gen-ts) "
        f"{' '.join(proto_files)}"
    )
else:
    print("warning: not valid input! we will compile for python")
    ensure_output_directory(PYTHON_OUTPUT_PATH)
    command = (
        f"python -m grpc_tools.protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--python_out={PYTHON_OUTPUT_PATH} "
        f"--grpc_python_out={PYTHON_OUTPUT_PATH} "
        f"{' '.join(proto_files)}"
    )

print(f"Executing command: {command}")

# Check if required plugins are available for nodejs/typescript
if compiler in ["nodejs", "typescript"]:
    protoc_gen_ts_check = os.system("which protoc-gen-ts > /dev/null 2>&1")
    if protoc_gen_ts_check != 0:
        print("Warning: protoc-gen-ts not found. Install with: npm install -g protoc-gen-ts")
    
    if compiler == "nodejs":
        grpc_plugin_check = os.system("which grpc_tools_node_protoc_plugin > /dev/null 2>&1")
        if grpc_plugin_check != 0:
            print("Warning: grpc_tools_node_protoc_plugin not found. Install grpc-tools package.")

exit_code = os.system(command)

if exit_code == 0:
    print("Proto files compiled successfully.")
    # List generated files
    if compiler == "nodejs":
        print(f"Generated files in {NODEJS_OUTPUT_PATH}:")
        for root, dirs, files in os.walk(NODEJS_OUTPUT_PATH):
            for file in files:
                print(f"  - {os.path.join(root, file)}")
    elif compiler == "typescript":
        print(f"Generated files in {TYPESCRIPT_OUTPUT_PATH}:")
        for root, dirs, files in os.walk(TYPESCRIPT_OUTPUT_PATH):
            for file in files:
                print(f"  - {os.path.join(root, file)}")
else:
    print("Error: Proto files compilation failed.")
    print(f"Exit code: {exit_code}")
