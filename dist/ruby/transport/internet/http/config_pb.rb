# frozen_string_literal: true
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: transport/internet/http/config.proto

require 'google/protobuf'

require 'transport/internet/headers/http/config_pb'


descriptor_data = "\n$transport/internet/http/config.proto\x12\x1cxray.transport.internet.http\x1a,transport/internet/headers/http/config.proto\"\xa6\x01\n\x06\x43onfig\x12\x0c\n\x04host\x18\x01 \x03(\t\x12\x0c\n\x04path\x18\x02 \x01(\t\x12\x14\n\x0cidle_timeout\x18\x03 \x01(\x05\x12\x1c\n\x14health_check_timeout\x18\x04 \x01(\x05\x12\x0e\n\x06method\x18\x05 \x01(\t\x12<\n\x06header\x18\x06 \x03(\x0b\x32,.xray.transport.internet.headers.http.HeaderBv\n com.xray.transport.internet.httpP\x01Z1github.com/xtls/xray-core/transport/internet/http\xaa\x02\x1cXray.Transport.Internet.Httpb\x06proto3"

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
    ["xray.transport.internet.headers.http.Header", "transport/internet/headers/http/config.proto"],
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
      module Http
        Config = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.transport.internet.http.Config").msgclass
      end
    end
  end
end
