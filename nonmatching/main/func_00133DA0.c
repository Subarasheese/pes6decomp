/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001299B0(s32, s32);
M2C_UNK func_00146C70(M2C_UNK *);                   /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_003C6860[];
extern char D_003FBCA0[];

M2C_UNK *func_00133DA0(s8 arg0) {
    M2C_UNK *var_s0;
    s32 var_v1;

    var_v1 = 0;
    var_s0 = ((void *)D_003FBCA0);
loop_1:
    if (M2C_FIELD(var_s0, u8 *, 4) != 0) {
        var_v1 += 1;
        var_s0 += 0x10;
        if (var_v1 >= 0x69) {
            func_00146C70(((void *)D_003C6860));
            return NULL;
        }
        goto loop_1;
    }
    func_001C48E8(var_s0, 0, 0x10);
    M2C_FIELD(var_s0, u8 *, 4) = 1U;
    M2C_FIELD(var_s0, s8 *, 5) = arg0;
    if (arg0 != 0) {
        M2C_FIELD(var_s0, void **, 0xC) = func_001299B0(1, arg0 * 4);
    }
    return var_s0;
}
