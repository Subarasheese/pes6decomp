/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
M2C_UNK func_00857870(void *, s32, u16, s32, u16, M2C_UNK); /* extern */
extern s32 D_003EA334;

s32 func_008576A0(void *arg0) {
    u32 sp38;
    s32 sp3C;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a1;

    func_00110E58(func_001105C8(), &sp3C, &sp38);
    temp_s0 = (sp38 / 1000U) + (sp3C * 0x3E8);
    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, s16 *, 0x16);
        switch (temp_v1) {                          /* irregular */
        case 4:
        case 0:
            break;
        case 3:
        case 2:
        case 1:
            var_a0 = 0;
            if (arg0 != NULL) {
                if (((u32) (temp_v1 - 2) < 2U) && ((u32) (M2C_FIELD(arg0, s16 *, 0x12) - 2) < 2U)) {
                    var_a0 = 1;
                }
                if (temp_v1 == 4) {
                    goto block_12;
                }
            } else {
block_12:
                var_a0 = -1;
            }
            if ((var_a0 == 0) && ((temp_s0 - M2C_FIELD(arg0, s32 *, 0x18)) >= 0x3A99)) {
                M2C_FIELD(arg0, s16 *, 0x16) = 4;
            }
            var_a1 = 0;
            if (arg0 != NULL) {
                temp_v1_2 = M2C_FIELD(arg0, s16 *, 0x16);
                if (((u32) (temp_v1_2 - 2) < 2U) && ((u32) (M2C_FIELD(arg0, s16 *, 0x12) - 2) < 2U)) {
                    var_a1 = 1;
                }
                if (temp_v1_2 == 4) {
                    goto block_21;
                }
            } else {
block_21:
                var_a1 = -1;
            }
            if (((var_a1 == 0) ? 0x1F4 : 0x1B58) < (temp_s0 - M2C_FIELD(arg0, s32 *, 0x1C))) {
                func_00857870(arg0, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 8), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, u16 *, 0xA), 0);
                M2C_FIELD(arg0, s32 *, 0x1C) = temp_s0;
                D_003EA334 = temp_s0;
            }
            break;
        }
        return 0;
    }
    return -1;
}
