#include <jni.h>
#include <stdio.h>
#include "HelloJNIWorld.h"

// https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html

JNIEXPORT void JNICALL Java_HelloJNIWorld_printHelloWorld(JNIEnv *env, jclass cls)   {
	printf("Hello World\n");
	// nicht bei static jmethodID mid = (*env)->GetMethodID(env, cls, "printHelloWorld", "(Ljava/lang/String;)V");
	jmethodID mid = (*env)->GetStaticMethodID(env, cls, "printHelloWorld", "(Ljava/lang/String;)V");
	if (mid != 0){
		jstring name = (*env)->NewStringUTF(env, "In C, depth = %d, about to enter Java\n" ); 
  		// nicht bei static (*env)->CallVoidMethod(env, cls, mid, name);
  		(*env)->CallStaticObjectMethod(env, cls, mid, name);
		// http://stackoverflow.com/questions/16619445/calling-deletelocalref-in-java-native-interface
		(*env)->DeleteLocalRef(env,name);
	}
	return;
}
