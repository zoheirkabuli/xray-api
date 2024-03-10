# frozen_string_literal: true
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: transport/internet/tcp/config.proto

require 'google/protobuf'

require 'common/serial/typed_message_pb'


descriptor_data = "\n#transport/internet/tcp/config.proto\x12\x1bxray.transport.internet.tcp\x1a!common/serial/typed_message.proto\"h\n\x06\x43onfig\x12\x39\n\x0fheader_settings\x18\x02 \x01(\x0b\x32 .xray.common.serial.TypedMessage\x12\x1d\n\x15\x61\x63\x63\x65pt_proxy_protocol\x18\x03 \x01(\x08J\x04\x08\x01\x10\x02\x42s\n\x1f\x63om.xray.transport.internet.tcpP\x01Z0github.com/xtls/xray-core/transport/internet/tcp\xaa\x02\x1bXray.Transport.Internet.Tcpb\x06proto3"

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
    ["xray.common.serial.TypedMessage", "common/serial/typed_message.proto"],
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
  module Transport
    module Internet
      module Tcp
        Config = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.transport.internet.tcp.Config").msgclass
      end
    end
  end
end
