# frozen_string_literal: true
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proxy/vless/encoding/addons.proto

require 'google/protobuf'


descriptor_data = "\n!proxy/vless/encoding/addons.proto\x12\x19xray.proxy.vless.encoding\"$\n\x06\x41\x64\x64ons\x12\x0c\n\x04\x46low\x18\x01 \x01(\t\x12\x0c\n\x04Seed\x18\x02 \x01(\x0c\x42m\n\x1d\x63om.xray.proxy.vless.encodingP\x01Z.github.com/xtls/xray-core/proxy/vless/encoding\xaa\x02\x19Xray.Proxy.Vless.Encodingb\x06proto3"

pool = Google::Protobuf::DescriptorPool.generated_pool

begin
  pool.add_serialized_file(descriptor_data)
rescue TypeError
  # Compatibility code: will be removed in the next major version.
  require 'google/protobuf/descriptor_pb'
  parsed = Google::Protobuf::FileDescriptorProto.decode(descriptor_data)
  parsed.clear_dependency
  serialized = parsed.class.encode(parsed)
  file = pool.add_serialized_file(serialized)
  warn "Warning: Protobuf detected an import path issue while loading generated file #{__FILE__}"
  imports = [
  ]
  imports.each do |type_name, expected_filename|
    import_file = pool.lookup(type_name).file_descriptor
    if import_file.name != expected_filename
      warn "- #{file.name} imports #{expected_filename}, but that import was loaded as #{import_file.name}"
    end
  end
  warn "Each proto file must use a consistent fully-qualified name."
  warn "This will become an error in the next major version."
end

module Xray
  module Proxy
    module Vless
      module Encoding
        Addons = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.proxy.vless.encoding.Addons").msgclass
      end
    end
  end
end
