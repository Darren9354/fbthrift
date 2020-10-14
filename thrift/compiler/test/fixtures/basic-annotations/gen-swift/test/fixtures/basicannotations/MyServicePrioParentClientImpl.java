/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basicannotations;

import com.facebook.nifty.client.RequestChannel;
import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.facebook.swift.service.metadata.*;
import com.facebook.swift.transport.client.*;
import java.io.*;
import java.lang.reflect.Method;
import java.util.*;
import org.apache.thrift.ProtocolId;
import reactor.core.publisher.Mono;

@SwiftGenerated
public class MyServicePrioParentClientImpl extends AbstractThriftClient implements MyServicePrioParent {


    // Method Handlers
    private ThriftMethodHandler pingMethodHandler;
    private ThriftMethodHandler pongMethodHandler;

    // Method Exceptions
    private static final Class[] pingExceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] pongExceptions = new Class[] {
        org.apache.thrift.TException.class};

    public MyServicePrioParentClientImpl(
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      super(channel, headers, persistentHeaders, eventHandlers);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      pingMethodHandler = methodHandlerMap.get("ping");
      pongMethodHandler = methodHandlerMap.get("pong");
    }

    public MyServicePrioParentClientImpl(
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      super(headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      pingMethodHandler = methodHandlerMap.get("ping");
      pongMethodHandler = methodHandlerMap.get("pong");
    }

    @Override
    public void close() {
        super.close();
    }


    @Override
    public void ping() throws org.apache.thrift.TException {
      try {
        execute(pingMethodHandler, pingExceptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    @Override
    public void pong() throws org.apache.thrift.TException {
      try {
        execute(pongMethodHandler, pongExceptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }


    public void ping(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        executeWithOptions(pingMethodHandler, pingExceptions, rpcOptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    public void pong(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        executeWithOptions(pongMethodHandler, pongExceptions, rpcOptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }
}
