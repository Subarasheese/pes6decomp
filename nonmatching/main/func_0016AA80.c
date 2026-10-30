/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016A550(s32);
M2C_UNK func_0016A948(s32);                         /* extern */
s32 func_0016AB48(s32, s32);                        /* extern */
M2C_UNK func_001C4730(s8 *, s32, s32);              /* extern */
s32 func_001C80F0();                                /* extern */
extern char D_003C9380[];
extern char D_003C93A8[];
extern char D_0050E780[];

void func_0016AA80(s32 arg0) {
    s32 temp_v0;

    if (arg0 == 0) {
        func_0016A550((s32) ((void *)D_003C9380));
        return;
    }
    temp_v0 = func_001C80F0();
    if (temp_v0 == 0) {
        (*(s8 *)D_0050E780) = 0;
        return;
    }
    func_0016A948(arg0);
    if (func_0016AB48(arg0, temp_v0) == 1) {
        func_001C4730(((void *)D_0050E780), arg0, temp_v0 + 1);
        return;
    }
    func_0016A550((s32) ((void *)D_003C93A8));
}
