/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E758C;
extern char D_00CBAA02[];
extern char D_00CBAA04[];

u16 func_00BCDA70(void) {
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_5;
    s32 temp_a1_2;
    s32 var_a0_2;
    s32 var_a0_4;
    s32 var_a1;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_a5_2;
    s32 var_t0;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t1_3;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t2_3;
    u16 var_a0;
    u16 var_a0_3;
    u16 var_a5;
    u16 var_t0_2;
    u16 var_v0;
    u8 temp_a0_2;
    u8 temp_a0_4;
    u8 temp_a1;

    var_v0 = (*(u16 *)D_00CBAA04);
    if ((s32) (*(u16 *)D_00CBAA02) < (s32) var_v0) {
        var_a0 = var_v0;
        var_a5 = var_v0;
        if ((s32) var_v0 < 0x12C) {
            do {
                if (var_a5 == 0) {
                    var_a1 = 0x12B;
                } else {
                    var_a1 = var_a5 - 1;
                }
                temp_a1 = M2C_FIELD((D_003E758C + (var_a1 * 0x354)), u8 *, 0x34E);
                var_t2 = 0;
                var_t1 = 1;
                if ((temp_a1 != 4) && (temp_a1 != 0xD)) {
                    var_t1 = 0;
                }
                if (var_t1 != 0) {
                    temp_a1_2 = M2C_FIELD((D_003E758C + ((var_a0 & 0xFFFF) * 0x354)), u8 *, 0x34E) & 0xFF;
                    var_a5_2 = 0;
                    if ((temp_a1_2 != 4) && (temp_a1_2 != 0xD)) {
                        var_a5_2 = 1;
                    }
                    if (var_a5_2 != 0) {
                        var_t2 = 1;
                    }
                }
                if (var_t2 != 0) {
                    var_v0 = var_a0 & 0xFFFF;
                }
                var_a0 = (var_a0 + 1) & 0xFFFF;
                var_a5 = var_a0;
            } while ((s32) var_a0 < 0x12C);
        }
        var_t0 = 0;
        if ((s32) (*(u16 *)D_00CBAA02) >= 0) {
            do {
                temp_a0 = var_t0 & 0xFFFF;
                if (temp_a0 == 0) {
                    var_a0_2 = 0x12B;
                } else {
                    var_a0_2 = temp_a0 - 1;
                }
                temp_a0_2 = M2C_FIELD((D_003E758C + (var_a0_2 * 0x354)), u8 *, 0x34E);
                var_t2_2 = 0;
                var_t1_2 = 1;
                if ((temp_a0_2 != 4) && (temp_a0_2 != 0xD)) {
                    var_t1_2 = 0;
                }
                if (var_t1_2 != 0) {
                    temp_a0_3 = M2C_FIELD((D_003E758C + ((var_t0 & 0xFFFF) * 0x354)), u8 *, 0x34E) & 0xFF;
                    var_a4 = 0;
                    if ((temp_a0_3 != 4) && (temp_a0_3 != 0xD)) {
                        var_a4 = 1;
                    }
                    if (var_a4 != 0) {
                        var_t2_2 = 1;
                    }
                }
                if (var_t2_2 != 0) {
                    var_v0 = var_t0 & 0xFFFF;
                }
                var_t0 = (var_t0 + 1) & 0xFFFF;
            } while ((s32) (*(u16 *)D_00CBAA02) >= var_t0);
            goto block_50;
        }
        /* Duplicate return node #57. Try simplifying control flow for better match */
        return var_v0;
    }
    var_t0_2 = var_v0;
    var_a0_3 = var_v0;
    if ((s32) (*(u16 *)D_00CBAA02) >= (s32) var_v0) {
        do {
            if (var_a0_3 == 0) {
                var_a0_4 = 0x12B;
            } else {
                var_a0_4 = var_a0_3 - 1;
            }
            temp_a0_4 = M2C_FIELD((D_003E758C + (var_a0_4 * 0x354)), u8 *, 0x34E);
            var_t2_3 = 0;
            var_t1_3 = 1;
            if ((temp_a0_4 != 4) && (temp_a0_4 != 0xD)) {
                var_t1_3 = 0;
            }
            if (var_t1_3 != 0) {
                temp_a0_5 = M2C_FIELD((D_003E758C + ((var_t0_2 & 0xFFFF) * 0x354)), u8 *, 0x34E) & 0xFF;
                var_a4_2 = 0;
                if ((temp_a0_5 != 4) && (temp_a0_5 != 0xD)) {
                    var_a4_2 = 1;
                }
                if (var_a4_2 != 0) {
                    var_t2_3 = 1;
                }
            }
            if (var_t2_3 != 0) {
                var_v0 = var_t0_2 & 0xFFFF;
            }
            var_t0_2 = (var_t0_2 + 1) & 0xFFFF;
            var_a0_3 = var_t0_2;
        } while ((s32) (*(u16 *)D_00CBAA02) >= (s32) var_t0_2);
block_50:
        return var_v0;
    }
    return var_v0;
}
