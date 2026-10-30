/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDA30(void *, s32);
extern void * func_001EDD00(void *);
extern void func_001EF900(void *, s8);
extern void func_001ED880(void *, f32);
extern void * func_001E6E10(s32);
extern void func_001EEDF0(void *, s32, u8);
extern void * func_001EDBA0(void *, void *);
extern void func_001EDAE0(void *, s8);
M2C_UNK sprintf(s8 *, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK func_001EDD90(void *);                      /* extern */
void *func_001EE0D0(s64);                           /* extern */
M2C_UNK func_001EE890(void *, M2C_UNK32 *);         /* extern */
M2C_UNK func_001EEAC0(void *, void *);              /* extern */
M2C_UNK func_001EF370(void *, s8 *);                /* extern */
M2C_UNK func_008B2F30(s32, s8 *);                   /* extern */
s32 func_008B2F50(s32, M2C_UNK);                    /* extern */
M2C_UNK func_008B31A0(s32, M2C_UNK);                /* extern */
s32 func_008B31F0(s32);                             /* extern */
M2C_UNK func_008B3210(s32, s32, s32);               /* extern */
M2C_UNK func_008B32B0(s32, s8 *, M2C_UNK);          /* extern */
s32 func_008B32E0(s32);                             /* extern */
s32 func_008B3310(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern void *D_003EA450;
extern s32 D_003EA454;
extern s32 D_003EA458;
extern char D_00510FD0[];
extern char D_008DA1B0[];
extern char D_008DA1B4[];
extern char D_008DA1B8[];
extern char D_008DA1BC[];
extern char D_008DA1C0[];
extern char D_008DA1C4[];
extern char D_008DA1C8[];
extern char D_008DA1CC[];
extern char D_008DA1D0[];
extern char D_008DA1D4[];
extern char D_008DA1D8[];
extern char D_008DA1DC[];
extern char D_008DA1E0[];
extern char D_008DA1E4[];
extern char D_008DA1E8[];
extern char D_008DA1EC[];
extern char D_008DA1F0[];
extern char D_008DA1F4[];
extern char D_008DA200[];
extern char D_008DA204[];
extern char D_008DA208[];
extern char D_008DA20C[];
extern char D_008DA210[];
extern char D_008DA214[];
extern char D_008DA218[];
extern char D_008DA900[];
extern void *D_008E7688;
extern void *D_008E768C;

void func_008C1E40(void *arg0, s64 arg1, s64 arg2, s64 arg3) {
    s8 sp50;
    s32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    s32 spF0;
    f32 spF4;
    f32 spF8;
    f32 spFC;
    f32 sp100;
    f32 sp104;
    s8 sp110;
    M2C_UNK32 sp120;
    M2C_UNK32 sp124;
    f32 sp128;
    M2C_UNK32 sp12C;
    M2C_UNK32 sp130;
    f32 sp134;
    M2C_UNK32 sp138;
    M2C_UNK32 sp13C;
    f32 sp140;
    M2C_UNK32 sp144;
    M2C_UNK32 sp148;
    f32 sp14C;
    M2C_UNK var_s2;
    s32 *var_s1;
    s32 temp_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s64 temp_a0;
    s64 temp_a0_2;
    s64 temp_s0;
    s8 *var_a0;
    s8 *var_a0_2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;

    sp120 = (*(M2C_UNK32 *)D_008DA1B0);
    sp124 = (*(M2C_UNK32 *)D_008DA1B4);
    sp128 = (*(f32 *)D_008DA1B8);
    sp12C = (*(M2C_UNK32 *)D_008DA1BC);
    sp130 = (*(M2C_UNK32 *)D_008DA1C0);
    sp134 = (*(f32 *)D_008DA1C4);
    sp138 = (*(M2C_UNK32 *)D_008DA1C8);
    sp13C = (*(M2C_UNK32 *)D_008DA1CC);
    sp140 = (*(f32 *)D_008DA1D0);
    sp144 = (*(M2C_UNK32 *)D_008DA1D4);
    var_a0 = &sp110;
    sp148 = (*(M2C_UNK32 *)D_008DA1D8);
    var_v1 = 0x10;
    sp14C = (*(f32 *)D_008DA1DC);
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    spF0 = (*(s32 *)D_008DA1E0);
    spF4 = (*(f32 *)D_008DA1E4);
    spF8 = (*(f32 *)D_008DA1E8);
    spFC = (*(f32 *)D_008DA1EC);
    sp100 = (*(f32 *)D_008DA1F0);
    sp104 = (*(f32 *)D_008DA1F4);
    spD0 = (*(s32 *)D_008DA200);
    spD4 = (*(f32 *)D_008DA204);
    spD8 = (*(f32 *)D_008DA208);
    spDC = (*(f32 *)D_008DA20C);
    spE0 = (*(f32 *)D_008DA210);
    var_a0_2 = &sp50;
    spE4 = (*(f32 *)D_008DA214);
    var_v1_2 = 0x80;
    spE8 = (*(f32 *)D_008DA218);
    if (var_a0_2 != NULL) {
        do {
            *var_a0_2 = 0;
            var_v1_2 -= 1;
            var_a0_2 += 1;
        } while (var_v1_2 != 0);
    }
    if ((*(s32 *)D_00510FD0) == 4) {
        temp_a0 = (s64) (arg1 << 0x38) >> 0x38;
        switch (temp_a0) {                          /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            var_s2 = 7;
            var_s1 = &spD0;
block_15:
            temp_a0_2 = (s64) (arg3 << 0x38) >> 0x38;
            switch (temp_a0_2) {                    /* switch 2; irregular */
            case 3:                                 /* switch 2 */
                D_003EA454 = func_008B32E0(D_003EA454);
                func_001EDBA0(D_003EA450, D_008E7688);
                D_008E7688 = NULL;
                func_001EDBA0(D_003EA450, D_008E768C);
                D_008E768C = NULL;
                func_001EDD90(D_003EA450);
                D_003EA450 = NULL;
                break;
            case 2:                                 /* switch 2 */
                func_001EDAE0(D_003EA450, 0);
                func_008B31A0(D_003EA454, 0);
                return;
            case 0:                                 /* switch 2 */
                temp_v0 = func_001EE0D0(temp_a0_2);
                D_003EA450 = temp_v0;
                func_001ED880(temp_v0, 2500.0f);
                func_001EDA30(D_003EA450, 3);
                temp_v0_2 = func_008B3310(M2C_FIELD(arg0, s32 *, 0x2CC4), 5, 0, 0, 0, 1);
                D_003EA454 = temp_v0_2;
                D_003EA458 = func_008B2F50(temp_v0_2, 0x1F);
                /* fallthrough */
            case 1:                                 /* switch 2 */
                if (func_008B31F0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2CC8), s32 *, 8)) & 0xFFFF) {
                    func_008B3210(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2CC8), s32 *, 0xC), (M2C_FIELD(arg0, s8 *, 0) + 0x2A) & 0xFFFF, D_003EA454);
                } else {
                    func_008B3210(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2CC8), s32 *, 0xC), (M2C_FIELD(arg0, s8 *, 0) + 0x29) & 0xFFFF, D_003EA454);
                }
                func_001EDBA0(D_003EA450, D_008E7688);
                func_001EDBA0(D_003EA450, D_008E768C);
                func_001EDAE0(D_003EA450, 1);
                func_008B31A0(D_003EA454, 1);
                temp_v0_3 = func_001EDD00(D_003EA450);
                D_008E7688 = temp_v0_3;
                func_001EF900(temp_v0_3, 1);
                temp_v0_4 = func_001EDD00(D_003EA450);
                D_008E768C = temp_v0_4;
                func_001EF900(temp_v0_4, 1);
                temp_s0 = (s64) (arg2 << 0x38) >> 0x38;
                temp_s1 = func_001E6E10(var_s1[temp_s0]);
                func_008B32B0(D_003EA454, &sp110, 0x45);
                func_001EF370(D_008E7688, &sp110);
                func_001EEAC0(D_008E7688, temp_s1);
                func_001EE890(D_008E7688, &sp120);
                func_008B32B0(D_003EA454, &sp110, 0x46);
                func_001EF370(D_008E768C, &sp110);
                func_001EEAC0(D_008E768C, temp_s1);
                func_001EEDF0(D_008E768C, 0, 0x99U);
                func_001EEDF0(D_008E768C, 1, 0x99U);
                func_001EEDF0(D_008E768C, 2, 0U);
                func_001EEDF0(D_008E768C, 3, 0U);
                sp124 = 0x3F800000;
                sp12C = 0x3F800000;
                sp130 = 0x3F800000;
                sp144 = 0x3F800000;
                sp13C = 0x3F23D70A;
                sp148 = 0x3F23D70A;
                sp120 = 0;
                sp138 = 0;
                func_001EE890(D_008E768C, &sp120);
                sprintf(&sp50, ((void *)D_008DA900), temp_s0 + 1, var_s2);
                func_008B2F30(D_003EA458, &sp50);
                return;
            }
            break;
        case 0:                                     /* switch 1 */
            var_s2 = 6;
            var_s1 = &spF0;
            goto block_15;
        }
    }
}
