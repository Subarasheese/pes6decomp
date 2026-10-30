/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00BC9E00(int);
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK, s32 *, s32, s32, s32); /* extern */
M2C_UNK func_00BD6A50();                            /* extern */
M2C_UNK func_00C1B440(M2C_UNK, s32);                /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */
extern s8 D_003E9E88;
extern s8 D_003E9E89;
extern char D_00CBC460[];
extern char D_00CE5688[];
extern M2C_UNK *D_00CE56A0;
extern char D_00CE56A4[];
extern char D_00CE56A8[];
extern char D_00CE56AC[];
extern char D_00CE56B0[];

void func_00BD4FC0(s32 arg0, s32 arg1) {
    s32 temp_a5;

    func_001C4730(arg1, arg0, 0x7C);
    func_00BC9E00(1);
    func_00C1B440(1, func_00C1B460(0));
    D_003E9E88 = 0;
    D_003E9E89 = 0;
    func_00BD6A50();
    D_00CE56A0 = ((void *)D_00CBC460);
    temp_a5 = M2C_FIELD(((void *)D_00CBC460), s32 *, 0x28) - 1;
    (*(s32 *)D_00CE56A8) = M2C_FIELD(((void *)D_00CBC460), s32 *, 0x28);
    (*(s32 *)D_00CE56B0) = 0;
    (*(s32 *)D_00CE56AC) = 0;
    (*(s32 *)D_00CE56A4) = M2C_FIELD(((void *)D_00CBC460), s32 *, 0x24) + (temp_a5 * 0x2C);
    func_001C48E8(((void *)D_00CE5688), 0, 0xC, ((void *)D_00CE56A4), M2C_FIELD(((void *)D_00CBC460), s32 *, 0x24), temp_a5, M2C_FIELD(((void *)D_00CBC460), s32 *, 0x28));
}
