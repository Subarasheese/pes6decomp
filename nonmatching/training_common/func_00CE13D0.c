/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002646E0(void *);
extern void func_00CE44F0(void *);
extern void func_00264790(void *, u8);
extern int func_002646D0(int);
s32 func_00CD3D30(s32);                             /* extern */
M2C_UNK func_00CDFDD0();                            /* extern */
M2C_UNK func_00CDFDF0();                            /* extern */
M2C_UNK func_00CDFE00();                            /* extern */
M2C_UNK func_00CE42B0(f32 *, M2C_UNK);              /* extern */
M2C_UNK func_00CE4540(s32);                         /* extern */
s32 func_00CED260();                                /* extern */
s32 func_00CED270();                                /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB2CC;
extern char D_00CF9B88[];
extern char D_00CF9B8C[];
extern char D_00CF9B90[];
extern char D_00CFEF7C[];

s32 func_00CE13D0(s32 arg0) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;

    sp20 = (*(f32 *)D_00CF9B88);
    sp24 = (*(f32 *)D_00CF9B8C);
    sp28 = (*(f32 *)D_00CF9B90);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 1) {
            func_002646E0((void *) arg0);
        } else if (func_00CED260() != 0) {
            func_002646E0((void *) arg0);
        }
        break;
    case 0:
        M2C_FIELD(D_003E7E1C, s32 *, 0x14C) = (s32) (*(s32 *)D_00CFEF7C);
        func_00CE42B0(&sp20, 3);
        func_00CDFE00();
        func_00CDFDF0();
        func_002646E0((void *) arg0);
        break;
    case 1:
        if (func_00CED270() != 0) {
            M2C_FIELD(D_003E7E1C, s32 *, 0) = 0;
            func_002646E0((void *) arg0);
        }
        break;
    case 2:
        func_00CDFDF0();
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) != 0) {
            func_002646E0((void *) arg0);
        }
        break;
    case 4:
        func_00CDFDD0();
        if (M2C_FIELD(D_003E7E1C, s32 *, 0) == 1) {
            temp_v1_2 = M2C_FIELD(D_003E7E1C, s32 *, 0x14C);
            (*(s32 *)D_00CFEF7C) = temp_v1_2;
            temp_a0 = temp_v1_2 + 0xD;
            M2C_FIELD(arg0, s32 *, 0x18) = temp_a0;
            D_003EB2CC = func_00CD3D30(temp_a0);
            func_00CE4540(arg0);
            func_00264790((void *) arg0, 0U);
        } else {
            (*(s32 *)D_00CFEF7C) = 0;
            func_00CE44F0((void *) arg0);
        }
        break;
    }
    return 0;
}
