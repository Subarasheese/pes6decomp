/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
extern u32 func_00B37A60(void);
extern void func_001B9A50(void *, s32);
M2C_UNK func_00956A80(s32, s8);                     /* extern */

void func_00B36980(s8 arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_s1;
    u32 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0_2;
    void *temp_s3;
    void *temp_s3_2;

    temp_v0 = func_00B37A60();
    if (temp_v0 != 0) {
        var_s1 = 0;
        do {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x290);
            temp_a0 = var_s1 & 0xFF;
            if (((temp_a0 + 1) < (s32) temp_v1) || ((temp_v1 + 7) < temp_a0)) {
                temp_s3 = temp_v0 + ((var_s1 & 0xFF) * 4);
                func_001D7D60(M2C_FIELD(temp_s3, void **, 8), 0);
                func_00956A80(M2C_FIELD(temp_s3, s32 *, 0x12C), 0);
            } else {
                temp_s3_2 = temp_v0 + (temp_a0 * 4);
                func_001D7D60(M2C_FIELD(temp_s3_2, void **, 8), arg0);
                func_00956A80(M2C_FIELD(temp_s3_2, s32 *, 0x12C), arg0);
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x29C), arg0);
            }
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < 0x48);
        temp_a0_2 = M2C_FIELD(temp_v0, void **, 0x29C);
        if (temp_a0_2 != NULL) {
            temp_a1 = M2C_FIELD(temp_v0, s32 *, 0x27C);
            temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0x290);
            if ((temp_a1 + 1) >= (s32) temp_v1_2) {
                if ((temp_v1_2 + 7) >= temp_a1) {
                    func_001D7D60(temp_a0_2, arg0);
                } else {
                    goto block_13;
                }
            } else {
block_13:
                func_001D7D60(temp_a0_2, 0);
            }
        }
        func_001B9A50(M2C_FIELD(temp_v0, void **, 0x250), (s32) arg0);
        func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x24C), (u8) arg0);
    }
}
