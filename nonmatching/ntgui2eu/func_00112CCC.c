/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00112D94(s32, u16, u16, u16);          /* extern */
M2C_UNK func_001130C0(s32, u16);                    /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F8700[];
extern u16 D_00602494;
extern u16 D_00602496;
extern u16 D_00602498;
extern u16 D_0060249A;

void func_00112CCC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u16 temp_s1;
    u16 temp_s2;
    u16 temp_s3;
    u16 temp_s4;

    temp_s1 = arg3 & 0xFFFF;
    temp_s2 = arg4 & 0xFFFF;
    temp_s3 = arg1 & 0xFFFF;
    temp_s4 = arg2 & 0xFFFF;
    if (arg0 == 0) {
        func_001AD620(((void *)D_005F8648), 0x2B4, ((void *)D_005F8700));
    }
    if (temp_s3 != D_00602494) {
        goto block_8;
    }
    if ((temp_s4 != D_00602496) || (temp_s1 != D_00602498) || (temp_s2 != D_0060249A)) {
block_8:
        func_00112D94(arg0, temp_s3, temp_s1, temp_s2);
        func_001130C0(arg0, temp_s4);
        D_00602496 = temp_s4;
        D_00602494 = temp_s3;
        D_00602498 = temp_s1;
        D_0060249A = temp_s2;
    }
}
