#include <jni.h>
#include <stdio.h>
#include "HelloJNIWorld.h"

JNIEXPORT void JNICALL Java_HelloJNIWorld_printHelloWorld(JNIEnv *env, jclass cls)   {
	printf("Hello World\n");
	return;
}
