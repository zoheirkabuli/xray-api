# frozen_string_literal: true
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: transport/internet/websocket/config.proto

require 'google/protobuf'


descriptor_data = "\n)transport/internet/websocket/config.proto\x12!xray.transport.internet.websocket\"$\n\x06Header\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t\"\x82\x01\n\x06\x43onfig\x12\x0c\n\x04path\x18\x02 \x01(\t\x12\x39\n\x06header\x18\x03 \x03(\x0b\x32).xray.transport.internet.websocket.Header\x12\x1d\n\x15\x61\x63\x63\x65pt_proxy_protocol\x18\x04 \x01(\x08\x12\n\n\x02\x65\x64\x18\x05 \x01(\rJ\x04\x08\x01\x10\x02\x42\x85\x01\n%com.xray.transport.internet.websocketP\x01Z6github.com/xtls/xray-core/transport/internet/websocket\xaa\x02!Xray.Transport.Internet.Websocketb\x06proto3"

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
  module Transport
    module Internet
      module Websocket
        Header = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.transport.internet.websocket.Header").msgclass
        Config = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.transport.internet.websocket.Config").msgclass
      end
    end
  end
end
