// GENERATED CODE -- DO NOT EDIT!

'use strict';
var grpc = require('grpc');
var app_observatory_command_command_pb = require('../../../app/observatory/command/command_pb.js');
var app_observatory_config_pb = require('../../../app/observatory/config_pb.js');

function serialize_xray_core_app_observatory_command_GetOutboundStatusRequest(arg) {
  if (!(arg instanceof app_observatory_command_command_pb.GetOutboundStatusRequest)) {
    throw new Error('Expected argument of type xray.core.app.observatory.command.GetOutboundStatusRequest');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_xray_core_app_observatory_command_GetOutboundStatusRequest(buffer_arg) {
  return app_observatory_command_command_pb.GetOutboundStatusRequest.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_xray_core_app_observatory_command_GetOutboundStatusResponse(arg) {
  if (!(arg instanceof app_observatory_command_command_pb.GetOutboundStatusResponse)) {
    throw new Error('Expected argument of type xray.core.app.observatory.command.GetOutboundStatusResponse');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_xray_core_app_observatory_command_GetOutboundStatusResponse(buffer_arg) {
  return app_observatory_command_command_pb.GetOutboundStatusResponse.deserializeBinary(new Uint8Array(buffer_arg));
}


var ObservatoryServiceService = exports.ObservatoryServiceService = {
  getOutboundStatus: {
    path: '/xray.core.app.observatory.command.ObservatoryService/GetOutboundStatus',
    requestStream: false,
    responseStream: false,
    requestType: app_observatory_command_command_pb.GetOutboundStatusRequest,
    responseType: app_observatory_command_command_pb.GetOutboundStatusResponse,
    requestSerialize: serialize_xray_core_app_observatory_command_GetOutboundStatusRequest,
    requestDeserialize: deserialize_xray_core_app_observatory_command_GetOutboundStatusRequest,
    responseSerialize: serialize_xray_core_app_observatory_command_GetOutboundStatusResponse,
    responseDeserialize: deserialize_xray_core_app_observatory_command_GetOutboundStatusResponse,
  },
};

exports.ObservatoryServiceClient = grpc.makeGenericClientConstructor(ObservatoryServiceService);
