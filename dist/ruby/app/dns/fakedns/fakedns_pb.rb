# frozen_string_literal: true
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: app/dns/fakedns/fakedns.proto

require 'google/protobuf'


descriptor_data = "\n\x1d\x61pp/dns/fakedns/fakedns.proto\x12\x14xray.app.dns.fakedns\"/\n\x0b\x46\x61keDnsPool\x12\x0f\n\x07ip_pool\x18\x01 \x01(\t\x12\x0f\n\x07lruSize\x18\x02 \x01(\x03\"D\n\x10\x46\x61keDnsPoolMulti\x12\x30\n\x05pools\x18\x01 \x03(\x0b\x32!.xray.app.dns.fakedns.FakeDnsPoolB^\n\x18\x63om.xray.app.dns.fakednsP\x01Z)github.com/xtls/xray-core/app/dns/fakedns\xaa\x02\x14Xray.App.Dns.Fakednsb\x06proto3"

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
  module App
    module Dns
      module Fakedns
        FakeDnsPool = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.app.dns.fakedns.FakeDnsPool").msgclass
        FakeDnsPoolMulti = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.app.dns.fakedns.FakeDnsPoolMulti").msgclass
      end
    end
  end
end
