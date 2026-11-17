/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003B7AF0[], D_003B7AF4[], D_003B7AF8[], D_003B7AFC[], D_003B7B00[];
extern char D_00591E19[], D_0058E5B0[], D_0061C71D[], D_0061C718[], D_003E6498[];
void func_0030EE30(void *);
s32 func_0030DBA0(void);
s32 func_00332FA0(void);
void func_00338AD0(s32, void *, s32, void *, s32);
void func_003595B0(void);
void func_00359B10(void);
void func_001C48E8(void *, s32, s32);
void func_003387D0(void *, void *, void *);
void func_00338750(void *, s32);
void func_00338720(void *, s32);
s32 func_00340C80(f32);
s32 func_00340880(f32, f32);

s32 func_003595E0(u8 *s0) {
    f32 vec[4];
    s32 tbl[5];
    s32 a, s1, r, n;
    u8 *s2;

    tbl[0] = *(s32 *)D_003B7AF0;
    tbl[1] = *(s32 *)D_003B7AF4;
    tbl[2] = *(s32 *)D_003B7AF8;
    tbl[3] = *(s32 *)D_003B7AFC;
    tbl[4] = *(s32 *)D_003B7B00;
    a = *(u8 *)D_00591E19;
    if (a != 0xFF) a = a % 23; else a = 1;
    s2 = (u8 *)D_0058E5B0 + a * 576;
    func_0030EE30(vec);
    s1 = func_0030DBA0();
    r = func_00332FA0();
    if (r == 0 && s1 != 0) {
        ((void (*)(void *))tbl[*(s32 *)(s0 + 0x38)])(s0);
        n = *(s32 *)(s0 + 0x38);
        *(s32 *)(s0 + 0x38) = n + 1;
        *(u8 *)D_0061C71D = 1;
        func_00338AD0(0x37, func_003595B0, 0x20, D_003E6498, n + 1);
        if (*(u32 *)(s0 + 0x38) < 5) return 0;
        *(s32 *)(s0 + 0x38) = 0;
        func_001C48E8(D_0061C718, 0, 12);
        func_003387D0(s0, func_00359B10, D_003E6498);
        *(u8 *)D_0061C71D = 0;
        func_00338750(s0, 10);
        func_00338720(s0, func_00340C80(3.0f));
        func_00338750(s0, 10);
        return 0;
    }
    {
        f32 h = (f32)*(s16 *)(s2 + 0x14);
        r = func_00340880(vec[0] * h, vec[2] * h);
    }
    if (r != 0 || s1 == 0) {
        *(s32 *)(s0 + 0x38) = 0;
        func_001C48E8(D_0061C718, 0, 12);
        func_003387D0(s0, func_00359B10, D_003E6498);
        *(u8 *)D_0061C71D = 0;
        func_00338750(s0, 10);
        return 0;
    }
    n = *(s32 *)(s0 + 0x28) - *(s32 *)(s0 + 0x34);
    if (func_00340C80(2.0f) < n && *(s32 *)(s0 + 0x38) == 0) {
        *(s32 *)(s0 + 0x38) = 0;
        func_001C48E8(D_0061C718, 0, 12);
        func_003387D0(s0, func_00359B10, D_003E6498);
        *(u8 *)D_0061C71D = 0;
        func_00338750(s0, 10);
    }
    return 0;
}
