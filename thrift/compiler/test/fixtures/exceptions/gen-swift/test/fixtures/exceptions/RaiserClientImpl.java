/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.exceptions;

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
public class RaiserClientImpl extends AbstractThriftClient implements Raiser {


    // Method Handlers
    private ThriftMethodHandler doBlandMethodHandler;
    private ThriftMethodHandler doRaiseMethodHandler;
    private ThriftMethodHandler get200MethodHandler;
    private ThriftMethodHandler get500MethodHandler;

    // Method Exceptions
    private static final Class[] doBlandExceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] doRaiseExceptions = new Class[] {
        test.fixtures.exceptions.Banal.class, test.fixtures.exceptions.Fiery.class, test.fixtures.exceptions.Serious.class, org.apache.thrift.TException.class};
    private static final Class[] get200Exceptions = new Class[] {
        org.apache.thrift.TException.class};
    private static final Class[] get500Exceptions = new Class[] {
        test.fixtures.exceptions.Fiery.class, test.fixtures.exceptions.Banal.class, test.fixtures.exceptions.Serious.class, org.apache.thrift.TException.class};

    public RaiserClientImpl(
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
      doBlandMethodHandler = methodHandlerMap.get("doBland");
      doRaiseMethodHandler = methodHandlerMap.get("doRaise");
      get200MethodHandler = methodHandlerMap.get("get200");
      get500MethodHandler = methodHandlerMap.get("get500");
    }

    public RaiserClientImpl(
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
      doBlandMethodHandler = methodHandlerMap.get("doBland");
      doRaiseMethodHandler = methodHandlerMap.get("doRaise");
      get200MethodHandler = methodHandlerMap.get("get200");
      get500MethodHandler = methodHandlerMap.get("get500");
    }

    @Override
    public void close() {
        super.close();
    }


    @Override
    public void doBland() throws org.apache.thrift.TException {
      try {
        execute(doBlandMethodHandler, doBlandExceptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    @Override
    public void doRaise() throws test.fixtures.exceptions.Banal, test.fixtures.exceptions.Fiery, test.fixtures.exceptions.Serious, org.apache.thrift.TException {
      try {
        execute(doRaiseMethodHandler, doRaiseExceptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        if (t instanceof test.fixtures.exceptions.Banal) {
          throw (test.fixtures.exceptions.Banal) t;
        }
        if (t instanceof test.fixtures.exceptions.Fiery) {
          throw (test.fixtures.exceptions.Fiery) t;
        }
        if (t instanceof test.fixtures.exceptions.Serious) {
          throw (test.fixtures.exceptions.Serious) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    @Override
    public String get200() throws org.apache.thrift.TException {
      try {
        return (String) execute(get200MethodHandler, get200Exceptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    @Override
    public String get500() throws test.fixtures.exceptions.Fiery, test.fixtures.exceptions.Banal, test.fixtures.exceptions.Serious, org.apache.thrift.TException {
      try {
        return (String) execute(get500MethodHandler, get500Exceptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        if (t instanceof test.fixtures.exceptions.Fiery) {
          throw (test.fixtures.exceptions.Fiery) t;
        }
        if (t instanceof test.fixtures.exceptions.Banal) {
          throw (test.fixtures.exceptions.Banal) t;
        }
        if (t instanceof test.fixtures.exceptions.Serious) {
          throw (test.fixtures.exceptions.Serious) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }


    public void doBland(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        executeWithOptions(doBlandMethodHandler, doBlandExceptions, rpcOptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    public void doRaise(
        RpcOptions rpcOptions) throws test.fixtures.exceptions.Banal, test.fixtures.exceptions.Fiery, test.fixtures.exceptions.Serious, org.apache.thrift.TException {
      try {
        executeWithOptions(doRaiseMethodHandler, doRaiseExceptions, rpcOptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        if (t instanceof test.fixtures.exceptions.Banal) {
          throw (test.fixtures.exceptions.Banal) t;
        }
        if (t instanceof test.fixtures.exceptions.Fiery) {
          throw (test.fixtures.exceptions.Fiery) t;
        }
        if (t instanceof test.fixtures.exceptions.Serious) {
          throw (test.fixtures.exceptions.Serious) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    public String get200(
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        return (String) executeWithOptions(get200MethodHandler, get200Exceptions, rpcOptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }

    public String get500(
        RpcOptions rpcOptions) throws test.fixtures.exceptions.Fiery, test.fixtures.exceptions.Banal, test.fixtures.exceptions.Serious, org.apache.thrift.TException {
      try {
        return (String) executeWithOptions(get500MethodHandler, get500Exceptions, rpcOptions);
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        if (t instanceof test.fixtures.exceptions.Fiery) {
          throw (test.fixtures.exceptions.Fiery) t;
        }
        if (t instanceof test.fixtures.exceptions.Banal) {
          throw (test.fixtures.exceptions.Banal) t;
        }
        if (t instanceof test.fixtures.exceptions.Serious) {
          throw (test.fixtures.exceptions.Serious) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }
}
