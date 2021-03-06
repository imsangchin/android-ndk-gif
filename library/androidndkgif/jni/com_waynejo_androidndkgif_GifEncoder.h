/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_waynejo_androidndkgif_GifEncoder */

#ifndef _Included_com_waynejo_androidndkgif_GifEncoder
#define _Included_com_waynejo_androidndkgif_GifEncoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_waynejo_androidndkgif_GifEncoder
 * Method:    nativeInit
 * Signature: (IILjava/lang/String;II)J
 */
JNIEXPORT jlong JNICALL Java_com_waynejo_androidndkgif_GifEncoder_nativeInit
  (JNIEnv *, jobject, jint, jint, jstring, jint, jint);

/*
 * Class:     com_waynejo_androidndkgif_GifEncoder
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_waynejo_androidndkgif_GifEncoder_nativeClose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_waynejo_androidndkgif_GifEncoder
 * Method:    nativeSetDither
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_waynejo_androidndkgif_GifEncoder_nativeSetDither
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_waynejo_androidndkgif_GifEncoder
 * Method:    nativeSetThreadCount
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_waynejo_androidndkgif_GifEncoder_nativeSetThreadCount
        (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_waynejo_androidndkgif_GifEncoder
 * Method:    nativeEncodeFrame
 * Signature: (JLandroid/graphics/Bitmap;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_waynejo_androidndkgif_GifEncoder_nativeEncodeFrame
  (JNIEnv *, jobject, jlong, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
