/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void * func_00229DF0(void);
s32 func_0095C390(u16);                             /* extern */
void *func_00970870(u16);                           /* extern */
M2C_UNK func_00973480(s32, u64);                    /* extern */
M2C_UNK func_00973760(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */

u16 func_00B486C0(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    u16 temp_s2;
    u16 var_v0;
    void *temp_v0;
    void *temp_v0_2;

    if (arg0 == 0) {
        return 0U;
    }
    if (func_00229DF0() != NULL) {
        temp_s2 = M2C_FIELD(arg1, u16 *, 4);
        temp_v0 = func_00970870(temp_s2);
        if (temp_v0 != NULL) {
            temp_s0 = (arg2 & 0xFF) * 4;
            func_001D7D80(M2C_FIELD((temp_s0 + arg0), void **, 0x14), arg3 & 0xFF);
            func_00973480(M2C_FIELD((temp_s0 + arg0), s32 *, 0x114), (u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x38) >> 0x3C);
            temp_v0_2 = temp_s0 + arg0;
            func_009737E0(M2C_FIELD(temp_v0_2, s32 *, 0x214), 0xB, func_0095C390(temp_s2));
            func_00973760(M2C_FIELD(temp_v0_2, s32 *, 0x214), 0x10);
            var_v0 = 0;
            if ((u32) (arg3 & 0xFF) < 2U) {
                var_v0 = M2C_FIELD(arg1, u16 *, 6);
            }
            M2C_FIELD((temp_s0 + arg0), void **, 0x850) = arg1;
            return var_v0;
        }
        return 0U;
    }
    return 0U;
}
