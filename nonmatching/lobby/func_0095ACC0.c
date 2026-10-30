/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001C8590(void *, void *, M2C_UNK);     /* extern */
void *func_0082C2A0();                              /* extern */
void *func_00936B90();                              /* extern */

s32 func_0095ACC0(void) {
    s32 temp_v1;
    s32 var_s5;
    u16 temp_s6;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s3;
    void *temp_s4;
    void *temp_v0;

    temp_s0 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_s0 == NULL) {
        return 1;
    }
    if (temp_v0 != NULL) {
        var_s5 = 0;
        temp_s6 = M2C_FIELD(temp_s0, u16 *, 0x13DCC);
        M2C_FIELD(temp_v0, u16 *, 0x3DFD0) = temp_s6;
loop_12:
        if ((var_s5 & 0xFFFF) < (s32) temp_s6) {
            temp_v1 = var_s5 & 0xFFFF;
            temp_s0_2 = temp_v0 + 0x3DFD0 + (temp_v1 * 0xE4);
            temp_s3 = temp_s0_2 + 4;
            if (temp_s3 != NULL) {
                temp_s4 = temp_s0 + 0x13DCC + (temp_v1 * 0x60) + 4;
                if (temp_s4 != NULL) {
                    func_001C48E8(temp_s3, 0, 0xE4);
                    func_001C4730(temp_s3, temp_s4, 0x60);
                    func_001C8590(temp_s0_2 + 0x64, temp_s0_2 + 0x10, 0x40);
                }
            }
            var_s5 = (var_s5 + 1) & 0xFFFF;
            goto loop_12;
        }
        return 4;
    }
    return 1;
}
