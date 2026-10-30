/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00134FE8(s32);                             /* extern */
M2C_UNK func_00135018(s32);                         /* extern */
M2C_UNK func_00164190(void *, s32, s32, s32);       /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
M2C_UNK func_001AE624(s32, void *, s32);            /* extern */
extern char D_005FD2A8[];

s32 func_00165460(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        temp_v0 = func_00134FE8(((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s32 *, 0x44) + 7) >> 3) * 0x10);
        if (temp_v0 != 0) {
            temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s32 *, 0x44);
            temp_s0_2 = temp_v0 + temp_s0;
            func_001AE624(temp_v0, arg0, temp_s0);
            func_001AE624(temp_s0_2, arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s32 *, 0x44));
            func_00164190(M2C_FIELD(arg0, void **, 0x4C), temp_v0, arg1, arg2);
            temp_s0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s32 (**)(void *, s32, s32, s32, s32), 0xC8)(arg0, temp_v0, temp_s0_2, arg1, arg2);
            func_00135018(temp_v0);
            var_v0 = temp_s0_3;
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_v0;
        }
        func_0019DBD0(((void *)D_005FD2A8));
        return 0;
    }
    return var_v0;
}
