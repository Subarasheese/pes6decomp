/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D80(void *, s16);
extern char D_003F7790[];

void func_002E5980(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_s3;
    u32 temp_s1;
    void *var_s2;

    var_s3 = 0;
    var_s2 = arg0;
    temp_s1 = (u32) (*(u32 *)D_003F7790) % 46U;
    do {
        temp_a0 = M2C_FIELD(var_s2, s32 *, 0x28);
        if (temp_a0 != 0) {
            func_001F3D10(temp_a0, arg1 & 0xFF & M2C_FIELD(arg0, u8 *, 0x14) & 0xFF);
            func_001D7D80(M2C_FIELD(M2C_FIELD(var_s2, s32 *, 0x28), void **, 0x48), (s16) ((s64) ((s64) temp_s1 << 0x30) >> 0x30));
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 2);
}
