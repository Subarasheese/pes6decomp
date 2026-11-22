/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s64 func_00154080(s32);
s32 func_00309440(s32);
s32 func_00309460(s32, s32);
s32 func_00819200(s32, s32);
extern s32 * func_008472D0(void);
void *func_00858FD0(s32 *, s16);
extern void *D_003EA26C;
extern char D_008B21C0[];

s8 func_0080BAE0(void) {
    void *temp_s0;

    temp_s0 = func_00858FD0(((void *)D_008B21C0), *func_008472D0());
    func_00819200(0x01FA000A, -1);
    if (M2C_FIELD(temp_s0, u8 *, 0x10) == 3) {
        func_00309440(2);
        func_00309460(2, 5);
        M2C_FIELD(D_003EA26C, s8 *, 0x28) = 0;
        M2C_FIELD(D_003EA26C, s32 *, 0x58) = (s32) ((s64) (func_00154080(0xC) << 0x20) >> 0x20);
    }
    return M2C_FIELD(D_003EA26C, s8 *, 0x3F);
}
