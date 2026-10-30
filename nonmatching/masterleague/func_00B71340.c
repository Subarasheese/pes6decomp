/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00238330(s32);
extern u8 func_00225820(void);
extern u32 func_00B71C80(void);
s32 func_00225680(s32);                             /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s32 func_00984AD0(M2C_UNK, s32);                    /* extern */
s32 func_00B60960(s32);                             /* extern */
s32 func_00B71AA0(u8);                              /* extern */
s32 func_00B71B40(u8);                              /* extern */
M2C_UNK func_00B71B90(u8, u8 *, M2C_UNK, M2C_UNK);  /* extern */

s32 func_00B71340(void) {
    u8 sp4F;
    s32 temp_a0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s2;
    s32 temp_v1;
    u32 temp_v0;
    u8 temp_s0;

    temp_v0 = func_00B71C80();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x10) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x1D) != 1) {
                temp_s0 = M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x1B) + temp_v0), u8 *, 0x11);
                temp_s2 = func_00B71AA0(temp_s0) & 0xFF;
                if (temp_s2 != 6) {
                    func_00B71B90(temp_s0, &sp4F, 0, 0);
                    temp_s0_2 = func_00225820() & 0xFF;
                    if (temp_s0_2 != 0xFF) {
                        if ((func_00225680(temp_s0_2) & 0xFFFF) != 0xFFFF) {
                            if (func_00B60960(temp_s2) != 0) {
                                temp_s0_3 = func_00984AD0(9, temp_s0_2) == 1;
                                temp_v1 = temp_s2 & 0xFF;
                                temp_a0 = func_00984AD0(8, temp_s0_2) == 1;
                                switch (temp_v1) {  /* irregular */
                                case 3:
                                    if (sp4F != (func_00238330(func_00225820()) & 0xFF)) {
                                        func_0026E840(0x8C008005);
                                    } else {
                                    default:
block_44:
                                        M2C_FIELD(temp_v0, u8 *, 0x10) = 5U;
                                        func_00958000(0x1E);
                                    }
                                    break;
                                case 4:
                                    if ((temp_a0 == 1) || (temp_s0_3 == 0)) {
                                        func_0026E840(0x8C008005);
                                    } else {
                                        goto block_44;
                                    }
                                    break;
                                case 5:
                                    if ((temp_s0_3 == 1) || (temp_a0 == 0)) {
                                        func_0026E840(0x8C008005);
                                    } else {
                                        goto block_44;
                                    }
                                    break;
                                }
                                goto block_45;
                            }
                            if (func_00B71B40(M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x1B) + temp_v0), u8 *, 0x11)) == 1) {
                                func_0026E840(0x8C008005);
                                return 0;
                            }
                            goto block_45;
                        }
                        goto block_45;
                    }
                    goto block_45;
                }
                goto block_45;
            }
            func_0026E840(0x8C008005);
            goto block_45;
        }
        goto block_45;
    }
block_45:
    return 0;
}
