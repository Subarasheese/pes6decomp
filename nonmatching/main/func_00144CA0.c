/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int EIntr(void);
M2C_UNK DIntr();                            /* extern */
M2C_UNK func_00145200(void *);                      /* extern */
extern char D_00500F80[];
extern M2C_UNK *D_00503028;

void func_00144CA0(s8 arg0, s8 arg1, s32 arg2, s8 arg3) {
    M2C_UNK *temp_v0_2;
    M2C_UNK *var_a0;
    void *temp_s0;
    void *temp_v0;

    temp_v0 = ((void *)D_00500F80) + (arg0 * 0xC);
    temp_s0 = temp_v0 + 0x2000;
    DIntr();
loop_1:
    var_a0 = D_00503028;
    if (var_a0 != NULL) {
        D_00503028 = *var_a0;
    } else {
        var_a0 = NULL;
    }
    if (var_a0 == NULL) {
        EIntr();
        DIntr();
        goto loop_1;
    }
    M2C_FIELD(var_a0, M2C_UNK **, 0) = NULL;
    M2C_FIELD(var_a0, s8 *, 4) = 1;
    M2C_FIELD(var_a0, s8 *, 5) = arg0;
    M2C_FIELD(var_a0, s8 *, 6) = arg1;
    M2C_FIELD(var_a0, s8 *, 7) = arg3;
    M2C_FIELD(var_a0, s32 *, 8) = arg2;
    temp_v0_2 = M2C_FIELD(temp_s0, M2C_UNK **, 4);
    if (temp_v0_2 == NULL) {
        M2C_FIELD(temp_v0, M2C_UNK **, 0x2000) = var_a0;
    } else {
        *temp_v0_2 = var_a0;
    }
    M2C_FIELD(temp_s0, M2C_UNK **, 4) = var_a0;
    if (var_a0 == M2C_FIELD(temp_v0, M2C_UNK **, 0x2000)) {
        func_00145200(temp_s0);
    }
    EIntr();
}
