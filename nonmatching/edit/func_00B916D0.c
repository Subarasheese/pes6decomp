/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED840(void *, s8);
extern void func_001EF900(void *, s8);
extern void func_001ED880(void *, f32);
extern void * func_001EDD00(void *);
M2C_UNK func_001EE890(void *, f32 *);               /* extern */
M2C_UNK func_00B90140(void *, M2C_UNK);             /* extern */
M2C_UNK func_00B90180(void *, s32, s32, s32, s32);  /* extern */
s32 func_00B902A0(void **, M2C_UNK);                /* extern */
s32 func_00B91390();                                /* extern */
extern char D_0052B0B4[];
extern char D_00CB3FC0[];
extern char D_00CB3FC4[];
extern char D_00CB3FC8[];
extern char D_00CB3FCC[];
extern char D_00CB3FD0[];
extern char D_00CB3FD4[];
extern char D_00CB3FD8[];
extern char D_00CB3FDC[];
extern char D_00CB3FE0[];
extern char D_00CB3FE4[];
extern char D_00CB3FE8[];
extern char D_00CB3FEC[];

void func_00B916D0(void *arg0) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    void *temp_s0;
    void *temp_v0;

    sp20 = (*(f32 *)D_00CB3FC0);
    sp24 = (*(f32 *)D_00CB3FC4);
    sp28 = (*(f32 *)D_00CB3FC8);
    sp2C = (*(f32 *)D_00CB3FCC);
    sp30 = (*(f32 *)D_00CB3FD0);
    sp34 = (*(f32 *)D_00CB3FD4);
    sp38 = (*(f32 *)D_00CB3FD8);
    sp3C = (*(f32 *)D_00CB3FDC);
    sp40 = (*(f32 *)D_00CB3FE0);
    sp44 = (*(f32 *)D_00CB3FE4);
    sp48 = (*(f32 *)D_00CB3FE8);
    sp4C = (*(f32 *)D_00CB3FEC);
    if (func_00B91390() == 0) {
        temp_s0 = M2C_FIELD(arg0, void **, 8);
        if (func_00B902A0(M2C_FIELD(temp_s0, void ***, 0x10), 1) != 0) {
            func_001ED880(*M2C_FIELD(temp_s0, void ***, 0x10), 16000.0f);
            func_001ED840(*M2C_FIELD(temp_s0, void ***, 0x10), 2);
            temp_v0 = func_001EDD00(*M2C_FIELD(temp_s0, void ***, 0x10));
            func_00B90180(temp_v0, (s32) -M2C_FIELD(((void *)D_0052B0B4), f32 *, 0), (s32) -M2C_FIELD(((void *)D_0052B0B4), f32 *, 4), (s32) (2.0f * M2C_FIELD(((void *)D_0052B0B4), f32 *, 0)), (s32) (2.0f * M2C_FIELD(((void *)D_0052B0B4), f32 *, 4)));
            func_00B90140(temp_v0, 0x7405);
            func_001EE890(temp_v0, &sp20);
            func_001EF900(temp_v0, 1);
        }
    }
}
