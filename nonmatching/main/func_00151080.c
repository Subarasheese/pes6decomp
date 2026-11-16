/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001453E0(s32);
extern s32 Pes6Texture_GetPixels(char *);
extern s32 Pes6Texture_GetCacheKey(char *);
extern s32 func_001454A0();
extern s32 func_001454B0(char *);
extern void func_001C4730(s32, s32, s32);
extern s32 D_003768F0[];
extern s32 D_00376A80[];

void func_00151080(char *arg0, s32 arg1) {
    s32 idx;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    u8 key;

    var_s1 = (s32) M2C_FIELD(arg0, u16 *, 0x2E) >> 0xC;
    var_s2 = func_001454A0();
    var_v0 = func_001454B0(arg0);
    key = M2C_FIELD(arg0, u8 *, 0x19);
    for (idx = 0; idx < 5; idx++) {
        if (key == D_00376A80[idx]) {
            break;
        }
    }
    if (idx >= 5) {
        idx = 0;
    }
    var_s0 = 0x40;
    while (var_s1 >= 0) {
        var_s0 += (D_003768F0[idx] * (var_v0 * var_s2)) / 2;
        var_s1 -= 1;
        var_v0 = var_v0 / 2;
        var_s2 = var_s2 / 2;
    }
    func_001C4730(Pes6Texture_GetPixels(arg0), arg1, var_s0 - 0x40);
    func_001453E0(Pes6Texture_GetCacheKey(arg0));
}
