// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v2.7.3
//   protoc               v6.31.1
// source: app/log/config.proto

/* eslint-disable */
import { BinaryReader, BinaryWriter } from "@bufbuild/protobuf/wire";
import { Severity, severityFromJSON, severityToJSON } from "../../common/log/log";

export const protobufPackage = "xray.app.log";

export enum LogType {
  None = 0,
  Console = 1,
  File = 2,
  Event = 3,
  UNRECOGNIZED = -1,
}

export function logTypeFromJSON(object: any): LogType {
  switch (object) {
    case 0:
    case "None":
      return LogType.None;
    case 1:
    case "Console":
      return LogType.Console;
    case 2:
    case "File":
      return LogType.File;
    case 3:
    case "Event":
      return LogType.Event;
    case -1:
    case "UNRECOGNIZED":
    default:
      return LogType.UNRECOGNIZED;
  }
}

export function logTypeToJSON(object: LogType): string {
  switch (object) {
    case LogType.None:
      return "None";
    case LogType.Console:
      return "Console";
    case LogType.File:
      return "File";
    case LogType.Event:
      return "Event";
    case LogType.UNRECOGNIZED:
    default:
      return "UNRECOGNIZED";
  }
}

export interface Config {
  errorLogType: LogType;
  errorLogLevel: Severity;
  errorLogPath: string;
  accessLogType: LogType;
  accessLogPath: string;
  enableDnsLog: boolean;
  maskAddress: string;
}

function createBaseConfig(): Config {
  return {
    errorLogType: 0,
    errorLogLevel: 0,
    errorLogPath: "",
    accessLogType: 0,
    accessLogPath: "",
    enableDnsLog: false,
    maskAddress: "",
  };
}

export const Config: MessageFns<Config> = {
  encode(message: Config, writer: BinaryWriter = new BinaryWriter()): BinaryWriter {
    if (message.errorLogType !== 0) {
      writer.uint32(8).int32(message.errorLogType);
    }
    if (message.errorLogLevel !== 0) {
      writer.uint32(16).int32(message.errorLogLevel);
    }
    if (message.errorLogPath !== "") {
      writer.uint32(26).string(message.errorLogPath);
    }
    if (message.accessLogType !== 0) {
      writer.uint32(32).int32(message.accessLogType);
    }
    if (message.accessLogPath !== "") {
      writer.uint32(42).string(message.accessLogPath);
    }
    if (message.enableDnsLog !== false) {
      writer.uint32(48).bool(message.enableDnsLog);
    }
    if (message.maskAddress !== "") {
      writer.uint32(58).string(message.maskAddress);
    }
    return writer;
  },

  decode(input: BinaryReader | Uint8Array, length?: number): Config {
    const reader = input instanceof BinaryReader ? input : new BinaryReader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseConfig();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1: {
          if (tag !== 8) {
            break;
          }

          message.errorLogType = reader.int32() as any;
          continue;
        }
        case 2: {
          if (tag !== 16) {
            break;
          }

          message.errorLogLevel = reader.int32() as any;
          continue;
        }
        case 3: {
          if (tag !== 26) {
            break;
          }

          message.errorLogPath = reader.string();
          continue;
        }
        case 4: {
          if (tag !== 32) {
            break;
          }

          message.accessLogType = reader.int32() as any;
          continue;
        }
        case 5: {
          if (tag !== 42) {
            break;
          }

          message.accessLogPath = reader.string();
          continue;
        }
        case 6: {
          if (tag !== 48) {
            break;
          }

          message.enableDnsLog = reader.bool();
          continue;
        }
        case 7: {
          if (tag !== 58) {
            break;
          }

          message.maskAddress = reader.string();
          continue;
        }
      }
      if ((tag & 7) === 4 || tag === 0) {
        break;
      }
      reader.skip(tag & 7);
    }
    return message;
  },

  fromJSON(object: any): Config {
    return {
      errorLogType: isSet(object.errorLogType) ? logTypeFromJSON(object.errorLogType) : 0,
      errorLogLevel: isSet(object.errorLogLevel) ? severityFromJSON(object.errorLogLevel) : 0,
      errorLogPath: isSet(object.errorLogPath) ? globalThis.String(object.errorLogPath) : "",
      accessLogType: isSet(object.accessLogType) ? logTypeFromJSON(object.accessLogType) : 0,
      accessLogPath: isSet(object.accessLogPath) ? globalThis.String(object.accessLogPath) : "",
      enableDnsLog: isSet(object.enableDnsLog) ? globalThis.Boolean(object.enableDnsLog) : false,
      maskAddress: isSet(object.maskAddress) ? globalThis.String(object.maskAddress) : "",
    };
  },

  toJSON(message: Config): unknown {
    const obj: any = {};
    if (message.errorLogType !== 0) {
      obj.errorLogType = logTypeToJSON(message.errorLogType);
    }
    if (message.errorLogLevel !== 0) {
      obj.errorLogLevel = severityToJSON(message.errorLogLevel);
    }
    if (message.errorLogPath !== "") {
      obj.errorLogPath = message.errorLogPath;
    }
    if (message.accessLogType !== 0) {
      obj.accessLogType = logTypeToJSON(message.accessLogType);
    }
    if (message.accessLogPath !== "") {
      obj.accessLogPath = message.accessLogPath;
    }
    if (message.enableDnsLog !== false) {
      obj.enableDnsLog = message.enableDnsLog;
    }
    if (message.maskAddress !== "") {
      obj.maskAddress = message.maskAddress;
    }
    return obj;
  },

  create<I extends Exact<DeepPartial<Config>, I>>(base?: I): Config {
    return Config.fromPartial(base ?? ({} as any));
  },
  fromPartial<I extends Exact<DeepPartial<Config>, I>>(object: I): Config {
    const message = createBaseConfig();
    message.errorLogType = object.errorLogType ?? 0;
    message.errorLogLevel = object.errorLogLevel ?? 0;
    message.errorLogPath = object.errorLogPath ?? "";
    message.accessLogType = object.accessLogType ?? 0;
    message.accessLogPath = object.accessLogPath ?? "";
    message.enableDnsLog = object.enableDnsLog ?? false;
    message.maskAddress = object.maskAddress ?? "";
    return message;
  },
};

type Builtin = Date | Function | Uint8Array | string | number | boolean | undefined;

export type DeepPartial<T> = T extends Builtin ? T
  : T extends globalThis.Array<infer U> ? globalThis.Array<DeepPartial<U>>
  : T extends ReadonlyArray<infer U> ? ReadonlyArray<DeepPartial<U>>
  : T extends {} ? { [K in keyof T]?: DeepPartial<T[K]> }
  : Partial<T>;

type KeysOfUnion<T> = T extends T ? keyof T : never;
export type Exact<P, I extends P> = P extends Builtin ? P
  : P & { [K in keyof P]: Exact<P[K], I[K]> } & { [K in Exclude<keyof I, KeysOfUnion<P>>]: never };

function isSet(value: any): boolean {
  return value !== null && value !== undefined;
}

export interface MessageFns<T> {
  encode(message: T, writer?: BinaryWriter): BinaryWriter;
  decode(input: BinaryReader | Uint8Array, length?: number): T;
  fromJSON(object: any): T;
  toJSON(message: T): unknown;
  create<I extends Exact<DeepPartial<T>, I>>(base?: I): T;
  fromPartial<I extends Exact<DeepPartial<T>, I>>(object: I): T;
}
