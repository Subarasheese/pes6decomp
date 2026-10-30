/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED880(void *, f32);
extern void * func_001E6E10(s32);
extern void func_001EEE60(void *, void *);
extern void func_001EDA30(void *, s32);
extern float func_001E5410(void);
extern void func_001EDAE0(void *, s8);
extern void func_001EF900(void *, s8);
extern void * func_001EDD00(void *);
void *func_001EE0D0();                              /* extern */
M2C_UNK func_001EE630(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, void *);              /* extern */
M2C_UNK func_001EEF60(void *, u8 *);                /* extern */
M2C_UNK func_001EF370(void *, f32 *);               /* extern */
s16 *func_008472D0();                               /* extern */
s32 func_00858FA0(s32);                             /* extern */
s32 func_00858FD0(M2C_UNK *, s16);                  /* extern */
extern char D_003F7794[];
extern char D_008B21C0[];
extern char D_008EE190[];
extern void *D_008EE1A4;
extern void *D_008EE1A8;
extern char D_008EE769[];
extern char D_008F198D[];

void func_008B70D0(s32 arg0) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    u8 sp40;
    u8 sp41;
    u8 sp42;
    u8 sp43;
    s8 sp44;
    u8 sp45;
    u8 sp46;
    u8 sp47;
    u8 sp48;
    u8 sp49;
    u8 sp4A;
    u8 sp4B;
    u8 sp4C;
    u8 sp4D;
    s8 sp4E;
    u8 sp4F;
    s16 sp58;
    s16 sp5A;
    s16 sp5C;
    s16 sp5E;
    f32 var_f0;
    f32 var_f0_2;
    s32 var_v1;
    s64 temp_v1;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    if (((*(u16 *)D_008EE190) & 0x80) && (var_v1 = 1, (func_00858FA0(func_00858FD0(((void *)D_008B21C0), *func_008472D0())) == 1))) {

    } else if (((*(u8 *)D_008EE769) == 0xFF) && ((*(u8 *)D_008F198D) == 0xFF)) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        temp_v0 = func_001EE0D0();
        D_008EE1A4 = temp_v0;
        func_001ED880(temp_v0, 10000.0f);
        func_001EDAE0(D_008EE1A4, 1);
        sp5E = 0x100;
        sp58 = 0;
        sp5A = 0;
        sp5C = 0x200;
        if ((*(s16 *)D_003F7794) > 0x200) {
            var_f0 = (f32) (*(s16 *)D_003F7794);
        } else {
            var_f0 = (f32) 0x200;
        }
        sp38 = var_f0;
        temp_v1 = (s64) ((s64) (s32) func_001E5410() << 0x30) >> 0x30;
        if (sp5E < temp_v1) {
            var_f0_2 = (f32) temp_v1;
        } else {
            var_f0_2 = (f32) sp5E;
        }
        sp3C = var_f0_2;
        sp30 = -sp38 / 2.0f;
        sp34 = -var_f0_2 / 2.0f;
        if (arg0 != 0) {
            func_001EDA30(D_008EE1A4, 1);
            temp_s1 = func_001E6E10(0x4EDE);
            temp_v0_2 = func_001EDD00(D_008EE1A4);
            func_001EF900(temp_v0_2, 1);
            func_001EF370(temp_v0_2, &sp30);
            func_001EEAC0(temp_v0_2, temp_s1);
            func_001EE630(temp_v0_2, &sp58);
            temp_v0_3 = func_001EE0D0();
            D_008EE1A8 = temp_v0_3;
            func_001ED880(temp_v0_3, 10000.0f);
            func_001EDAE0(D_008EE1A8, 1);
            func_001EDA30(D_008EE1A8, 2);
            sp43 = 0xD8;
            sp41 = 0xC0;
            sp42 = 0xB7;
            sp4A = 0xB7;
            sp40 = 0xC0;
            sp48 = 0xC0;
            sp49 = 0xC0;
            sp45 = sp41;
            sp46 = sp42;
            sp44 = 0xC0;
            sp4C = sp48;
            sp4B = 0;
            sp4D = sp49;
            sp47 = sp43;
            sp4E = 0xB7;
            sp4F = sp4B;
            temp_v0_4 = func_001EDD00(D_008EE1A8);
            func_001EF900(temp_v0_4, 1);
            func_001EF370(temp_v0_4, &sp30);
            func_001EEF60(temp_v0_4, &sp40);
            return;
        }
        func_001EDA30(D_008EE1A4, 2);
        sp40 = 0;
        sp43 = 0x80;
        sp41 = 0;
        sp42 = 0;
        temp_v0_5 = func_001EDD00(D_008EE1A4);
        func_001EF900(temp_v0_5, 1);
        func_001EF370(temp_v0_5, &sp30);
        func_001EEE60(temp_v0_5, &sp40);
    }
}
