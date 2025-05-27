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


proto_files = find_proto_files()


if len(sys.argv) < 2:
    print("Please use the script correctly!")
    sys.exit(1)

compiler = sys.argv[1]
if compiler == "python":
    command = (
        f"python -m grpc_tools.protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--python_out={PYTHON_OUTPUT_PATH} "
        f"--grpc_python_out={PYTHON_OUTPUT_PATH} "
        f"{' '.join(proto_files)}"
    )
elif compiler == "cpp":
    command = (
        f"protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--cpp_out={CPP_OUTPUT_PATH} "
        f"--grpc_out={CPP_OUTPUT_PATH} "
        "--plugin=protoc-gen-grpc=$(which grpc_cpp_plugin) "
        f"{' '.join(proto_files)}"
    )
elif compiler == "csharp":
    command = (
        f"protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--csharp_out={CSHARP_OUTPUT_PATH} "
        f"--grpc_out={CSHARP_OUTPUT_PATH} "
        "--plugin=protoc-gen-grpc=$(which grpc_csharp_plugin) "
        f"{' '.join(proto_files)}"
    )
elif compiler == "ruby":
    command = (
        f"protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--ruby_out={RUBY_OUTPUT_PATH} "
        f"--grpc_out={RUBY_OUTPUT_PATH} "
        "--plugin=protoc-gen-grpc=$(which grpc_ruby_plugin) "
        f"{' '.join(proto_files)}"
    )
elif compiler == "nodejs":
    command = (
        f"protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--js_out=import_style=commonjs,binary:{NODEJS_OUTPUT_PATH} "
        f"--grpc_out=grpc_js:{NODEJS_OUTPUT_PATH} "
        f"--ts_out=grpc_js:{NODEJS_OUTPUT_PATH} "
        "--plugin=protoc-gen-grpc=$(which grpc_tools_node_protoc_plugin) "
        "--plugin=protoc-gen-ts=$(which protoc-gen-ts) "
        f"{' '.join(proto_files)}"
    )
elif compiler == "typescript":
    command = (
        f"protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--ts_out=grpc_js:{TYPESCRIPT_OUTPUT_PATH} "
        "--plugin=protoc-gen-ts=$(which protoc-gen-ts) "
        f"{' '.join(proto_files)}"
    )
else:
    print("warning: not valid input! we will compile for python")
    command = (
        f"python -m grpc_tools.protoc "
        f"--proto_path={XRAY_API_PATH} "
        f"--python_out={PYTHON_OUTPUT_PATH} "
        f"--grpc_python_out={PYTHON_OUTPUT_PATH} "
        f"{' '.join(proto_files)}"
    )

exit_code = os.system(command)

if exit_code == 0:
    print("Proto files compiled successfully.")
else:
    print("Error: Proto files compilation failed.")
