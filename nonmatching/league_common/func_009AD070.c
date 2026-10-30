/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_009AE900(void);
s32 func_00225520(u8);                              /* extern */
s32 func_00225940(u8);                              /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, u16, M2C_UNK);  /* extern */
M2C_UNK func_00957080(s32, M2C_UNK, u16, M2C_UNK);  /* extern */
s32 func_0095C4A0(u16);                             /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009AB890(s32, u8, s32, s32, s32, s32, s32, M2C_UNK, s64, s64, s64, s64); /* extern */
M2C_UNK func_009ADF20(u8, u8, u8);                  /* extern */
M2C_UNK func_009AE050(u8, u8, s32, u16 *, u8 *, u8 *); /* extern */
extern char D_00591C09[];

void func_009AD070(s32 arg0) {
    u16 sp8C;
    u8 sp8E;
    u8 sp8F;
    s32 temp_s0;
    s32 temp_s3;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_v0;
    u32 var_s1;

    temp_v0 = func_009AE900();
    if (temp_v0 != 0) {
        func_009AE050(M2C_FIELD(temp_v0, u8 *, 0x5E0), M2C_FIELD(temp_v0, u8 *, 0x5E1), arg0, &sp8C, &sp8E, &sp8F);
        temp_s3 = M2C_FIELD(temp_v0, u8 *, 0x5E0) == 1;
        if ((*(u8 *)D_00591C09) != 0xE) {
            var_v0 = func_00225940(sp8F);
        } else {
            var_v0 = func_00225940(sp8E);
        }
        temp_s0 = var_v0 & 0xFF;
        var_s2 = 0;
        var_s1 = temp_v0;
        do {
            if ((var_s2 == (temp_s0 - 1)) && (temp_s0 != 0)) {
                func_001D7D60(M2C_FIELD(var_s1, void **, 0x558), 1);
            } else {
                func_001D7D60(M2C_FIELD(var_s1, void **, 0x558), 0);
            }
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 0x20);
        func_00956A90(M2C_FIELD(temp_v0, s32 *, 0x10), 4, sp8C, 0);
        func_00957080(M2C_FIELD(temp_v0, s32 *, 0x14), 4, sp8C, 0);
        if ((u32) ((*(u8 *)D_00591C09) - 1) >= 2U) {
            var_v0_2 = func_0095C4A0(sp8C);
        } else {
            var_v0_2 = func_00225520(sp8E);
        }
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x24), 1, var_v0_2);
        func_009AB890(temp_s3, sp8F, M2C_FIELD(temp_v0, s32 *, 0x28), M2C_FIELD(temp_v0, s32 *, 0x2C), M2C_FIELD(temp_v0, s32 *, 0x30), M2C_FIELD(temp_v0, s32 *, 0x34), M2C_FIELD(temp_v0, s32 *, 0x38), 2, 3, 5, 7, 9);
        func_009ADF20(M2C_FIELD(temp_v0, u8 *, 0x5E0), M2C_FIELD(temp_v0, u8 *, 0x5E1), sp8F);
    }
}
