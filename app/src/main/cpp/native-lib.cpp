#include <jni.h>
#include <string>
#include "base64.cpp"

extern "C" JNIEXPORT jstring JNICALL
Java_com_curtesmalter_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_curtesmalter_myapplication_MainActivity_base64FromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = base64_decode("QW50w7NuaW8gQmFzdGnDo28=", true);
    return env->NewStringUTF(hello.c_str());
}
