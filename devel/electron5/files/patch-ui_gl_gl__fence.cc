--- ui/gl/gl_fence.cc.orig	2019-04-08 08:19:17 UTC
+++ ui/gl/gl_fence.cc
@@ -18,7 +18,7 @@
 #include "ui/gl/gl_fence_apple.h"
 #endif
 
-#if defined(USE_EGL) && defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(USE_EGL) && defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_FREEBSD)
 #define USE_GL_FENCE_ANDROID_NATIVE_FENCE_SYNC
 #include "ui/gl/gl_fence_android_native_fence_sync.h"
 #include "ui/gl/gl_surface_egl.h"
