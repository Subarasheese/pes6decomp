/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_008F86F8(void *, s32);
extern void func_008F7778(void *, void *, void *, s32, s32, s32, s32, s32);
void func_008F7BA0(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10) {
    s32 sp0;
    s32 temp_s1;
    u32 temp_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v1;

    sp0 = arg3;
    if (arg5 == 1) {
        if ((arg6 == 0) && (arg_sp8 == 0)) {
            temp_v0 = func_008F86F8(arg0, 1);
            temp_v1 = (arg4 * 4) + sp0;
            M2C_FIELD(temp_v1, u32 *, 8) = temp_v0;
            M2C_FIELD(temp_v1, u32 *, 0) = temp_v0;
        }
        temp_s0 = arg1 + (arg4 * 8);
        func_008F7778(arg0, temp_s0, arg2, arg7, arg_sp0, arg_sp8, arg_sp10, 0);
        M2C_FIELD(temp_s0, s32 *, 0x10) = (s32) M2C_FIELD(temp_s0, s32 *, 0);
        M2C_FIELD(temp_s0, s32 *, 0x14) = (s32) M2C_FIELD(temp_s0, s32 *, 4);
        return;
    }
    temp_s1 = arg4 * 8;
    temp_s0_2 = (arg4 * 4) + sp0;
    M2C_FIELD(temp_s0_2, u32 *, 0) = func_008F86F8(arg0, 1);
    func_008F7778(arg0, arg1 + temp_s1, arg2, arg7, arg_sp0, arg_sp8, arg_sp10, 0);
    M2C_FIELD(temp_s0_2, u32 *, 8) = func_008F86F8(arg0, 1);
    func_008F7778(arg0, arg1 + (temp_s1 + 0x10), arg2, arg7, arg_sp0, arg_sp8, arg_sp10, 0);
}
