#include <jni.h>

//Links from MainActivity
JNIEXPORT jstring JNICALL Java_com_gold_kds517_reality_MainActivity_getZero(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "cmVhbHN0Yg==");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_reality_MainActivity_getOne(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "cmVhbG0y");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_reality_MainActivity_getTwo(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "cmVkeDI=");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_reality_MainActivity_getThree(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "ovL3RoZXJhZGlvc2hhay5jby51aMWF5OXBjSFIyWDNBeEwybHVaR2FIUjBjRG92TDNSb1pYSmhaR2x2YzJoaGF5NWpieTUxYXk5cGNIUjJYM0F4TDJsdVpHVjRMbkJvY0Q5c2FXTmxibU5sWDJ0bGVUMXNhWFpsZEhZeQ==");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_reality_MainActivity_getFour(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "aHR0cDovL3RoZXJhZGlvc2YXk1amJ5NTFheTlwY0hSMlgzQXlMYUhSMGNEb3ZMM1JvWlhKaFpHbHZjMmhoYXk1amJ5NTFheTlwY0hSMlgzQXlMMmx1WkdWNExuQm9jRDlzYVdObGJtTmxYMnRsZVQxc2FYWmxkSFl5");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_reality_MainActivity_getFive(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "http://theradioshak.co.uk/realstb/icon.png");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_reality_MainActivity_getSix(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "http://theradioshak.co.uk/realm2/icon.png");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_reality_MainActivity_getSeven(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "http://theradioshak.co.uk/redx2/icon.png");
}