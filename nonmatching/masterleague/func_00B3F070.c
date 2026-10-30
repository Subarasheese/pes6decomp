/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002EC3D0(void *, s32, s32);
extern u32 func_00B447A0(void);
extern s32 func_00B445F0(s32, s32);
M2C_UNK func_002EC980(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00972020(s32, M2C_UNK);                /* extern */
M2C_UNK func_00972040(s32, s32, s32);               /* extern */

void func_00B3F070(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_s1;
    u32 var_s0;

    var_s0 = func_00B447A0();
    if (var_s0 != 0) {
        switch (arg0) {                             /* irregular */
        case 8:
            func_002EC3D0(M2C_FIELD(var_s0, void **, 0x14), 0, 0);
            return;
        case 6:
        case 0:
            func_002EC980(M2C_FIELD(var_s0, void **, 0x14), 0, func_00B445F0((s32) M2C_FIELD(var_s0, u8 *, 0x610), (s32) M2C_FIELD(var_s0, u8 *, 0x60C)) & 0xFFFF);
            func_002EC3D0(M2C_FIELD(var_s0, void **, 0x14), 0, 1);
            var_s1 = 0;
            do {
                func_00972020(M2C_FIELD(var_s0, s32 *, 0x5DC), 0);
                var_s1 += 1;
                var_s0 += 4;
            } while (var_s1 < 2);
            return;
        case 7:
        case 1:
            temp_v1 = arg1 & 0xFF;
            if (temp_v1 >= 0x10) {
                M2C_FIELD(var_s0, u8 *, 0x5E4) = 1U;
                func_00972040(M2C_FIELD(((M2C_FIELD(var_s0, u8 *, 0x5E4) * 4) + var_s0), s32 *, 0x5DC), (temp_v1 - 0x10) & 0xFF, 0);
                func_00972020(M2C_FIELD(((M2C_FIELD(var_s0, u8 *, 0x5E4) * 4) + var_s0), s32 *, 0x5DC), 1);
                func_00972020(M2C_FIELD(var_s0, s32 *, 0x5DC), 0);
            } else {
                M2C_FIELD(var_s0, u8 *, 0x5E4) = 0U;
                func_00972040(M2C_FIELD(((M2C_FIELD(var_s0, u8 *, 0x5E4) * 4) + var_s0), s32 *, 0x5DC), (temp_v1 % 8) & 0xFF, ((u32) (arg1 & 0xFF) >> 3) & 0xFF);
                func_00972020(M2C_FIELD(((M2C_FIELD(var_s0, u8 *, 0x5E4) * 4) + var_s0), s32 *, 0x5DC), 1);
                func_00972020(M2C_FIELD(var_s0, s32 *, 0x5E0), 0);
            }
            func_002EC3D0(M2C_FIELD(var_s0, void **, 0x14), 0, 0);
            return;
        default:
            func_002EC3D0(M2C_FIELD(var_s0, void **, 0x14), 0, 0);
            func_00972020(M2C_FIELD(var_s0, s32 *, 0x5E0), 0);
            func_00972020(M2C_FIELD(var_s0, s32 *, 0x5DC), 0);
            break;
        }
    }
}
