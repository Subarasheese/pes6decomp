/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005F7DE0[];
extern void *D_011B5D30;

void func_0010D7B0(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_v0;
    s32 var_s2;
    void *var_s0;
    void *var_v1;

    var_v0 = ((void *)D_005F7DE0);
    var_v1 = arg0 + 0x60;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    do {
        M2C_FIELD(var_v1, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
        M2C_FIELD(var_v1, s64 *, 8) = (s64) M2C_FIELD(var_v0, s64 *, 8);
        M2C_FIELD(var_v1, s64 *, 0x10) = (s64) M2C_FIELD(var_v0, s64 *, 0x10);
        M2C_FIELD(var_v1, s64 *, 0x18) = (s64) M2C_FIELD(var_v0, s64 *, 0x18);
        var_v0 += 0x20;
        var_v1 += 0x20;
    } while (var_v0 != (((void *)D_005F7DE0) + 0x80));
    M2C_FIELD(var_v1, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
    var_s0 = arg0 + 0x60;
    var_s2 = 8;
    M2C_FIELD(var_v1, s64 *, 8) = (s64) M2C_FIELD(var_v0, s64 *, 8);
    do {
        var_s2 -= 1;
        M2C_FIELD(var_s0, s32 *, 0) = (s32) (M2C_FIELD(D_011B5D30, s32 (**)(s32), 0xE8)(M2C_FIELD(var_s0, s32 *, 0)) + arg1);
        M2C_FIELD(var_s0, s32 *, 4) = (s32) (M2C_FIELD(D_011B5D30, u16 (**)(s32), 0xE4)(M2C_FIELD(var_s0, s32 *, 4)) + arg2);
        M2C_FIELD(var_s0, s32 *, 8) = M2C_FIELD(D_011B5D30, s32 (**)(s32), 0xE8)(M2C_FIELD(var_s0, s32 *, 8));
        M2C_FIELD(var_s0, u16 *, 0xC) = M2C_FIELD(D_011B5D30, s32 (**)(s32), 0xE8)((s32) M2C_FIELD(var_s0, u16 *, 0xC));
        M2C_FIELD(var_s0, u16 *, 0xE) = M2C_FIELD(D_011B5D30, u16 (**)(s32), 0xE4)((s32) M2C_FIELD(var_s0, u16 *, 0xE));
        var_s0 += 0x10;
    } while (var_s2 >= 0);
}
