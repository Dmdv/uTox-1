#if defined(MAIN_H) && !defined(COCOA_MAIN_H)
#error "We should never include main from different platforms."
#endif

#ifndef COCOA_MAIN_H
#define COCOA_MAIN_H
#define MAIN_H

/* Don't put Objective-C declarations here so we don't have to compile
 * all of uTox as ObjC. Stuff that requires ObjC available goes in objc_main.h,
 * included below. */

#include <netinet/in.h>

#include <arpa/nameser_compat.h>

#include <resolv.h>

#include <errno.h>

#include <Carbon/Carbon.h>

#define CARBON_K(x) (x + 255)
#define KEY_BACK CARBON_K(kVK_Delete)
#define KEY_RETURN CARBON_K(kVK_Return)
#define KEY_LEFT CARBON_K(kVK_LeftArrow)
#define KEY_RIGHT CARBON_K(kVK_RightArrow)
#define KEY_TAB CARBON_K(kVK_Tab)
#define KEY_LEFT_TAB CARBON_K(kVK_ISO_Left_Tab)
#define KEY_DEL CARBON_K(kVK_ForwardDelete)
#define KEY_END CARBON_K(kVK_End)
#define KEY_HOME CARBON_K(kVK_Home)
#define KEY_UP CARBON_K(kVK_UpArrow)
#define KEY_DOWN CARBON_K(kVK_DownArrow)
#define KEY_PAGEUP CARBON_K(kVK_PageUp)
#define KEY_PAGEDOWN CARBON_K(kVK_PageDown)


typedef struct native_image NATIVE_IMAGE;
int NATIVE_IMAGE_IS_VALID(NATIVE_IMAGE *img);

#ifdef __OBJC__
#include "objc_main.h"
#endif

#endif
