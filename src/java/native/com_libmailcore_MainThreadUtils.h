/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_libmailcore_MainThreadUtils */

#ifndef _Included_com_libmailcore_MainThreadUtils
#define _Included_com_libmailcore_MainThreadUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_libmailcore_MainThreadUtils
 * Method:    setupNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_MainThreadUtils_setupNative
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_MainThreadUtils
 * Method:    runIdentifier
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_MainThreadUtils_runIdentifier
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_libmailcore_MainThreadUtils
 * Method:    runIdentifierAndNotify
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_MainThreadUtils_runIdentifierAndNotify
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif