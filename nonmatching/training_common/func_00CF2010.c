/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00154060(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_00CF25B0(void *);                      /* extern */
extern void *D_003EB334;
extern void *D_003EB338;

void *func_00CF2010(void *arg0) {
    M2C_UNK32 sp38;
    M2C_UNK32 sp3C;
    s32 var_a0;
    void *temp_v0;

    temp_v0 = func_00154060(1, 0x110);
    if (temp_v0 != NULL) {
        sp38 = M2C_FIELD(arg0, M2C_UNK32 *, 0);
        sp3C = M2C_FIELD(arg0, M2C_UNK32 *, 4);
        M2C_FIELD(temp_v0, M2C_UNK32 *, 0x28) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 0);
        M2C_FIELD(temp_v0, M2C_UNK32 *, 0x2C) = (M2C_UNK32) M2C_FIELD(arg0, M2C_UNK32 *, 4);
        M2C_FIELD(temp_v0, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 8);
        M2C_FIELD(temp_v0, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        if (&sp38 != NULL) {
            M2C_FIELD(temp_v0, M2C_UNK32 *, 0x38) = sp38;
            M2C_FIELD(temp_v0, M2C_UNK32 *, 0x3C) = sp3C;
            M2C_FIELD(temp_v0, M2C_UNK32 *, 0x28) = 0;
            M2C_FIELD(temp_v0, M2C_UNK32 *, 0x2C) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x40) = 0x7F7FFFFF;
            M2C_FIELD(temp_v0, s32 *, 0x44) = 0x7F7FFFFF;
            M2C_FIELD(temp_v0, s32 *, 0x48) = 0x7F7FFFFF;
            M2C_FIELD(temp_v0, s32 *, 0x4C) = 0x7F7FFFFF;
            M2C_FIELD(temp_v0, s32 *, 0x50) = 0x7F7FFFFF;
            M2C_FIELD(temp_v0, s32 *, 0x54) = 0x7F7FFFFF;
            M2C_FIELD(temp_v0, s32 *, 0x58) = 0x7F7FFFFF;
            M2C_FIELD(temp_v0, s32 *, 0x5C) = 0x7F7FFFFF;
        }
        func_00CF25B0(temp_v0);
        if (D_003EB338 == NULL) {
            M2C_FIELD(temp_v0, void **, 0x100) = NULL;
            M2C_FIELD(temp_v0, void **, 0x104) = NULL;
            D_003EB334 = temp_v0;
            D_003EB338 = temp_v0;
            return temp_v0;
        }
        if (D_003EB338 == NULL) {
            var_a0 = 0;
        } else if (temp_v0 != NULL) {
            var_a0 = 1;
            M2C_FIELD(temp_v0, void **, 0x100) = (void *) M2C_FIELD(D_003EB338, void **, 0x100);
            M2C_FIELD(temp_v0, void **, 0x104) = (void *) D_003EB338;
            M2C_FIELD(D_003EB338, void **, 0x100) = temp_v0;
        } else {
            var_a0 = 0;
        }
        if (var_a0 != 0) {
            D_003EB338 = temp_v0;
        }
        return temp_v0;
    }
    return temp_v0;
}
