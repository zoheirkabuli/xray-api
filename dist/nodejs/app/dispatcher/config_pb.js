// source: app/dispatcher/config.proto
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

goog.exportSymbol('proto.xray.app.dispatcher.Config', null, global);
goog.exportSymbol('proto.xray.app.dispatcher.SessionConfig', null, global);
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
proto.xray.app.dispatcher.SessionConfig = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.xray.app.dispatcher.SessionConfig, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.xray.app.dispatcher.SessionConfig.displayName = 'proto.xray.app.dispatcher.SessionConfig';
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
proto.xray.app.dispatcher.Config = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.xray.app.dispatcher.Config, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.xray.app.dispatcher.Config.displayName = 'proto.xray.app.dispatcher.Config';
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
proto.xray.app.dispatcher.SessionConfig.prototype.toObject = function(opt_includeInstance) {
  return proto.xray.app.dispatcher.SessionConfig.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.xray.app.dispatcher.SessionConfig} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.app.dispatcher.SessionConfig.toObject = function(includeInstance, msg) {
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
 * @return {!proto.xray.app.dispatcher.SessionConfig}
 */
proto.xray.app.dispatcher.SessionConfig.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.xray.app.dispatcher.SessionConfig;
  return proto.xray.app.dispatcher.SessionConfig.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.xray.app.dispatcher.SessionConfig} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.xray.app.dispatcher.SessionConfig}
 */
proto.xray.app.dispatcher.SessionConfig.deserializeBinaryFromReader = function(msg, reader) {
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
proto.xray.app.dispatcher.SessionConfig.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.xray.app.dispatcher.SessionConfig.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.xray.app.dispatcher.SessionConfig} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.app.dispatcher.SessionConfig.serializeBinaryToWriter = function(message, writer) {
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
proto.xray.app.dispatcher.Config.prototype.toObject = function(opt_includeInstance) {
  return proto.xray.app.dispatcher.Config.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.xray.app.dispatcher.Config} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.app.dispatcher.Config.toObject = function(includeInstance, msg) {
  var f, obj = {
settings: (f = msg.getSettings()) && proto.xray.app.dispatcher.SessionConfig.toObject(includeInstance, f)
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
 * @return {!proto.xray.app.dispatcher.Config}
 */
proto.xray.app.dispatcher.Config.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.xray.app.dispatcher.Config;
  return proto.xray.app.dispatcher.Config.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.xray.app.dispatcher.Config} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.xray.app.dispatcher.Config}
 */
proto.xray.app.dispatcher.Config.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto.xray.app.dispatcher.SessionConfig;
      reader.readMessage(value,proto.xray.app.dispatcher.SessionConfig.deserializeBinaryFromReader);
      msg.setSettings(value);
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
proto.xray.app.dispatcher.Config.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.xray.app.dispatcher.Config.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.xray.app.dispatcher.Config} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.app.dispatcher.Config.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getSettings();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      proto.xray.app.dispatcher.SessionConfig.serializeBinaryToWriter
    );
  }
};


/**
 * optional SessionConfig settings = 1;
 * @return {?proto.xray.app.dispatcher.SessionConfig}
 */
proto.xray.app.dispatcher.Config.prototype.getSettings = function() {
  return /** @type{?proto.xray.app.dispatcher.SessionConfig} */ (
    jspb.Message.getWrapperField(this, proto.xray.app.dispatcher.SessionConfig, 1));
};


/**
 * @param {?proto.xray.app.dispatcher.SessionConfig|undefined} value
 * @return {!proto.xray.app.dispatcher.Config} returns this
*/
proto.xray.app.dispatcher.Config.prototype.setSettings = function(value) {
  return jspb.Message.setWrapperField(this, 1, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.xray.app.dispatcher.Config} returns this
 */
proto.xray.app.dispatcher.Config.prototype.clearSettings = function() {
  return this.setSettings(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.xray.app.dispatcher.Config.prototype.hasSettings = function() {
  return jspb.Message.getField(this, 1) != null;
};


goog.object.extend(exports, proto.xray.app.dispatcher);
