
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_local_LocalSocketImpl$LocalOutputStream__
#define __gnu_java_net_local_LocalSocketImpl$LocalOutputStream__

#pragma interface

#include <java/io/OutputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace local
        {
            class LocalSocketImpl;
            class LocalSocketImpl$LocalOutputStream;
        }
      }
    }
  }
}

class gnu::java::net::local::LocalSocketImpl$LocalOutputStream : public ::java::io::OutputStream
{

public: // actually package-private
  LocalSocketImpl$LocalOutputStream(::gnu::java::net::local::LocalSocketImpl *, ::gnu::java::net::local::LocalSocketImpl *);
public:
  virtual void close();
  virtual void flush();
  virtual void write(jint);
  virtual void write(JArray< jbyte > *);
  virtual void write(JArray< jbyte > *, jint, jint);
private:
  ::gnu::java::net::local::LocalSocketImpl * __attribute__((aligned(__alignof__( ::java::io::OutputStream)))) impl;
public: // actually package-private
  ::gnu::java::net::local::LocalSocketImpl * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_local_LocalSocketImpl$LocalOutputStream__
