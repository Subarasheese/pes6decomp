/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern s32 func_0030EF30(void);
extern u32 func_00333620(s32, u8);
extern s32 func_0030EEF0(void);
extern s32 func_003386D0(s32, s32);
extern s32 func_00342250(void);
extern s32 func_00338A60(void *, void *);
extern s32 func_00338A20(void *, s32, s32);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(s32, s32, s32, M2C_UNK *);      /* extern */
s32 func_00356E00(s32, s32 *, s32 *);               /* extern */
extern char D_003E15C8[];
extern M2C_UNK func_003208E0;

s32 func_003207C0(void *arg0) {
    s32 sp38;
    s32 sp3C;
    s32 temp_s0;
    void *temp_v0;

    if (func_00356E00(arg0 + 0x38, &sp38, &sp3C) != 0) {
        temp_v0 = func_00338AD0(sp38, sp3C, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E15C8));
        func_00338A60(temp_v0, arg0);
        func_00338A20(temp_v0, (s32) (arg0 + 0x38), 3);
        func_003389F0(arg0, 0, 5);
        func_003389F0(arg0, 1, 1);
    }
    temp_s0 = func_0030EF30();
    if ((func_0030EEF0() == 0) && (temp_s0 == 0)) {
        func_00333620(3, 0U);
        func_00333620(6, 0U);
        func_00333620(5, 0U);
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        func_00342250();
        func_003386D0(0x1C, 0x78);
        func_003387D0(arg0, (s32) &func_003208E0);
        return 1;
    }
    return 0;
}
