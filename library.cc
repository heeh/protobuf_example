// #include <cstring>
#include <jni.h>
// #include <cinttypes>
#include "simpleResults.pb.h"

extern "C" JNIEXPORT jobject JNICALL
Java_filebenchmark_CreateSR(JNIEnv *env, jclass clazz) {

  // Dummy input
  filebenchmark::SimpleResults* SR = new filebenchmark::SimpleResults();
  SR->set_status(2);
  SR->set_inf_time_ms(100);

  // Get the class we wish to return an instance of
  jclass srclass = env->FindClass("filebenchmark/SimpleResultsOuterClass/SimpleResults");

  // Get the method id of an empty constructor in clazz
  jmethodID constructor = env->GetMethodID(srclass, "<init>", "()V");

  // Create an instance of clazz
  jobject obj = env->NewObject(srclass, constructor);

  // Get Field references
  jfieldID param1Field = env->GetFieldID(srclass, "status_", "F");
  jfieldID param2Field = env->GetFieldID(srclass, "infTimeMs_", "F");

  // Set fields for object
  env->SetIntField(obj, param1Field, SR->status());
  env->SetIntField(obj, param2Field, SR->inf_time_ms());

  delete SR;
  
  // return object
  return obj;
}
