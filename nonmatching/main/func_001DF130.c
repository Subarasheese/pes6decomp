/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_001DF130(void *arg0, u32 arg1, u32 arg2) {
    void *var_a0;

    if ((arg0 != NULL) && (M2C_FIELD(arg0, u16 *, 0x44) != 0)) {
        M2C_FIELD(arg0, u8 *, 0x6C) = arg1;
        if (arg1 != 0) {
            if ((arg2 & 0xFF) == 0) {
                arg2 = 1;
            }
            M2C_FIELD(arg0, u8 *, 0x6D) = arg2;
            M2C_FIELD(arg0, u8 *, 0x6E) = 0;
            M2C_FIELD(arg0, u8 *, 0x6F) = 0;
            M2C_FIELD(arg0, u8 *, 0x70) = (u8) (u32) (255.0f / (f32) arg2);
            M2C_FIELD(arg0, s16 *, 0x72) = 1;
            M2C_FIELD(arg0, void **, 0x68) = M2C_FIELD(arg0, void **, 8);
            M2C_FIELD(arg0, u8 *, 0x71) = 0;
        } else {
            M2C_FIELD(arg0, u8 *, 0x79) = 1;
            var_a0 = M2C_FIELD(arg0, void **, 8);
            while (var_a0 != NULL) {
                M2C_FIELD(var_a0, u8 *, 0x93) = 0xFF;
                var_a0 = M2C_FIELD(var_a0, void **, 0);
            }
        }
    }
}
