/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001E62C0(void);
extern void func_001DF4F0(void *, s8);
extern void func_001DF330(void *, s32);
extern void func_001DF370(void *, s32);
extern void func_001DF750(void *, f32, f32);
extern void func_001E1C50(void *);
extern void func_001DEF70(void *, f32);
M2C_UNK func_001DF460(void *, void *);              /* extern */
M2C_UNK func_001DF510(void *, f32, f32);            /* extern */

s32 func_001F1C80(void *arg0, void *arg1) {
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 temp_f4;
    f32 temp_f5;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x54);
    if ((func_001E62C0() & 2) == 2) {
        func_001DF4F0(temp_s0, (s8) M2C_FIELD(arg0, u8 *, 2));
        if (M2C_FIELD(arg0, u8 *, 1) & 1) {
            temp_f5 = M2C_FIELD(arg0, f32 *, 8);
            temp_f4 = M2C_FIELD(arg0, f32 *, 0xC);
            sp50 = temp_f5;
            sp54 = temp_f4;
            sp58 = M2C_FIELD(arg0, f32 *, 0x10);
            sp5C = M2C_FIELD(arg0, f32 *, 0x14);
            func_001DF750(temp_s0, M2C_FIELD(arg1, f32 *, 0) + temp_f5, M2C_FIELD(arg1, f32 *, 4) + temp_f4);
            func_001DF510(temp_s0, sp58, sp5C);
        }
        if (((s32) M2C_FIELD(arg0, u8 *, 1) >> 1) & 1) {
            func_001DF370(temp_s0, M2C_FIELD(arg0, s32 *, 0x48));
            func_001DF330(temp_s0, M2C_FIELD(arg0, s32 *, 0x4C));
        }
        func_001DF460(temp_s0, arg0 + 0x50);
        func_001DEF70(temp_s0, M2C_FIELD(arg1, f32 *, 8));
        func_001E1C50(temp_s0);
    }
    M2C_FIELD(arg0, u8 *, 1) = 0U;
    return M2C_FIELD(temp_s0, s32 *, 0x50);
}
