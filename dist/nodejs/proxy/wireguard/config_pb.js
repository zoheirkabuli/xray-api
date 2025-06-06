// source: proxy/wireguard/config.proto
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

goog.exportSymbol('proto.xray.proxy.wireguard.DeviceConfig', null, global);
goog.exportSymbol('proto.xray.proxy.wireguard.DeviceConfig.DomainStrategy', null, global);
goog.exportSymbol('proto.xray.proxy.wireguard.PeerConfig', null, global);
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
proto.xray.proxy.wireguard.PeerConfig = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.xray.proxy.wireguard.PeerConfig.repeatedFields_, null);
};
goog.inherits(proto.xray.proxy.wireguard.PeerConfig, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.xray.proxy.wireguard.PeerConfig.displayName = 'proto.xray.proxy.wireguard.PeerConfig';
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
proto.xray.proxy.wireguard.DeviceConfig = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.xray.proxy.wireguard.DeviceConfig.repeatedFields_, null);
};
goog.inherits(proto.xray.proxy.wireguard.DeviceConfig, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.xray.proxy.wireguard.DeviceConfig.displayName = 'proto.xray.proxy.wireguard.DeviceConfig';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.xray.proxy.wireguard.PeerConfig.repeatedFields_ = [5];



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
proto.xray.proxy.wireguard.PeerConfig.prototype.toObject = function(opt_includeInstance) {
  return proto.xray.proxy.wireguard.PeerConfig.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.xray.proxy.wireguard.PeerConfig} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.wireguard.PeerConfig.toObject = function(includeInstance, msg) {
  var f, obj = {
publicKey: jspb.Message.getFieldWithDefault(msg, 1, ""),
preSharedKey: jspb.Message.getFieldWithDefault(msg, 2, ""),
endpoint: jspb.Message.getFieldWithDefault(msg, 3, ""),
keepAlive: jspb.Message.getFieldWithDefault(msg, 4, 0),
allowedIpsList: (f = jspb.Message.getRepeatedField(msg, 5)) == null ? undefined : f
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
 * @return {!proto.xray.proxy.wireguard.PeerConfig}
 */
proto.xray.proxy.wireguard.PeerConfig.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.xray.proxy.wireguard.PeerConfig;
  return proto.xray.proxy.wireguard.PeerConfig.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.xray.proxy.wireguard.PeerConfig} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.xray.proxy.wireguard.PeerConfig}
 */
proto.xray.proxy.wireguard.PeerConfig.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setPublicKey(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setPreSharedKey(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setEndpoint(value);
      break;
    case 4:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setKeepAlive(value);
      break;
    case 5:
      var value = /** @type {string} */ (reader.readString());
      msg.addAllowedIps(value);
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
proto.xray.proxy.wireguard.PeerConfig.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.xray.proxy.wireguard.PeerConfig.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.xray.proxy.wireguard.PeerConfig} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.wireguard.PeerConfig.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getPublicKey();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getPreSharedKey();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getEndpoint();
  if (f.length > 0) {
    writer.writeString(
      3,
      f
    );
  }
  f = message.getKeepAlive();
  if (f !== 0) {
    writer.writeUint32(
      4,
      f
    );
  }
  f = message.getAllowedIpsList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      5,
      f
    );
  }
};


/**
 * optional string public_key = 1;
 * @return {string}
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.getPublicKey = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/**
 * @param {string} value
 * @return {!proto.xray.proxy.wireguard.PeerConfig} returns this
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.setPublicKey = function(value) {
  return jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional string pre_shared_key = 2;
 * @return {string}
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.getPreSharedKey = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/**
 * @param {string} value
 * @return {!proto.xray.proxy.wireguard.PeerConfig} returns this
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.setPreSharedKey = function(value) {
  return jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional string endpoint = 3;
 * @return {string}
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.getEndpoint = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/**
 * @param {string} value
 * @return {!proto.xray.proxy.wireguard.PeerConfig} returns this
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.setEndpoint = function(value) {
  return jspb.Message.setProto3StringField(this, 3, value);
};


/**
 * optional uint32 keep_alive = 4;
 * @return {number}
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.getKeepAlive = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 4, 0));
};


/**
 * @param {number} value
 * @return {!proto.xray.proxy.wireguard.PeerConfig} returns this
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.setKeepAlive = function(value) {
  return jspb.Message.setProto3IntField(this, 4, value);
};


/**
 * repeated string allowed_ips = 5;
 * @return {!Array<string>}
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.getAllowedIpsList = function() {
  return /** @type {!Array<string>} */ (jspb.Message.getRepeatedField(this, 5));
};


/**
 * @param {!Array<string>} value
 * @return {!proto.xray.proxy.wireguard.PeerConfig} returns this
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.setAllowedIpsList = function(value) {
  return jspb.Message.setField(this, 5, value || []);
};


/**
 * @param {string} value
 * @param {number=} opt_index
 * @return {!proto.xray.proxy.wireguard.PeerConfig} returns this
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.addAllowedIps = function(value, opt_index) {
  return jspb.Message.addToRepeatedField(this, 5, value, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.xray.proxy.wireguard.PeerConfig} returns this
 */
proto.xray.proxy.wireguard.PeerConfig.prototype.clearAllowedIpsList = function() {
  return this.setAllowedIpsList([]);
};



/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.xray.proxy.wireguard.DeviceConfig.repeatedFields_ = [2,3];



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
proto.xray.proxy.wireguard.DeviceConfig.prototype.toObject = function(opt_includeInstance) {
  return proto.xray.proxy.wireguard.DeviceConfig.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.xray.proxy.wireguard.DeviceConfig} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.wireguard.DeviceConfig.toObject = function(includeInstance, msg) {
  var f, obj = {
secretKey: jspb.Message.getFieldWithDefault(msg, 1, ""),
endpointList: (f = jspb.Message.getRepeatedField(msg, 2)) == null ? undefined : f,
peersList: jspb.Message.toObjectList(msg.getPeersList(),
    proto.xray.proxy.wireguard.PeerConfig.toObject, includeInstance),
mtu: jspb.Message.getFieldWithDefault(msg, 4, 0),
numWorkers: jspb.Message.getFieldWithDefault(msg, 5, 0),
reserved: msg.getReserved_asB64(),
domainStrategy: jspb.Message.getFieldWithDefault(msg, 7, 0),
isClient: jspb.Message.getBooleanFieldWithDefault(msg, 8, false),
noKernelTun: jspb.Message.getBooleanFieldWithDefault(msg, 9, false)
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
 * @return {!proto.xray.proxy.wireguard.DeviceConfig}
 */
proto.xray.proxy.wireguard.DeviceConfig.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.xray.proxy.wireguard.DeviceConfig;
  return proto.xray.proxy.wireguard.DeviceConfig.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.xray.proxy.wireguard.DeviceConfig} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.xray.proxy.wireguard.DeviceConfig}
 */
proto.xray.proxy.wireguard.DeviceConfig.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setSecretKey(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.addEndpoint(value);
      break;
    case 3:
      var value = new proto.xray.proxy.wireguard.PeerConfig;
      reader.readMessage(value,proto.xray.proxy.wireguard.PeerConfig.deserializeBinaryFromReader);
      msg.addPeers(value);
      break;
    case 4:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setMtu(value);
      break;
    case 5:
      var value = /** @type {number} */ (reader.readInt32());
      msg.setNumWorkers(value);
      break;
    case 6:
      var value = /** @type {!Uint8Array} */ (reader.readBytes());
      msg.setReserved(value);
      break;
    case 7:
      var value = /** @type {!proto.xray.proxy.wireguard.DeviceConfig.DomainStrategy} */ (reader.readEnum());
      msg.setDomainStrategy(value);
      break;
    case 8:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setIsClient(value);
      break;
    case 9:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setNoKernelTun(value);
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
proto.xray.proxy.wireguard.DeviceConfig.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.xray.proxy.wireguard.DeviceConfig.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.xray.proxy.wireguard.DeviceConfig} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.wireguard.DeviceConfig.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getSecretKey();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getEndpointList();
  if (f.length > 0) {
    writer.writeRepeatedString(
      2,
      f
    );
  }
  f = message.getPeersList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      3,
      f,
      proto.xray.proxy.wireguard.PeerConfig.serializeBinaryToWriter
    );
  }
  f = message.getMtu();
  if (f !== 0) {
    writer.writeInt32(
      4,
      f
    );
  }
  f = message.getNumWorkers();
  if (f !== 0) {
    writer.writeInt32(
      5,
      f
    );
  }
  f = message.getReserved_asU8();
  if (f.length > 0) {
    writer.writeBytes(
      6,
      f
    );
  }
  f = message.getDomainStrategy();
  if (f !== 0.0) {
    writer.writeEnum(
      7,
      f
    );
  }
  f = message.getIsClient();
  if (f) {
    writer.writeBool(
      8,
      f
    );
  }
  f = message.getNoKernelTun();
  if (f) {
    writer.writeBool(
      9,
      f
    );
  }
};


/**
 * @enum {number}
 */
proto.xray.proxy.wireguard.DeviceConfig.DomainStrategy = {
  FORCE_IP: 0,
  FORCE_IP4: 1,
  FORCE_IP6: 2,
  FORCE_IP46: 3,
  FORCE_IP64: 4
};

/**
 * optional string secret_key = 1;
 * @return {string}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.getSecretKey = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/**
 * @param {string} value
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.setSecretKey = function(value) {
  return jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * repeated string endpoint = 2;
 * @return {!Array<string>}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.getEndpointList = function() {
  return /** @type {!Array<string>} */ (jspb.Message.getRepeatedField(this, 2));
};


/**
 * @param {!Array<string>} value
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.setEndpointList = function(value) {
  return jspb.Message.setField(this, 2, value || []);
};


/**
 * @param {string} value
 * @param {number=} opt_index
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.addEndpoint = function(value, opt_index) {
  return jspb.Message.addToRepeatedField(this, 2, value, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.clearEndpointList = function() {
  return this.setEndpointList([]);
};


/**
 * repeated PeerConfig peers = 3;
 * @return {!Array<!proto.xray.proxy.wireguard.PeerConfig>}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.getPeersList = function() {
  return /** @type{!Array<!proto.xray.proxy.wireguard.PeerConfig>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.xray.proxy.wireguard.PeerConfig, 3));
};


/**
 * @param {!Array<!proto.xray.proxy.wireguard.PeerConfig>} value
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
*/
proto.xray.proxy.wireguard.DeviceConfig.prototype.setPeersList = function(value) {
  return jspb.Message.setRepeatedWrapperField(this, 3, value);
};


/**
 * @param {!proto.xray.proxy.wireguard.PeerConfig=} opt_value
 * @param {number=} opt_index
 * @return {!proto.xray.proxy.wireguard.PeerConfig}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.addPeers = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 3, opt_value, proto.xray.proxy.wireguard.PeerConfig, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.clearPeersList = function() {
  return this.setPeersList([]);
};


/**
 * optional int32 mtu = 4;
 * @return {number}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.getMtu = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 4, 0));
};


/**
 * @param {number} value
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.setMtu = function(value) {
  return jspb.Message.setProto3IntField(this, 4, value);
};


/**
 * optional int32 num_workers = 5;
 * @return {number}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.getNumWorkers = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 5, 0));
};


/**
 * @param {number} value
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.setNumWorkers = function(value) {
  return jspb.Message.setProto3IntField(this, 5, value);
};


/**
 * optional bytes reserved = 6;
 * @return {!(string|Uint8Array)}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.getReserved = function() {
  return /** @type {!(string|Uint8Array)} */ (jspb.Message.getFieldWithDefault(this, 6, ""));
};


/**
 * optional bytes reserved = 6;
 * This is a type-conversion wrapper around `getReserved()`
 * @return {string}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.getReserved_asB64 = function() {
  return /** @type {string} */ (jspb.Message.bytesAsB64(
      this.getReserved()));
};


/**
 * optional bytes reserved = 6;
 * Note that Uint8Array is not supported on all browsers.
 * @see http://caniuse.com/Uint8Array
 * This is a type-conversion wrapper around `getReserved()`
 * @return {!Uint8Array}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.getReserved_asU8 = function() {
  return /** @type {!Uint8Array} */ (jspb.Message.bytesAsU8(
      this.getReserved()));
};


/**
 * @param {!(string|Uint8Array)} value
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.setReserved = function(value) {
  return jspb.Message.setProto3BytesField(this, 6, value);
};


/**
 * optional DomainStrategy domain_strategy = 7;
 * @return {!proto.xray.proxy.wireguard.DeviceConfig.DomainStrategy}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.getDomainStrategy = function() {
  return /** @type {!proto.xray.proxy.wireguard.DeviceConfig.DomainStrategy} */ (jspb.Message.getFieldWithDefault(this, 7, 0));
};


/**
 * @param {!proto.xray.proxy.wireguard.DeviceConfig.DomainStrategy} value
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.setDomainStrategy = function(value) {
  return jspb.Message.setProto3EnumField(this, 7, value);
};


/**
 * optional bool is_client = 8;
 * @return {boolean}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.getIsClient = function() {
  return /** @type {boolean} */ (jspb.Message.getBooleanFieldWithDefault(this, 8, false));
};


/**
 * @param {boolean} value
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.setIsClient = function(value) {
  return jspb.Message.setProto3BooleanField(this, 8, value);
};


/**
 * optional bool no_kernel_tun = 9;
 * @return {boolean}
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.getNoKernelTun = function() {
  return /** @type {boolean} */ (jspb.Message.getBooleanFieldWithDefault(this, 9, false));
};


/**
 * @param {boolean} value
 * @return {!proto.xray.proxy.wireguard.DeviceConfig} returns this
 */
proto.xray.proxy.wireguard.DeviceConfig.prototype.setNoKernelTun = function(value) {
  return jspb.Message.setProto3BooleanField(this, 9, value);
};


goog.object.extend(exports, proto.xray.proxy.wireguard);
