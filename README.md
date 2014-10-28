jni-example
===========

compile
-------

gcc  -shared -fPIC  -I/usr/lib/jvm/java-8-oracle/include/ -I/usr/lib/jvm/java-8-oracle/include/linux/ -o libhelloworld.so HelloJNIWorld.c 

exec
----

java  -Djava.library.path=./ HelloJNIWorld


