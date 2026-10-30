/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00177F30(void *);
extern char D_00395480[];
extern char D_003954B8[];
extern char D_003CC3F8[];
extern M2C_UNK func_00177A60;

void *func_00177C20(s8 arg0, s32 arg1, s32 arg2) {
    s32 var_a0;
    s8 *var_v1;
    void *temp_s0;
    void *var_v0;

    var_a0 = 0;
    if (M2C_FIELD(((void *)D_003954B8), s8 *, 4) != 0) {
        var_v1 = ((void *)D_003954B8) + 4;
        var_a0 = 1;
loop_2:
        var_v1 += 0x30;
        if (var_a0 < 0x40) {
            if (*var_v1 != 0) {
                var_a0 += 1;
                goto loop_2;
            }
        }
    }
    var_v0 = NULL;
    if (var_a0 != 0x40) {
        temp_s0 = (var_a0 * 0x30) + (((void *)D_003954B8) + 0x54B8);
        M2C_FIELD(temp_s0, s8 *, 4) = 1;
        M2C_FIELD(temp_s0, M2C_UNK **, 0) = ((void *)D_00395480);
        M2C_FIELD(temp_s0, s8 *, 5) = arg0;
        M2C_FIELD(temp_s0, M2C_UNK **, 8) = ((void *)D_003CC3F8);
        M2C_FIELD(temp_s0, s32 *, 0xC) = arg1;
        M2C_FIELD(temp_s0, s32 *, 0x10) = (s32) ((s32) ((arg2 < 0) ? (arg2 + 0xF) : arg2) >> 4);
        M2C_FIELD(temp_s0, M2C_UNK **, 0x28) = &func_00177A60;
        M2C_FIELD(temp_s0, void **, 0x2C) = temp_s0;
        func_00177F30(temp_s0);
        var_v0 = temp_s0;
    }
    return var_v0;
}
