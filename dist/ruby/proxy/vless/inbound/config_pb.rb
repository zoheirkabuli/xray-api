# frozen_string_literal: true
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proxy/vless/inbound/config.proto

require 'google/protobuf'

require 'common/protocol/user_pb'


descriptor_data = "\n proxy/vless/inbound/config.proto\x12\x18xray.proxy.vless.inbound\x1a\x1a\x63ommon/protocol/user.proto\"^\n\x08\x46\x61llback\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x0c\n\x04\x61lpn\x18\x02 \x01(\t\x12\x0c\n\x04path\x18\x03 \x01(\t\x12\x0c\n\x04type\x18\x04 \x01(\t\x12\x0c\n\x04\x64\x65st\x18\x05 \x01(\t\x12\x0c\n\x04xver\x18\x06 \x01(\x04\"\x80\x01\n\x06\x43onfig\x12+\n\x07\x63lients\x18\x01 \x03(\x0b\x32\x1a.xray.common.protocol.User\x12\x12\n\ndecryption\x18\x02 \x01(\t\x12\x35\n\tfallbacks\x18\x03 \x03(\x0b\x32\".xray.proxy.vless.inbound.FallbackBj\n\x1c\x63om.xray.proxy.vless.inboundP\x01Z-github.com/xtls/xray-core/proxy/vless/inbound\xaa\x02\x18Xray.Proxy.Vless.Inboundb\x06proto3"

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
    ["xray.common.protocol.User", "common/protocol/user.proto"],
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
      module Inbound
        Fallback = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.proxy.vless.inbound.Fallback").msgclass
        Config = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.proxy.vless.inbound.Config").msgclass
      end
    end
  end
end
