/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDA30(void *, s32);
extern float func_001E5410(void);
extern void func_001EEDA0(void *, u8);
extern void func_001ED880(void *, f32);
extern void * func_001EDD00(void *);
extern void func_001EF860(void *, void *);
extern void func_001EF900(void *, s8);
s32 func_00152130(M2C_UNK, M2C_UNK);                /* extern */
s32 func_001E6E10(s32);                             /* extern */
void *func_001EE0D0();                              /* extern */
M2C_UNK func_001EE890(void *, s32 *);               /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
M2C_UNK func_001EF370(void *, s32 *);               /* extern */
extern void *D_003E9900;
extern void *D_003E9904;
extern s16 D_003E9908;
extern s8 D_003E990C;
extern s32 D_003E9910;
extern char D_003F7794[];

s32 func_001B6A30(s32 arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 sp50;
    f32 sp54;
    s32 sp60;
    s32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 *var_v1;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    var_a0 = arg0;
    D_003E9910 = var_a0;
    if (var_a0 == 0) {
        var_a0 = 1;
        D_003E9910 = 1;
    }
    switch (D_003E990C) {                           /* irregular */
    case 1:
        if (((s64) ((s64) var_a0 << 0x20) >> 0x20) == 1) {
            if (func_00152130(1, 0x2A) == 1) {
                D_003E990C = 2;
                return 1;
            }
            goto block_32;
        }
        temp_v0 = D_003E9908 + 0x2A;
        D_003E9908 = temp_v0;
        if (((s64) ((s64) temp_v0 << 0x30) >> 0x30) >= 0xFF) {
            D_003E9908 = 0xFF;
        }
        func_001EEDA0(D_003E9904, (u8) D_003E9908);
        if (D_003E9908 == 0xFF) {
            D_003E990C = 2;
            return 1;
        }
block_32:
        return 0;
    case 0:
        var_v1 = &sp50;
        var_v0 = 0x10;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        temp_v1 = -(*(s16 *)D_003F7794);
        var_v0_2 = temp_v1 >> 1;
        if (temp_v1 < 0) {
            var_v0_2 = (s32) (temp_v1 + 1) >> 1;
        }
        sp50 = (f32) var_v0_2;
        temp_f0 = -func_001E5410() / 2.0f;
        D_003E9908 = 0;
        sp54 = temp_f0;
        if (D_003E9910 != 1) {
            temp_v0_2 = func_001E6E10(D_003E9910);
            if (temp_v0_2 != 0) {
                if (D_003E9900 == NULL) {
                    temp_v0_3 = func_001EE0D0();
                    D_003E9900 = temp_v0_3;
                    func_001ED880(temp_v0_3, 875.0f);
                    func_001EDA30(D_003E9900, 1);
                }
                temp_v0_4 = func_001EDD00(D_003E9900);
                D_003E9904 = temp_v0_4;
                func_001EF900(temp_v0_4, 1);
                func_001EF860(D_003E9904, &sp50);
                sp60 = 0;
                sp64 = 0;
                sp68 = (f32) (*(s16 *)D_003F7794);
                sp6C = func_001E5410();
                func_001EF370(D_003E9904, &sp60);
                func_001EEAC0(D_003E9904, temp_v0_2);
                sp24 = 0x3D800000;
                sp30 = 0x3D800000;
                sp28 = 0x3F800000;
                sp2C = 0x3F800000;
                sp34 = 0x3F800000;
                sp3C = 0x3F700000;
                sp48 = 0x3F700000;
                sp40 = 0x3F800000;
                sp44 = 0x3F800000;
                sp4C = 0x3F800000;
                sp20 = 0;
                sp38 = 0;
                func_001EE890(D_003E9904, &sp20);
                func_001EEDA0(D_003E9904, (u8) D_003E9908);
                goto block_21;
            }
            D_003E9910 = 1;
            D_003E990C = 1;
        } else {
block_21:
            D_003E990C = 1;
        }
        goto block_32;
    default:
        return 1;
    }
}
