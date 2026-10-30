/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011E0CF0[];
extern char D_011E0CF4[];
extern char D_011E0CF8[];
extern char D_011E0CFC[];
extern char D_011E0D00[];
extern char D_011E0D04[];
extern char D_011E0D08[];
extern char D_011E0D0C[];
extern char D_011E0D10[];

void func_00154100(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0) {
    (*(s32 *)D_011E0D08) = arg6;
    (*(s32 *)D_011E0D10) = arg_sp0;
    (*(s32 *)D_011E0D0C) = arg7;
    (*(s32 *)D_011E0CF0) = arg0;
    (*(s32 *)D_011E0CF4) = arg1;
    (*(s32 *)D_011E0CF8) = arg2;
    (*(s32 *)D_011E0CFC) = arg3;
    (*(s32 *)D_011E0D00) = arg4;
    (*(s32 *)D_011E0D04) = arg5;
}
