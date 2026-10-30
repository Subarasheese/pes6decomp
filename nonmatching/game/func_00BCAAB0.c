/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E758C;
extern char D_00CBAA02[];

s32 func_00BCAAB0(void) {
    s32 var_a4;
    s32 var_v0;
    u16 var_a3;
    u8 temp_a0;
    void *var_a2;

    var_v0 = 0x12C;
    var_a3 = (*(u16 *)D_00CBAA02);
    var_a4 = 0;
    if ((s32) var_a3 >= 0) {
        var_a2 = D_003E758C + (var_a3 * 0x354);
loop_2:
        temp_a0 = M2C_FIELD(var_a2, u8 *, 0x34E);
        if (var_a4 != 0) {
            if ((temp_a0 & 0xFF) != 4) {
                var_v0 = var_a3 & 0xFFFF;
            } else {
                goto block_7;
            }
        } else {
            if ((temp_a0 & 0xFF) == 4) {
                var_a4 = 1;
            }
block_7:
            var_a3 -= 1;
            var_a2 -= 0x354;
            if ((s32) var_a3 < 0) {

            } else {
                goto loop_2;
            }
        }
    }
    if ((var_a4 != 0) && ((var_v0 & 0xFFFF) == 0x12C)) {
        var_v0 = 0;
    }
    return var_v0;
}
