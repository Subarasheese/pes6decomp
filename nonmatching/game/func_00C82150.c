/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
M2C_UNK func_00C897C0(s32, s32);                    /* extern */
extern char D_00CCC200[];
extern char D_00CCC328[];
extern char D_00CCC32C[];
extern char D_00CCC468[];
extern char D_00CCC46C[];
extern char D_00CCC5A8[];
extern char D_00CCC5AC[];
extern char D_00CCC6E8[];
extern char D_00CCC6EC[];
extern char D_00CCC828[];
extern char D_00CCC82C[];
extern char D_00CCC968[];
extern char D_00CCC96C[];
extern char D_00CCCAA8[];
extern char D_00CCCAAC[];
extern char D_00CCCBE8[];
extern char D_00CCCBEC[];

void func_00C82150(s32 arg0) {
    M2C_UNK *var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;

    if (func_0017A670(0) != 0xC) {
        if (arg0 == 1) {
            (*(s32 *)D_00CCC328) = 1;
            (*(s32 *)D_00CCC32C) = 1;
            (*(s32 *)D_00CCC468) = 1;
            (*(s32 *)D_00CCC46C) = 1;
            (*(s32 *)D_00CCC5A8) = 1;
            (*(s32 *)D_00CCC5AC) = 1;
            (*(s32 *)D_00CCC6E8) = 1;
            (*(s32 *)D_00CCC6EC) = 1;
            (*(s32 *)D_00CCC828) = 1;
            (*(s32 *)D_00CCC82C) = 1;
            (*(s32 *)D_00CCC968) = 1;
            (*(s32 *)D_00CCC96C) = 1;
            (*(s32 *)D_00CCCAA8) = 1;
            (*(s32 *)D_00CCCAAC) = 1;
            (*(s32 *)D_00CCCBE8) = 1;
            (*(s32 *)D_00CCCBEC) = 1;
            return;
        }
        var_s1 = 0;
        var_s0 = ((void *)D_00CCC200);
        do {
            M2C_FIELD(var_s0, s32 *, 0x128) = 0;
            var_v0 = 0 != 0;
            if (var_v0 != 0) {
                var_v0 = M2C_FIELD(var_s0, s32 *, 0x10C) != 0;
            }
            func_00C897C0(var_s1 + 0x66, var_v0 & 0xFF);
            var_v0_2 = M2C_FIELD(var_s0, s32 *, 0x128) != 0;
            if (var_v0_2 != 0) {
                var_v0_2 = M2C_FIELD(var_s0, s32 *, 0x70) != 0;
            }
            func_00C897C0(var_s1 + 0x5E, var_v0_2 & 0xFF);
            var_s1 += 1;
            M2C_FIELD(var_s0, s32 *, 0x12C) = 0;
            var_s0 += 0x140;
        } while (var_s1 < 8);
    }
}
