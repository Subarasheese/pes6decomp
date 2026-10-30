/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00209A00(void *, s32, M2C_UNK);        /* extern */
s8 func_00BBB8C0(M2C_UNK);                          /* extern */
s32 func_00BC03A0(u16);                             /* extern */
s32 func_00BC13A0(M2C_UNK);                         /* extern */
extern char D_0058E7F0[];
extern char D_00CB5642[];

void func_00BAC520(void *arg0, s32 arg1) {
    M2C_UNK *var_s2;
    M2C_UNK var_s0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s1;
    s8 var_v0;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_v0, f32 *, 0x38) == 0.0f) {
        temp_v0_2 = func_00BC03A0(M2C_FIELD(temp_v0, u16 *, 0x30));
        switch (temp_v0_2) {                        /* irregular */
        case 39:
            temp_s0 = func_00BC13A0(0x26) & 0xFFFF;
            M2C_FIELD(arg0, s8 *, 0x4E) = (s8) (func_00BBB8C0(0xA0) + 0x30);
            func_00209A00(M2C_FIELD(arg0, void **, 4), temp_s0 & 0xFFFF, 0);
            return;
        case 44:
            temp_s0_2 = func_00BC13A0(0x2B) & 0xFFFF;
            M2C_FIELD(arg0, s8 *, 0x4E) = (s8) (func_00BBB8C0(0x80) + 0x20);
            func_00209A00(M2C_FIELD(arg0, void **, 4), temp_s0_2 & 0xFFFF, 0);
            return;
        }
    } else {
        temp_v0_3 = func_00BC03A0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30));
        if ((temp_v0_3 != 0x2B) && (temp_v0_3 != 0x26)) {
            goto block_10;
        }
        if (arg1 != 0) {
block_10:
            var_s0 = 0;
            var_s2 = ((void *)D_0058E7F0);
            var_s1 = 0;
            do {
                if (func_00BC03A0(M2C_FIELD(M2C_FIELD(var_s2, void **, 4), u16 *, 0x30)) == 0x2B) {
                    var_s0 += 1;
                }
                var_s1 += 1;
                var_s2 += 0x240;
            } while (var_s1 < 0x16);
            if (((s32) (*(u8 *)D_00CB5642) >= 3) && (var_s0 < 2) && (func_00BBB8C0(0x64) >= 0x3D)) {
                var_s0_2 = 0x2B;
                var_v0 = func_00BBB8C0(0x80) + 0x20;
            } else {
                var_s0_2 = 0x26;
                var_v0 = func_00BBB8C0(0xA0) + 0x30;
            }
            M2C_FIELD(arg0, s8 *, 0x4E) = var_v0;
            func_00209A00(M2C_FIELD(arg0, void **, 4), func_00BC13A0(var_s0_2) & 0xFFFF, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = func_00BBB8C0(2);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x28) = 0;
        }
    }
}
