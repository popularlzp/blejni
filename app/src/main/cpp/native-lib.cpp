#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_demo_blejni_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "java";
    return env->NewStringUTF(hello.c_str());
}