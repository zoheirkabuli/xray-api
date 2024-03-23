# frozen_string_literal: true
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: common/protocol/headers.proto

require 'google/protobuf'


descriptor_data = "\n\x1d\x63ommon/protocol/headers.proto\x12\x14xray.common.protocol\"B\n\x0eSecurityConfig\x12\x30\n\x04type\x18\x01 \x01(\x0e\x32\".xray.common.protocol.SecurityType*`\n\x0cSecurityType\x12\x0b\n\x07UNKNOWN\x10\x00\x12\x08\n\x04\x41UTO\x10\x02\x12\x0e\n\nAES128_GCM\x10\x03\x12\x15\n\x11\x43HACHA20_POLY1305\x10\x04\x12\x08\n\x04NONE\x10\x05\x12\x08\n\x04ZERO\x10\x06\x42^\n\x18\x63om.xray.common.protocolP\x01Z)github.com/xtls/xray-core/common/protocol\xaa\x02\x14Xray.Common.Protocolb\x06proto3"

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
  module Common
    module Protocol
      SecurityConfig = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.common.protocol.SecurityConfig").msgclass
      SecurityType = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.common.protocol.SecurityType").enummodule
    end
  end
end