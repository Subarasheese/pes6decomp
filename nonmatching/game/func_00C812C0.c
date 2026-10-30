/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F9370(void *);
extern void func_002D57E0(void *, int, void *, int);
extern s32 func_0020D080(s32, s32);
M2C_UNK func_002FA170(void *, s32, s32, s32, s32, M2C_UNK); /* extern */
extern char D_00CA8760[];
extern void *D_00CCC130;
extern char D_00CCC194[];
extern char D_00CCC1A4[];
extern char D_00CCC1A8[];

void func_00C812C0(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_s3;

    temp_s3 = func_0020D080((*(s32 *)D_00CCC1A8), (*(s32 *)D_00CCC1A4));
    func_002FA170(arg0, temp_s3, func_002F9370(D_00CCC130), arg2, arg3, 0);
    func_002D57E0(arg0, (*(s32 *)D_00CCC194), ((void *)D_00CA8760), 8);
}
