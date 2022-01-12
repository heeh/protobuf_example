## Create a cpp class

```bash
protoc -I=. --cpp_out=. ./simpleResults.proto
protoc -I=. --java_out=. ./simpleResults.proto
g++ -c -o library.o library.cc -I"${JAVA_HOME}/include"

```

