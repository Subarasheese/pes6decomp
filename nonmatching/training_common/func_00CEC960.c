/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDD00(void *);
extern void func_001ED880(void *, f32);
extern void func_001EF900(void *, s8);
extern void func_001EDAE0(void *, s8);
extern void func_001EDA30(void *, s32);
extern void func_001EF860(void *, void *);
extern void func_001ED840(void *, s8);
M2C_UNK func_001EDD90(void *);                      /* extern */
void *func_001EE0D0(s16, s16);                      /* extern */
M2C_UNK func_001EEF60(void *, s8 *);                /* extern */
M2C_UNK func_001EF370(void *, f32 *);               /* extern */
extern void *D_003EB314;
extern void *D_003EB318;
extern char D_003F7794[];
extern char D_003F7796[];

s32 func_00CEC960(s32 arg0, f32 fparg0) {
    s8 sp10;
    s8 sp13;
    s8 sp17;
    s8 sp1B;
    s8 sp1F;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    s8 sp30;
    f32 *var_v1_2;
    f32 temp_f1;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s8 *var_v1;
    s8 *var_v1_3;
    void *temp_v0;
    void *temp_v0_2;

    var_v0 = 0x10;
    var_v1 = &sp30;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_v1_2 = &sp20;
    var_v0_2 = 0x10;
    if (var_v1_2 != NULL) {
        do {
            *var_v1_2 = 0;
            var_v0_2 -= 1;
            var_v1_2 += 1;
        } while (var_v0_2 != 0);
    }
    var_v1_3 = &sp10;
    var_v0_3 = 0x10;
    if (var_v1_3 != NULL) {
        do {
            *var_v1_3 = 0;
            var_v0_3 -= 1;
            var_v1_3 += 1;
        } while (var_v0_3 != 0);
    }
    if (arg0 == 0) {
        if (D_003EB318 != NULL) {
            temp_f1 = 255.0f * fparg0;
            if (temp_f1 >= 2.1474836e9f) {
                var_v1_4 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
            } else {
                var_v1_4 = (s32) temp_f1;
            }
            sp13 = var_v1_4 & 0xFF;
            if (!(temp_f1 >= 2.1474836e9f)) {
                var_v1_5 = (s32) temp_f1;
            } else {
                var_v1_5 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
            }
            sp17 = var_v1_5 & 0xFF;
            if (!(temp_f1 >= 2.1474836e9f)) {
                var_v1_6 = (s32) temp_f1;
            } else {
                var_v1_6 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
            }
            sp1B = var_v1_6 & 0xFF;
            if (!(temp_f1 >= 2.1474836e9f)) {
                var_v1_7 = (s32) temp_f1;
            } else {
                var_v1_7 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
            }
            sp1F = var_v1_7 & 0xFF;
            func_001EEF60(D_003EB318, &sp10);
        }
        if (D_003EB314 != NULL) {

        } else {
            temp_v1 = -(*(s16 *)D_003F7794);
            var_v0_4 = temp_v1 >> 1;
            if (temp_v1 < 0) {
                var_v0_4 = (s32) (temp_v1 + 1) >> 1;
            }
            temp_v1_2 = -(*(s16 *)D_003F7796);
            var_v0_5 = temp_v1_2 >> 1;
            sp20 = (f32) var_v0_4;
            if (temp_v1_2 < 0) {
                var_v0_5 = (s32) (temp_v1_2 + 1) >> 1;
            }
            sp24 = (f32) var_v0_5;
            sp28 = (f32) (*(s16 *)D_003F7794);
            sp2C = (f32) (*(s16 *)D_003F7796);
            temp_v0 = func_001EE0D0((*(s16 *)D_003F7796), (*(s16 *)D_003F7794));
            D_003EB314 = temp_v0;
            func_001EDAE0(temp_v0, 1);
            func_001EDA30(D_003EB314, 2);
            func_001ED840(D_003EB314, 0);
            func_001ED880(D_003EB314, 1100.0f);
            temp_v0_2 = func_001EDD00(D_003EB314);
            D_003EB318 = temp_v0_2;
            func_001EF900(temp_v0_2, 1);
            func_001EF860(D_003EB318, &sp30);
            func_001EF370(D_003EB318, &sp20);
            func_001EEF60(D_003EB318, &sp10);
        }
        return 0;
    }
    if (D_003EB314 == NULL) {
        return 1;
    }
    func_001EDD90(D_003EB314);
    D_003EB318 = NULL;
    D_003EB314 = NULL;
    return 1;
}
