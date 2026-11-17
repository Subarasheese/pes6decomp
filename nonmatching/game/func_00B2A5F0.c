/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_00B2A6E0(void **, s32, s32, s32, s32, s32);

void func_00B2A5F0(void **arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, s32 arg5) {
    f32 *p;
    u32 s1;

    p = (f32 *)((char *)M2C_FIELD(*arg0, void **, 4) + 0x38);
    s1 = (u32)*p & 0xFFFF;
    *p = (f32)arg3;
    func_00B2A6E0(arg0, arg1, arg2, arg4, arg4, arg5);
    *(f32 *)((char *)M2C_FIELD(*arg0, void **, 4) + 0x38) = (f32)s1;
}
