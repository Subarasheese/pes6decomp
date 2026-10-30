/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0098AB10(void *, u8);                      /* extern */
void *func_0098EC40(M2C_UNK);                       /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_00A07B40();                                /* extern */
s32 func_00AFBA70(u8);                              /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
M2C_UNK func_00C22EC0(void *, s32);                 /* extern */
s32 func_00C23A50(void *, M2C_UNK);                 /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BBC[];
extern char D_00591F14[];
extern char D_005926EC[];
extern char D_00CB52AD[];
extern char D_00CB52C8[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84], gap at: 0x8. */
void func_0091F050(void) {
    f32 temp_f20;
    s32 temp_s2;
    s32 temp_s6;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s5;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_v0_2;
    u32 var_s3;
    u8 temp_a1;
    u8 temp_v1;
    u8 var_s4;
    void *temp_s0;
    void *temp_v0;
    void *var_s1;

    if ((*(u8 *)D_00591F14) != 0) {
        goto block_1;
    }
    if (func_00A07B40() == 0) {
        goto block_1;
    }
    if ((s32) (*(u8 *)D_00CB52C8) >= (s32) (*(u8 *)D_005926EC)) {
        var_v1 = 1;
    } else {
block_1:
        var_v1 = 0;
    }
    if (var_v1 & 0xFF) {
        temp_v0 = func_0098EC40(1);
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x24);
        if ((temp_a1 != 1) || ((s32) (*(u8 *)D_00591BBC) >= 2)) {
            temp_s6 = func_0098AB10(temp_v0, temp_a1) & 0xFF;
            if (temp_s6 != 0) {
                temp_s2 = temp_s6 & 0xFF;
                var_s3 = 0x7FFFFFFF;
                if (temp_s2 == 0xFF) {
                    var_a0 = 1;
                } else {
                    var_a0 = temp_s2 % 23;
                }
                var_s4 = 0;
                temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
                temp_f20 = (f32) M2C_FIELD(temp_s0, s16 *, 0x14);
                if (((func_00AFBA70(M2C_FIELD(temp_s0, u8 *, 0)) & 0xFF) + 1) == 0xFF) {
                    var_a0_2 = 1;
                } else {
                    var_a0_2 = (func_00AFBA70(M2C_FIELD(temp_s0, u8 *, 0)) & 0xFF) + 1;
                }
                var_s5 = 0;
                var_s1 = ((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240);
loop_24:
                if ((func_00BDB8B0(var_s1) != 0) && (M2C_FIELD(var_s1, u8 *, 0x16) == 7)) {
                    if (func_00C23A50(var_s1, 0xE) == 0) {
                        temp_v1 = M2C_FIELD(var_s1, u8 *, 0x1D5);
                        if ((temp_v1 == 0) || ((temp_v1 & 0xFF) == temp_s2)) {
                            temp_v0_2 = func_009B33A0(var_s1, (s32) (M2C_FIELD(temp_s0, f32 *, 0xE0) + (1536.0f * temp_f20)), (s32) M2C_FIELD(temp_s0, f32 *, 0xE8));
                            if (temp_v0_2 < var_s3) {
                                var_s4 = M2C_FIELD(var_s1, u8 *, 0);
                                var_s3 = temp_v0_2;
                            }
                        }
                        goto block_31;
                    }
                } else {
block_31:
                    var_s5 = (var_s5 + 1) & 0xFF;
                    var_s1 += 0x240;
                    if (var_s5 >= 0xA) {
                        if (var_s4 != 0) {
                            temp_v1_2 = var_s4 & 0xFF;
                            if (temp_v1_2 == 0xFF) {
                                var_v1_2 = 1;
                            } else {
                                var_v1_2 = temp_v1_2 % 23;
                            }
                            func_00C22EC0(((void *)Pes6MatchPlayers) + (var_v1_2 * 0x240), temp_s6);
                        }
                    } else {
                        goto loop_24;
                    }
                }
            }
        }
        return;
    }
    (*(s8 *)D_00CB52AD) = 0;
}
