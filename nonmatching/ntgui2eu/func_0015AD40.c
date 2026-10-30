/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0015AE00();                                /* extern */
M2C_UNK func_001622F8(s32, s32, M2C_UNK *);         /* extern */
extern char D_011E6B0C[];
extern char D_011E6B28[];
extern char D_011E6B2C[];
extern char D_011E6B38[];

void func_0015AD40(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    s32 temp_a1;
    s32 temp_v0;

    if (func_0015AE00() != 0) {
        temp_v0 = M2C_FIELD(((void *)D_011E6B38), s32 *, 0) - ((s32) M2C_FIELD(arg2, s32 *, 0xC) >> 4);
        M2C_FIELD(((void *)D_011E6B38), s32 *, 0) = temp_v0;
        if (temp_v0 < 0) {
            M2C_FIELD(((void *)D_011E6B38), s32 *, 0) = 0;
        }
        temp_a1 = (*(s32 *)D_011E6B2C) - (*(s32 *)D_011E6B28);
        if (temp_a1 < M2C_FIELD(((void *)D_011E6B38), s32 *, 0x6B38)) {
            M2C_FIELD(((void *)D_011E6B38), s32 *, 0x6B38) = temp_a1;
        }
        func_001622F8((*(s32 *)D_011E6B0C), M2C_FIELD(((void *)D_011E6B38), s32 *, 0x6B38), ((void *)D_011E6B38));
    }
}
