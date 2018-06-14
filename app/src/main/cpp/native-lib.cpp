#include <jni.h>
#include <string>
#include "TextQuery.h"
extern "C"
JNIEXPORT jstring

JNICALL
Java_com_massky_cmake1_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    calc calc1;
    int c = calc1.add(1,2);
    return env->NewStringUTF(hello.c_str());
}
