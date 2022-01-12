## Protobuf JNI Example

```bash
protoc -I=. --cpp_out=. ./simpleResults.proto  # Create a C++ class
protoc -I=. --java_out=. ./simpleResults.proto  # Create a Java class
g++ -c -o library.o library.cc -I"${JAVA_HOME}/include" -I"${JAVA_HOME}/include/linux"  # Create an object file
g++ -shared -o libfoo.so library.o  # Create a shared library
objdump -TC libfoo.so  # Inspect the shared library
javac -cp '.:protobuf-java-4.0.0-rc-2.jar' filebenchmark/Main.java  # Compile a java file to bytecode
java -cp '.:protobuf-java-4.0.0-rc-2.jar' -Djava.library.path=. filebenchmark.Main  # Throw the bytecode into JVM
```
