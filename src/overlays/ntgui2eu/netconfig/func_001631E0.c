/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00134FE8(s32);
extern void func_001630E0(void *);
extern void func_00163908(s32);

void func_001631E0(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0x928) = 0;
    temp_s0 = (M2C_FIELD(arg0, s32 *, 0x940) << 5) + 0x80;
    temp_v0 = func_00134FE8(temp_s0 * 2);
    M2C_FIELD(arg0, s32 *, 0x914) = (s32) (temp_v0 + temp_s0);
    M2C_FIELD(arg0, s32 *, 0x910) = temp_v0;
    M2C_FIELD(arg0, s32 *, 0x91C) = func_00134FE8(M2C_FIELD(arg0, s32 *, 0x940) * 0x10);
    M2C_FIELD(arg0, s32 *, 0x920) = 1;
    M2C_FIELD(arg0, s32 *, 0x930) = (s32) M2C_FIELD(arg0, s32 *, 0x8E0);
    M2C_FIELD(arg0, s32 *, 0x924) = 2;
    func_00163908((s32) arg0);
    func_001630E0(arg0);
    M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
}
