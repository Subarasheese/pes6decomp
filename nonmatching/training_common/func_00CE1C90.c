/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002646D0();                                /* extern */
M2C_UNK func_002646E0(void *);                      /* extern */
M2C_UNK func_00264790(void *, M2C_UNK);             /* extern */
M2C_UNK func_00CE06E0();                            /* extern */
M2C_UNK func_00CE0720();                            /* extern */
M2C_UNK func_00CE0730();                            /* extern */
M2C_UNK func_00CE42B0(f32 *, M2C_UNK);              /* extern */
M2C_UNK func_00CE44F0(void *, void *);              /* extern */
M2C_UNK func_00CE4540(void *, void *);              /* extern */
s32 func_00CED270();                                /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB2A8;
extern char D_00CF9B40[];
extern char D_00CF9B44[];
extern char D_00CF9B48[];
extern char D_00CF9B4C[];
extern char D_00CF9B50[];
extern char D_00CFEF7C[];

s32 func_00CE1C90(void *arg0) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    s32 temp_v1;

    sp20 = (*(f32 *)D_00CF9B40);
    sp24 = (*(f32 *)D_00CF9B44);
    sp28 = (*(f32 *)D_00CF9B48);
    sp2C = (*(f32 *)D_00CF9B4C);
    sp30 = (*(f32 *)D_00CF9B50);
    temp_v1 = func_002646D0() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        func_002646E0(arg0);
        break;
    case 0:
        M2C_FIELD(D_003E7E1C, s32 *, 0x14C) = (s32) D_003EB2A8;
        func_00CE42B0(&sp20, 5);
        func_00CE0730();
        func_00CE0720();
        func_002646E0(arg0);
        break;
    case 1:
        if (func_00CED270() != 0) {
            M2C_FIELD(D_003E7E1C, s32 *, 0) = 0;
            func_002646E0(arg0);
        }
        break;
    case 2:
        func_00CE0720();
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 4:
        func_00CE06E0();
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 1) {
            D_003EB2A8 = 0;
            func_00CE44F0(arg0, D_003E7E1C);
        } else {
            (*(s32 *)D_00CFEF7C) = 0;
            D_003EB2A8 = M2C_FIELD(D_003E7E1C, s32 *, 0x14C);
            M2C_FIELD(arg0, s32 *, 0x18) = 2;
            func_00CE4540(arg0, D_003E7E1C);
            func_00264790(arg0, 0);
        }
        break;
    }
    return 0;
}
