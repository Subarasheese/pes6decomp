/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022BB90(s32);
extern s32 func_00230380(void);
s32 func_0022AE10();                                /* extern */
void *func_0022BFF0(s32, M2C_UNK);                  /* extern */
s32 func_00230410();                                /* extern */
extern void *D_003E77B0;

void func_0099B920(s32 arg0) {
    s32 var_v1;
    void *temp_v0;

    if (func_0022AE10() != 0) {
        temp_v0 = func_0022BFF0(arg0, 0);
        if ((M2C_FIELD(temp_v0, u8 *, 0x17) & 1) != 1) {
            if (func_0022BB90((s32) M2C_FIELD(temp_v0, u8 *, 5)) & 0xFF) {
                M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x4000);
                if ((func_00230410() != 1) && (func_00230380() != 1)) {
                    var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 8;
                    goto block_12;
                }
            }
        } else if (func_0022BB90((s32) M2C_FIELD(temp_v0, u8 *, 6)) & 0xFF) {
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x4000);
            if ((func_00230410() != 1) && (func_00230380() != 1)) {
                var_v1 = M2C_FIELD(D_003E77B0, s32 *, 0x20) | 8;
block_12:
                M2C_FIELD(D_003E77B0, s32 *, 0x20) = var_v1;
            }
        }
    }
}
