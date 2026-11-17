/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_001FCDE0(void);
extern s32 func_0017F9A0(s32, void (*)(void), s32 *, s32, s64 *);
extern void *func_001FC920(s32);
extern char D_003A89D0[];
extern char D_003A89D8[];
extern char D_003A89DC[];
extern char D_003A89E0[];
extern char D_00533038[];
extern char D_0053303C[];

s32 func_001FCBE0(s32 arg0) {
    s32 sp4C;
    s64 sp50;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    u8 temp_a0;
    void *temp_s1;
    void *temp_v0;

    sp4C = arg0;
    sp50 = (*(s64 *)D_003A89D0);
    sp58 = (*(s32 *)D_003A89D8);
    sp5C = (*(s32 *)D_003A89DC);
    sp60 = (*(s32 *)D_003A89E0);
    if (((*(s32 *)D_00533038) != 0) && (arg0 < (*(s32 *)D_0053303C))) {
        temp_s1 = (void *)((*(s32 *)D_00533038) + (arg0 * 8));
        temp_v0 = func_001FC920(M2C_FIELD(temp_s1, s32 *, 4));
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0xC);
        if (temp_a0 == 1) return 0;
        if (temp_a0 == 3) return 0;
        if (M2C_FIELD(temp_v0, s32 *, 8) != sp4C) {
            sp58 = M2C_FIELD(temp_v0, s32 *, 0);
            func_0017F9A0(M2C_FIELD(temp_s1, s32 *, 0), func_001FCDE0, &sp4C, 4, &sp50);
            M2C_FIELD(temp_v0, u8 *, 0xC) = 1U;
            return 1;
        }
        M2C_FIELD(temp_v0, u8 *, 0xC) = 2U;
        return 1;
    }
    return 0;
}
