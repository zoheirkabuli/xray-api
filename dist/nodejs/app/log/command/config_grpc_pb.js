// GENERATED CODE -- DO NOT EDIT!

'use strict';
var grpc = require('grpc');
var app_log_command_config_pb = require('../../../app/log/command/config_pb.js');

function serialize_xray_app_log_command_RestartLoggerRequest(arg) {
  if (!(arg instanceof app_log_command_config_pb.RestartLoggerRequest)) {
    throw new Error('Expected argument of type xray.app.log.command.RestartLoggerRequest');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_xray_app_log_command_RestartLoggerRequest(buffer_arg) {
  return app_log_command_config_pb.RestartLoggerRequest.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_xray_app_log_command_RestartLoggerResponse(arg) {
  if (!(arg instanceof app_log_command_config_pb.RestartLoggerResponse)) {
    throw new Error('Expected argument of type xray.app.log.command.RestartLoggerResponse');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_xray_app_log_command_RestartLoggerResponse(buffer_arg) {
  return app_log_command_config_pb.RestartLoggerResponse.deserializeBinary(new Uint8Array(buffer_arg));
}


var LoggerServiceService = exports.LoggerServiceService = {
  restartLogger: {
    path: '/xray.app.log.command.LoggerService/RestartLogger',
    requestStream: false,
    responseStream: false,
    requestType: app_log_command_config_pb.RestartLoggerRequest,
    responseType: app_log_command_config_pb.RestartLoggerResponse,
    requestSerialize: serialize_xray_app_log_command_RestartLoggerRequest,
    requestDeserialize: deserialize_xray_app_log_command_RestartLoggerRequest,
    responseSerialize: serialize_xray_app_log_command_RestartLoggerResponse,
    responseDeserialize: deserialize_xray_app_log_command_RestartLoggerResponse,
  },
};

exports.LoggerServiceClient = grpc.makeGenericClientConstructor(LoggerServiceService);
