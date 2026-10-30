/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015B478(void *);
M2C_UNK func_0015B8B8(M2C_UNK, M2C_UNK, void *, s32, s32); /* extern */
M2C_UNK func_0015D738(void *);                      /* extern */
extern char D_003C8278[];

s32 func_0015DAD0(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    func_0015B8B8(6, 0, arg0, arg1, arg2);
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s8 *, 1) == 2) {
            func_0015D738(arg0);
        }
        switch (arg2) {                             /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0x14) = arg1;
block_17:
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
            if (temp_v0 >= 0) {
                temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
                if (temp_v1 < temp_v0) {
                    M2C_FIELD(arg0, s32 *, 0x14) = temp_v1;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x14) = 0;
            }
            func_0015B8B8(6, 1, arg0, arg1, arg2);
            return M2C_FIELD(arg0, s32 *, 0x14);
        case 1:
            var_v0 = M2C_FIELD(arg0, s32 *, 0x14);
block_13:
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) (var_v0 + arg1);
            goto block_17;
        case 2:
            var_v0 = M2C_FIELD(arg0, s32 *, 0xC);
            goto block_13;
        default:
            var_a0 = (M2C_UNK *)0x3C82A0;
            goto block_15;
        }
    } else {
        var_a0 = ((void *)D_003C8278);
block_15:
        func_0015B478(var_a0);
        return -3;
    }
}
