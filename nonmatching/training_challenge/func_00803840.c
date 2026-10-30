/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void func_002648F0(int);
extern void func_002648E0(int);
extern int func_001CDAA0(void);
extern int func_002646D0(int);
M2C_UNK func_00804290(s32);                         /* extern */
s32 func_00821AD0(s32);                             /* extern */
M2C_UNK func_00821B20(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s64); /* extern */
s32 func_00A1B4A0(M2C_UNK *);                       /* extern */
M2C_UNK func_00B2A370(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
s32 func_00BF7550(void *);                          /* extern */
M2C_UNK func_00C355A0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C82150(M2C_UNK);                     /* extern */
extern char Pes6MatchPlayers[];
extern char D_005900B0[];
extern char D_00591E00[];
extern char Pes6MatchState_Current[];
extern char D_00591E4C[];
extern char D_00591F14[];
extern char D_005E3934[];

s32 func_00803840(s32 *arg0, void *arg1, s32 arg2) {
    s32 spB0;
    M2C_UNK *temp_s0_2;
    M2C_UNK *var_s2;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    u8 *temp_s1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_fp;
    void *temp_s0;
    void *var_s3;

    temp_fp = arg0 + 0x2C;
    temp_s7 = *arg0;
    spB0 = 0;
    func_002648F0(temp_s7);
    temp_v1 = func_002646D0(temp_s7) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_00B2A370(((void *)D_005E3934), 5);
        func_00C82150(0);
        func_00804290(arg2);
        if (func_00821AD0(arg2) == 0) {
            func_00C355A0(1, 0);
        } else {
            func_00C355A0(0, 0);
        }
        if (func_001CDAA0() == 0) {
            var_v0 = 0x3C;
        } else if (func_001CDAA0() != 1) {
            var_v0 = 0;
        } else {
            var_v0 = 0x32;
        }
        M2C_FIELD(temp_fp, s32 *, 0x174) = (s32) (var_v0 * 2);
        func_00264790((void *) temp_s7, 1U);
        /* fallthrough */
    case 1:
        if (((*(u8 *)D_00591F14) != 0) && ((*(u8 *)Pes6MatchState_Current) == 0xC)) {
            M2C_FIELD(((void *)D_005900B0), s16 *, 0x1A) = 0x94;
            if (func_00A1B4A0(((void *)D_005900B0)) == 0) {
                M2C_FIELD(((void *)D_005900B0), s16 *, 0x18) = 0;
                M2C_FIELD(((void *)D_005900B0), s8 *, 0x16) = 0x94;
            }
        }
        var_s5 = 0;
        var_s3 = arg1;
        var_s2 = ((void *)D_00591E00);
        do {
            temp_s1 = arg1 + var_s5;
            var_s4 = 0;
            if ((s32) *temp_s1 > 0) {
                do {
                    temp_v1_2 = M2C_FIELD((var_s3 + var_s4), u8 *, 0x18);
                    if (temp_v1_2 == 0xFF) {
                        var_a0 = 1;
                    } else {
                        var_a0 = (s32) temp_v1_2 % 23;
                    }
                    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
                    if ((func_00BF7550(temp_s0) == 1) && (M2C_FIELD(temp_s0, u8 *, 0x16) != 0x2E) && (func_00BBB8C0(0x14) == 0) && (M2C_FIELD(var_s2, s32 *, 0x48C) & (1 << var_s4))) {
                        M2C_FIELD(temp_s0, u8 *, 0x16) = 0x2EU;
                        M2C_FIELD(temp_s0, s16 *, 0x18) = 0;
                    }
                    var_s4 += 1;
                } while (var_s4 < (s32) *temp_s1);
            }
            var_s5 += 1;
            var_s3 += 0xB;
            var_s2 += 4;
        } while (var_s5 < 2);
        temp_v1_3 = M2C_FIELD(arg1, u8 *, 0x23);
        if (temp_v1_3 == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = (s32) temp_v1_3 % 23;
        }
        temp_s0_2 = ((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240);
        if ((func_00A1B4A0(temp_s0_2) == 0) && ((*(u8 *)D_00591F14) != 0) && ((*(u8 *)D_00591E4C) == M2C_FIELD(arg1, u8 *, 0x23)) && (M2C_FIELD(temp_s0_2, u8 *, 0x16) != 0x94)) {
            M2C_FIELD(temp_s0_2, u8 *, 0x16) = 0x94U;
            M2C_FIELD(temp_s0_2, s16 *, 0x18) = 0;
        }
        func_00821B20(1, 0, 1, 1, 1, 0, 0, 0, 1);
        temp_v0 = M2C_FIELD(temp_fp, s32 *, 0x174);
        if (temp_v0 <= 0) {
            spB0 = 1;
        } else {
            M2C_FIELD(temp_fp, s32 *, 0x174) = (s32) (temp_v0 - 1);
        }
        break;
    }
    func_002648E0(temp_s7);
    return spB0;
}
