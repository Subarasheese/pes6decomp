/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002646D0();                                /* extern */
M2C_UNK func_002646E0(void *);                      /* extern */
M2C_UNK func_00264790(void *, M2C_UNK);             /* extern */
s32 func_00CD3D30(s32);                             /* extern */
M2C_UNK func_00CE0140();                            /* extern */
M2C_UNK func_00CE0160();                            /* extern */
M2C_UNK func_00CE0170();                            /* extern */
M2C_UNK func_00CE42B0(f32 *, M2C_UNK);              /* extern */
M2C_UNK func_00CE44F0(void *);                      /* extern */
M2C_UNK func_00CE4540(void *);                      /* extern */
s32 func_00CED260();                                /* extern */
s32 func_00CED270();                                /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB2CC;
extern char D_00CF9B78[];
extern char D_00CF9B7C[];
extern char D_00CFEF7C[];

s32 func_00CE1740(void *arg0) {
    f32 sp28;
    f32 sp2C;
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;

    sp28 = (*(f32 *)D_00CF9B78);
    sp2C = (*(f32 *)D_00CF9B7C);
    temp_v1 = func_002646D0() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 1) {
            func_002646E0(arg0);
        } else if (func_00CED260() != 0) {
            func_002646E0(arg0);
        }
        break;
    case 0:
        M2C_FIELD(D_003E7E1C, s32 *, 0x14C) = (s32) (*(s32 *)D_00CFEF7C);
        func_00CE42B0(&sp28, 2);
        func_00CE0170();
        func_00CE0160();
        func_002646E0(arg0);
        break;
    case 1:
        if (func_00CED270() != 0) {
            M2C_FIELD(D_003E7E1C, s32 *, 0) = 0;
            func_002646E0(arg0);
        }
        break;
    case 2:
        func_00CE0160();
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 4:
        func_00CE0140();
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) == 1) {
            temp_v1_2 = M2C_FIELD(D_003E7E1C, s32 *, 0x14C);
            (*(s32 *)D_00CFEF7C) = temp_v1_2;
            temp_a0 = temp_v1_2 + 9;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_a0;
            D_003EB2CC = func_00CD3D30(temp_a0);
            func_00CE4540(arg0);
            func_00264790(arg0, 0);
        } else {
            (*(s32 *)D_00CFEF7C) = 0;
            func_00CE44F0(arg0);
        }
        break;
    }
    return 0;
}
