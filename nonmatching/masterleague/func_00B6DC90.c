/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00B20EE0(void);
extern void * func_00228960(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EAEF4;

void func_00B6DC90(void) {
    s32 temp_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_s0;
    void *temp_v0;

    if (D_003EAEF4 == NULL) {
        if (D_003EAEF4 == NULL) {
            temp_v0 = func_0096DB90(0x70);
            D_003EAEF4 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x70);
        }
        temp_s0 = D_003EAEF4;
        if (temp_s0 != NULL) {
            M2C_FIELD(temp_s0, void **, 0) = func_00228960();
            M2C_FIELD(temp_s0, s32 *, 0x64) = 0;
            temp_a0 = func_00B20EE0() & 0xFFFF;
            if (temp_a0 < 0x6A) {
                var_v0 = temp_a0 & 0xF;
                if ((temp_a0 < 0) && (var_v0 != 0)) {
                    var_v0 -= 0x10;
                }
                var_v0_2 = var_v0 & 0xFF;
            } else {
                var_v0_2 = 0;
            }
            M2C_FIELD(temp_s0, s8 *, 0x5C) = (s8) ((s32) (var_v0_2 & 0xFF) % 16);
            if (temp_a0 < 0x6A) {
                var_v0_3 = ((u32) (temp_a0 & 0xFFFF) >> 4) & 0xFF;
            } else {
                var_v0_3 = 0;
            }
            M2C_FIELD(temp_s0, s32 *, 0x60) = (s32) (var_v0_3 & 0xFF);
        }
        func_001D5F80(0x10337);
        func_001D5F80(0x1033D);
    }
}
