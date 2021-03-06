
#ifndef _Included_ai_gams_JNI
#define _Included_ai_gams_JNI

#include <jni.h>
#include "gams/GamsExport.h"

GAMS_EXPORT jint JNICALL JNI_OnLoad (JavaVM * vm, void * reserved);
GAMS_EXPORT void JNICALL JNI_OnUnload (JavaVM * vm, void * reserved);

GAMS_EXPORT bool gams_jni_is_attached ();
GAMS_EXPORT JNIEnv * gams_jni_get_env ();

GAMS_EXPORT JavaVM * gams_jni_jvm ();

GAMS_EXPORT JNIEnv * jni_attach ();
GAMS_EXPORT void jni_detach ();

namespace gams
{
  namespace utility
  {
    namespace java
    {
      /**
      * Android-safe, Thread-safe find class method
      * @param  env   Java environment
      * @param  name  name of the class to find
      **/
      jclass GAMS_EXPORT find_class (JNIEnv * env, const char * name);

      /**
       * Throws an exception when developers use JNI objects after being deleted
       * @param  env   Java environment
       * @param  name  Message to embed in exception
       **/
      void GAMS_EXPORT throw_dead_obj_exception (JNIEnv * env, const char * message);
    }
  }
}

#endif