/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00226240();                                /* extern */
extern void *D_003EAD58;

void func_00B03A90(void) {
    s32 temp_a0;
    s32 var_v1;
    void *temp_s0;

    temp_s0 = D_003EAD58;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
        temp_a0 = func_00226240() & 0xFF;
        switch (temp_a0) {                          /* irregular */
        case 2:
            var_v1 = 0x50B1;
            M2C_FIELD(temp_s0, s32 *, 0x1C) = 0x50AD;
block_22:
            M2C_FIELD(temp_s0, s32 *, 0x20) = var_v1;
            break;
        case 3:
            var_v1 = 0x50B0;
            M2C_FIELD(temp_s0, s32 *, 0x1C) = 0x50AD;
            goto block_22;
        case 1:
            var_v1 = 0x50AF;
            M2C_FIELD(temp_s0, s32 *, 0x1C) = 0x50AD;
            goto block_22;
        case 0:
            var_v1 = 0x50AE;
            M2C_FIELD(temp_s0, s32 *, 0x1C) = 0x50AD;
            goto block_22;
        case 4:
            var_v1 = 0x4F51;
            M2C_FIELD(temp_s0, s32 *, 0x1C) = 0x4F50;
            goto block_22;
        }
        M2C_FIELD(temp_s0, s32 *, 0x24) = 0;
    }
}
