/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_0099C850(void);
M2C_UNK func_00212E00(M2C_UNK, s32);                /* extern */
s32 func_00213180(M2C_UNK, f32 *, u32 *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002133E0(s32);                         /* extern */
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
extern char D_008A6124[];
extern char D_009FF768[];
extern char D_009FF76C[];

void func_009BC070(void *arg0) {
    u32 sp40;
    u32 sp44;
    f32 sp48;
    f32 sp4C;
    s32 temp_a0_2;
    s32 var_v0;
    s64 var_s2;
    s64 var_s2_2;
    s8 temp_a0;
    u32 *var_v1;
    void *var_s1;
    void *var_s1_2;

    temp_a0 = M2C_FIELD(arg0, s8 *, 3);
    switch (temp_a0) {                              /* irregular */
    case 0x63:
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xA4);
        if (temp_a0_2 != 0) {
            func_002133E0(temp_a0_2);
            M2C_FIELD(arg0, s32 *, 0xA4) = 0;
        }
        var_s2 = 0;
        var_s1 = arg0;
        do {
            func_001D7D60(M2C_FIELD(var_s1, void **, 0xC), 1);
            var_s2 = (s64) ((var_s2 + 1) << 0x38) >> 0x38;
            var_s1 += 4;
        } while (var_s2 < 6);
        func_002DF8E0(M2C_FIELD(arg0, s32 *, 0xA8), 1);
        M2C_FIELD(arg0, s8 *, 2) = (s8) M2C_FIELD(arg0, s8 *, 4);
        M2C_FIELD(arg0, s8 *, 4) = -1;
        M2C_FIELD(arg0, s8 *, 3) = 0;
        return;
    case 0x1:
        if (M2C_FIELD(arg0, s8 *, 0) != 0) {
            func_00212E00(0, (*(s32 *)D_008A6124));
            M2C_FIELD(arg0, s8 *, 0) = 0;
            return;
        }
        break;
    case 0x0:
        sp48 = (*(f32 *)D_009FF768);
        var_v1 = &sp40;
        var_v0 = 8;
        sp4C = (*(f32 *)D_009FF76C);
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        sp40 = func_0099C850();
        sp44 = func_0099C850();
        var_s2_2 = 0;
        var_s1_2 = arg0;
        do {
            func_001D7D60(M2C_FIELD(var_s1_2, void **, 0xC), 0);
            var_s2_2 = (s64) ((var_s2_2 + 1) << 0x38) >> 0x38;
            var_s1_2 += 4;
        } while (var_s2_2 < 6);
        func_002DF8E0(M2C_FIELD(arg0, s32 *, 0xA8), 0);
        M2C_FIELD(arg0, s32 *, 0xA4) = func_00213180(0, &sp48, &sp40, 2, 0);
        func_00212E00(0, 0);
        M2C_FIELD(arg0, s8 *, 3) = (s8) (M2C_FIELD(arg0, s8 *, 3) + 1);
        return;
    }
}
