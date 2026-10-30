/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00D09EE0(void *);                      /* extern */
M2C_UNK func_00D09F30(void *);                      /* extern */
M2C_UNK func_00D0A210();                            /* extern */
M2C_UNK func_00D113A0(void *, s32);                 /* extern */

s32 func_00D09DB0(void *arg0, s32 arg1) {
    void *temp_a0;

    if (arg0 == NULL) {
        return 0;
    }
    func_001C48E8(0, 0xC4);
    func_00D0A210();
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    M2C_FIELD(arg0, s8 *, 0xC0) = 0;
    M2C_FIELD(arg0, s8 *, 0xC1) = 1;
    M2C_FIELD(arg0, s8 *, 0xC2) = 1;
    M2C_FIELD(arg0, s8 *, 0xC3) = 1;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    func_00D113A0(arg0 + 0x18, arg1);
    func_00D113A0(arg0 + 0x70, arg1);
    if (arg0 != NULL) {
        if (arg0 != NULL) {
loop_6:
            temp_a0 = M2C_FIELD(arg0, void **, 0x5C);
            if ((temp_a0 != NULL) && (temp_a0 != (arg0 + 0x60)) && (temp_a0 != (arg0 + 8)) && (M2C_FIELD(arg0, s32 *, 0) > 0)) {
                func_00D09F30(temp_a0);
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
                goto loop_6;
            }
        }
        M2C_FIELD(arg0, s32 *, 0) = 0;
        func_00D09EE0(arg0 + 8);
        func_00D09EE0(arg0 + 0x60);
        M2C_FIELD(arg0, void **, 0x5C) = (void *) (arg0 + 0x60);
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
        M2C_FIELD(arg0, void **, 0xB0) = (void *) (arg0 + 8);
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    }
    return 1;
}
