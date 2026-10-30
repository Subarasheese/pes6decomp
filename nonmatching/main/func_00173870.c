/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void pl2enc_err(void *);
extern void func_001739F0(void *);
M2C_UNK func_001C4698(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_0038CBE8[];
extern char D_003CB9B0[];
extern char D_003CB9D8[];
extern char D_003CBA00[];

void *func_00173870(s32 arg0, s32 arg1) {
    M2C_UNK *var_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s0_2;

    func_001C4698(((void *)D_0038CBE8), ((void *)D_0038CBE8), 0x168);
    if (arg0 != 0) {
        if (arg1 >= 0x400) {
            temp_v0 = arg0 & 3;
            var_s0 = arg0;
            if (temp_v0 != 0) {
                var_s0 = (arg0 - temp_v0) + 4;
            }
            var_s0_2 = var_s0 + 0x2C;
            func_001C48E8((void *) var_s0, 0, 0x2C);
            temp_v0_2 = var_s0_2 & 3;
            M2C_FIELD(var_s0, s32 *, 0) = arg0;
            M2C_FIELD(var_s0, s32 *, 4) = arg1;
            if (temp_v0_2 != 0) {
                var_s0_2 = (var_s0_2 - temp_v0_2) + 4;
            }
            M2C_FIELD(var_s0, s32 *, 8) = var_s0_2;
            M2C_FIELD(var_s0, s32 *, 0xC) = (s32) (var_s0_2 + 0x180);
            func_001739F0((void *) var_s0);
            if ((u32) (arg0 + arg1) >= (u32) (var_s0_2 + 0x300)) {
                return (void *) var_s0;
            }
            var_a0 = ((void *)D_003CBA00);
            goto block_18;
        }
        var_a0 = ((void *)D_003CB9D8);
        goto block_18;
    }
    var_a0 = ((void *)D_003CB9B0);
block_18:
    pl2enc_err(var_a0);
    return NULL;
}
