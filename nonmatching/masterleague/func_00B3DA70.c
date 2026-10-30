/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B447A0(void);
extern s32 func_00B42D10(s32);
M2C_UNK func_00958000(u8);                          /* extern */
extern u8 D_003EAE68;

void func_00B3DA70(void) {
    u32 temp_v0;
    u8 var_s0;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x6B4) != 9) {
            if (func_00B42D10(0) == 1) {
                if (func_00B42D10(1) != 1) {
                    var_s0 = 0x56;
                } else {
                    var_s0 = 0x5B;
                }
            } else if (func_00B42D10(1) != 1) {
                var_s0 = 0x5D;
            } else {
                var_s0 = 0x5C;
            }
        } else {
            var_s0 = 0x5D;
        }
        if ((var_s0 & 0xFF) != D_003EAE68) {
            func_00958000(var_s0);
            D_003EAE68 = var_s0;
        }
    }
}
