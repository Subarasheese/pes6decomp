/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA994;

void *func_0099FD80(s32 arg0) {
    s32 temp_a3;
    s32 var_a4;
    s32 var_a5;
    u8 temp_a1;
    u8 temp_v1;
    void *temp_v0;

    if (D_003EA994 != NULL) {
        temp_a3 = arg0 & 0xFF;
        if (temp_a3 < 0x20) {
            temp_v1 = M2C_FIELD(D_003EA994, u8 *, 5);
            if (temp_v1 == 8) {
                if (temp_a3 == 7) {
                    return M2C_FIELD(D_003EA994, void **, 0x4A0);
                }
                goto block_12;
            }
block_12:
            if ((temp_v1 == 0x10) && (temp_a3 == 0xF)) {
                return M2C_FIELD(D_003EA994, void **, 0x4A0);
            }
            var_a4 = 0;
            var_a5 = 0;
loop_16:
            temp_v0 = M2C_FIELD((D_003EA994 + ((var_a5 & 0xFF) * 4)), void **, 0x420);
            if (temp_v0 != NULL) {
                temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x16);
                if (((temp_a1 & 1) != 1) && (((u64) ((s64) temp_a1 << 0x3E) >> 0x3F) != 1)) {
                    if ((var_a4 & 0xFF) != temp_a3) {
                        var_a4 = (var_a4 + 1) & 0xFF;
                        goto block_24;
                    }
                    return temp_v0;
                }
            }
block_24:
            var_a5 = (var_a5 + 1) & 0xFF;
            if (var_a5 >= 0x20) {
                goto block_25;
            }
            goto loop_16;
        }
        goto block_25;
    }
block_25:
    return NULL;
}
