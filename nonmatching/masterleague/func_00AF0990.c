/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226A50(void);
extern u8 func_00227090(void);
extern u8 func_00226C50(void);
extern u8 func_00226D60(void);
extern u8 func_002277E0(void);
extern u8 func_00226940(void);
extern int func_002261A0(void);
extern u8 func_00227980(void);
extern u8 func_00227C90(void);
extern u8 func_002271A0(void);
extern u8 func_00226E70(void);
extern u8 func_00226B40(void);
extern u8 func_00227FC0(void);
extern u8 func_002280B0(void);
extern u8 func_00227A70(void);
extern u8 func_002276D0(void);
s32 func_00246550(s32);                             /* extern */
s32 func_0094C7B0();                                /* extern */
s32 func_0095C610(u8);                              /* extern */
s32 func_0095C660();                                /* extern */
s32 func_0095C780(s32);                             /* extern */
extern void *D_003EADC8;
extern char D_00B79890[];
extern char D_00B798AC[];
extern char D_00B8C030[];

void func_00AF0990(void) {
    M2C_UNK *var_a2;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_s1;
    s16 var_s0_2;
    s16 var_s0_3;
    s16 var_s1;
    s16 var_v0;
    s16 var_v0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1_2;
    s32 var_s1_4;
    s32 var_s3_3;
    s32 var_s4;
    s32 var_v1;
    void *temp_s2;
    void *var_a1;
    void *var_s1_3;
    void *var_s3;
    void *var_s3_2;

    temp_s2 = D_003EADC8;
    if (temp_s2 != NULL) {
        if (func_0094C7B0() != 0xD) {
            var_v0 = 0;
            var_s0 = 0;
            do {
                M2C_FIELD((temp_s2 + (var_s0 * 2)), s16 *, 0x186) = var_v0;
                M2C_FIELD((temp_s2 + ((var_s0 + 1) * 2)), s16 *, 0x186) = (s16) (var_v0 + 1);
                M2C_FIELD((temp_s2 + ((var_s0 + 2) * 2)), s16 *, 0x186) = (s16) (var_v0 + 2);
                temp_a2 = var_v0 + 4;
                M2C_FIELD((temp_s2 + ((var_s0 + 3) * 2)), s16 *, 0x186) = (s16) (var_v0 + 3);
                temp_a0 = var_v0 + 5;
                var_v0 += 6;
                M2C_FIELD((temp_s2 + ((var_s0 + 4) * 2)), s16 *, 0x186) = temp_a2;
                M2C_FIELD((temp_s2 + ((var_s0 + 5) * 2)), s16 *, 0x186) = temp_a0;
                var_s0 += 6;
            } while (var_v0 < 7);
            var_s1 = 0xD;
            var_s3 = (var_s0 * 2) + temp_s2;
            M2C_FIELD(var_s3, s16 *, 0x186) = var_v0;
            do {
                if (func_002261A0() == 1) {
                    M2C_FIELD(var_s3, s16 *, 0x186) = var_s1;
                    var_s0 += 1;
                    var_s3 += 2;
                }
                var_s1 += 1;
            } while (var_s1 < 0x12);
            M2C_FIELD(((var_s0 * 2) + temp_s2), s16 *, 0x186) = 0x12;
            M2C_FIELD(temp_s2, s32 *, 0x1AC) = (s32) (var_s0 + 1);
            M2C_FIELD(temp_s2, s16 *, 0x1B0) = func_002271A0();
            M2C_FIELD(temp_s2, s16 *, 0x1B2) = func_002280B0();
            M2C_FIELD(temp_s2, s16 *, 0x1B4) = func_00227FC0();
            M2C_FIELD(temp_s2, s16 *, 0x1B6) = func_00226940();
            temp_s0 = func_0095C660();
            var_s1_2 = 9;
loop_28:
            if (temp_s0 != func_0095C780(var_s1_2)) {
                var_s1_2 = (var_s1_2 - 1) & 0xFF;
                if (var_s1_2 < 0) {

                } else {
                    goto loop_28;
                }
            }
            M2C_FIELD(temp_s2, s16 *, 0x1B8) = (s16) (var_s1_2 & 0xFF);
            M2C_FIELD(temp_s2, s16 *, 0x1C2) = func_00227C90();
            M2C_FIELD(temp_s2, s16 *, 0x1C6) = func_00227980();
            M2C_FIELD(temp_s2, s16 *, 0x1BA) = func_00226E70();
            M2C_FIELD(temp_s2, s16 *, 0x1C0) = func_00226D60();
            M2C_FIELD(temp_s2, s16 *, 0x1C4) = func_00227A70();
            M2C_FIELD(temp_s2, s16 *, 0x1C8) = func_00227090();
            M2C_FIELD(temp_s2, s16 *, 0x1CA) = func_00226C50();
            M2C_FIELD(temp_s2, s16 *, 0x1BC) = func_00226B40();
            M2C_FIELD(temp_s2, s16 *, 0x1BE) = func_00226A50();
            M2C_FIELD(temp_s2, s16 *, 0x1CC) = (s16) (*(s16 *)D_00B798AC);
            var_s0_2 = 0;
            if (M2C_FIELD(temp_s2, s32 *, 0x1AC) > 0) {
                var_s3_2 = temp_s2;
loop_33:
                temp_s1 = M2C_FIELD(var_s3_2, s16 *, 0x186);
                if (temp_s1 != func_002277E0()) {
                    var_s0_2 += 1;
                    var_s3_2 += 2;
                    if (var_s0_2 >= M2C_FIELD(temp_s2, s32 *, 0x1AC)) {

                    } else {
                        goto loop_33;
                    }
                } else {
                    M2C_FIELD(temp_s2, s16 *, 0x1CC) = var_s0_2;
                }
            }
            M2C_FIELD(temp_s2, s16 *, 0x1CE) = func_002276D0();
        } else {
            var_v0_2 = 0;
            var_s4 = 0;
            do {
                M2C_FIELD((temp_s2 + (var_s4 * 2)), s16 *, 0x186) = var_v0_2;
                M2C_FIELD((temp_s2 + ((var_s4 + 1) * 2)), s16 *, 0x186) = (s16) (var_v0_2 + 1);
                M2C_FIELD((temp_s2 + ((var_s4 + 2) * 2)), s16 *, 0x186) = (s16) (var_v0_2 + 2);
                temp_a2_2 = var_v0_2 + 4;
                M2C_FIELD((temp_s2 + ((var_s4 + 3) * 2)), s16 *, 0x186) = (s16) (var_v0_2 + 3);
                temp_a0_2 = var_v0_2 + 5;
                var_v0_2 += 6;
                M2C_FIELD((temp_s2 + ((var_s4 + 4) * 2)), s16 *, 0x186) = temp_a2_2;
                M2C_FIELD((temp_s2 + ((var_s4 + 5) * 2)), s16 *, 0x186) = temp_a0_2;
                var_s4 += 6;
            } while (var_v0_2 < 7);
            var_s0_3 = 0xD;
            var_s1_3 = (var_s4 * 2) + temp_s2;
            var_s3_3 = 0;
            M2C_FIELD(var_s1_3, s16 *, 0x186) = var_v0_2;
            do {
                if (func_00246550(var_s3_3 + 0xAC) == 1) {
                    M2C_FIELD(var_s1_3, s16 *, 0x186) = var_s0_3;
                    var_s4 += 1;
                    var_s1_3 += 2;
                }
                var_s0_3 += 1;
                var_s3_3 += 1;
            } while (var_s0_3 < 0x12);
            M2C_FIELD(((var_s4 * 2) + temp_s2), s16 *, 0x186) = 0x12;
            var_a0 = 0;
            M2C_FIELD(temp_s2, s32 *, 0x1AC) = (s32) (var_s4 + 1);
            var_a2 = ((void *)D_00B79890);
            var_a1 = temp_s2;
            do {
                var_a0 += 8;
                M2C_FIELD(var_a1, s16 *, 0x1B0) = (s16) M2C_FIELD(var_a2, s16 *, 0);
                M2C_FIELD(var_a1, s16 *, 0x1B2) = (s16) M2C_FIELD(var_a2, s16 *, 2);
                M2C_FIELD(var_a1, s16 *, 0x1B4) = (s16) M2C_FIELD(var_a2, s16 *, 4);
                M2C_FIELD(var_a1, s16 *, 0x1B6) = (s16) M2C_FIELD(var_a2, s16 *, 6);
                M2C_FIELD(var_a1, s16 *, 0x1B8) = (s16) M2C_FIELD(var_a2, s16 *, 8);
                M2C_FIELD(var_a1, s16 *, 0x1BA) = (s16) M2C_FIELD(var_a2, s16 *, 0xA);
                M2C_FIELD(var_a1, s16 *, 0x1BC) = (s16) M2C_FIELD(var_a2, s16 *, 0xC);
                M2C_FIELD(var_a1, s16 *, 0x1BE) = (s16) M2C_FIELD(var_a2, s16 *, 0xE);
                var_a2 += 0x10;
                var_a1 += 0x10;
            } while (var_a0 < 0x10);
            M2C_FIELD(temp_s2, s16 *, 0x1B4) = func_00227FC0();
            M2C_FIELD(temp_s2, s16 *, 0x1B6) = func_00226940();
            M2C_FIELD(temp_s2, s16 *, 0x1BA) = func_00226E70();
            M2C_FIELD(temp_s2, s16 *, 0x1BE) = func_00226A50();
            if ((*(u8 *)D_00B8C030) == 0) {
                temp_s0_2 = func_0095C610((u8) M2C_FIELD(temp_s2, s16 *, 0x1B6));
                var_s1_4 = 0;
loop_14:
                if (temp_s0_2 != func_0095C780(var_s1_4)) {
                    var_s1_4 = (var_s1_4 + 1) & 0xFF;
                    if (var_s1_4 >= 0xA) {
                        var_v1 = 0;
                    } else {
                        goto loop_14;
                    }
                } else {
                    var_v1 = var_s1_4 & 0xFF;
                }
                M2C_FIELD(temp_s2, s16 *, 0x1B8) = (s16) (var_v1 & 0xFF);
            }
        }
        M2C_FIELD(temp_s2, s32 *, 0x2D0) = 1;
    }
}
