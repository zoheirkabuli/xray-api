// source: proxy/blackhole/config.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {missingRequire} reports error on implicit type usages.
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!
/* eslint-disable */
// @ts-nocheck

var jspb = require('google-protobuf');
var goog = jspb;
var global =
    (typeof globalThis !== 'undefined' && globalThis) ||
    (typeof window !== 'undefined' && window) ||
    (typeof global !== 'undefined' && global) ||
    (typeof self !== 'undefined' && self) ||
    (function () { return this; }).call(null) ||
    Function('return this')();

var common_serial_typed_message_pb = require('../../common/serial/typed_message_pb.js');
goog.object.extend(proto, common_serial_typed_message_pb);
goog.exportSymbol('proto.xray.proxy.blackhole.Config', null, global);
goog.exportSymbol('proto.xray.proxy.blackhole.HTTPResponse', null, global);
goog.exportSymbol('proto.xray.proxy.blackhole.NoneResponse', null, global);
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.xray.proxy.blackhole.NoneResponse = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.xray.proxy.blackhole.NoneResponse, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.xray.proxy.blackhole.NoneResponse.displayName = 'proto.xray.proxy.blackhole.NoneResponse';
}
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.xray.proxy.blackhole.HTTPResponse = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.xray.proxy.blackhole.HTTPResponse, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.xray.proxy.blackhole.HTTPResponse.displayName = 'proto.xray.proxy.blackhole.HTTPResponse';
}
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.xray.proxy.blackhole.Config = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.xray.proxy.blackhole.Config, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.xray.proxy.blackhole.Config.displayName = 'proto.xray.proxy.blackhole.Config';
}



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.xray.proxy.blackhole.NoneResponse.prototype.toObject = function(opt_includeInstance) {
  return proto.xray.proxy.blackhole.NoneResponse.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.xray.proxy.blackhole.NoneResponse} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.blackhole.NoneResponse.toObject = function(includeInstance, msg) {
  var f, obj = {

  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.xray.proxy.blackhole.NoneResponse}
 */
proto.xray.proxy.blackhole.NoneResponse.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.xray.proxy.blackhole.NoneResponse;
  return proto.xray.proxy.blackhole.NoneResponse.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.xray.proxy.blackhole.NoneResponse} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.xray.proxy.blackhole.NoneResponse}
 */
proto.xray.proxy.blackhole.NoneResponse.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.xray.proxy.blackhole.NoneResponse.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.xray.proxy.blackhole.NoneResponse.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.xray.proxy.blackhole.NoneResponse} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.blackhole.NoneResponse.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
};





if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.xray.proxy.blackhole.HTTPResponse.prototype.toObject = function(opt_includeInstance) {
  return proto.xray.proxy.blackhole.HTTPResponse.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.xray.proxy.blackhole.HTTPResponse} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.blackhole.HTTPResponse.toObject = function(includeInstance, msg) {
  var f, obj = {

  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.xray.proxy.blackhole.HTTPResponse}
 */
proto.xray.proxy.blackhole.HTTPResponse.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.xray.proxy.blackhole.HTTPResponse;
  return proto.xray.proxy.blackhole.HTTPResponse.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.xray.proxy.blackhole.HTTPResponse} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.xray.proxy.blackhole.HTTPResponse}
 */
proto.xray.proxy.blackhole.HTTPResponse.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.xray.proxy.blackhole.HTTPResponse.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.xray.proxy.blackhole.HTTPResponse.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.xray.proxy.blackhole.HTTPResponse} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.blackhole.HTTPResponse.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
};





if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.xray.proxy.blackhole.Config.prototype.toObject = function(opt_includeInstance) {
  return proto.xray.proxy.blackhole.Config.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.xray.proxy.blackhole.Config} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.blackhole.Config.toObject = function(includeInstance, msg) {
  var f, obj = {
response: (f = msg.getResponse()) && common_serial_typed_message_pb.TypedMessage.toObject(includeInstance, f)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.xray.proxy.blackhole.Config}
 */
proto.xray.proxy.blackhole.Config.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.xray.proxy.blackhole.Config;
  return proto.xray.proxy.blackhole.Config.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.xray.proxy.blackhole.Config} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.xray.proxy.blackhole.Config}
 */
proto.xray.proxy.blackhole.Config.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new common_serial_typed_message_pb.TypedMessage;
      reader.readMessage(value,common_serial_typed_message_pb.TypedMessage.deserializeBinaryFromReader);
      msg.setResponse(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.xray.proxy.blackhole.Config.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.xray.proxy.blackhole.Config.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.xray.proxy.blackhole.Config} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.blackhole.Config.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getResponse();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      common_serial_typed_message_pb.TypedMessage.serializeBinaryToWriter
    );
  }
};


/**
 * optional xray.common.serial.TypedMessage response = 1;
 * @return {?proto.xray.common.serial.TypedMessage}
 */
proto.xray.proxy.blackhole.Config.prototype.getResponse = function() {
  return /** @type{?proto.xray.common.serial.TypedMessage} */ (
    jspb.Message.getWrapperField(this, common_serial_typed_message_pb.TypedMessage, 1));
};


/**
 * @param {?proto.xray.common.serial.TypedMessage|undefined} value
 * @return {!proto.xray.proxy.blackhole.Config} returns this
*/
proto.xray.proxy.blackhole.Config.prototype.setResponse = function(value) {
  return jspb.Message.setWrapperField(this, 1, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.xray.proxy.blackhole.Config} returns this
 */
proto.xray.proxy.blackhole.Config.prototype.clearResponse = function() {
  return this.setResponse(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.xray.proxy.blackhole.Config.prototype.hasResponse = function() {
  return jspb.Message.getField(this, 1) != null;
};


goog.object.extend(exports, proto.xray.proxy.blackhole);
