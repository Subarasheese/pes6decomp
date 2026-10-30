/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E758C;
extern char D_00CBAA02[];
extern char D_00CBAA04[];

u16 func_009B5CA0(void) {
    s32 temp_a0;
    s32 var_a5;
    u16 var_a6;
    void *var_a4;

    var_a6 = (*(u16 *)D_00CBAA04);
loop_1:
    temp_a0 = var_a6 * 0x354;
    var_a5 = 0;
    var_a4 = D_003E758C + temp_a0;
loop_2:
    if ((M2C_FIELD(var_a4, u16 *, 0x14) & 0x7FF) < 0x5CA) {
        var_a5 += 1;
        var_a4 += 0x24;
        if (var_a5 >= 0x17) {
            if (var_a6 != (*(u16 *)D_00CBAA02)) {
                var_a6 = (u16) ((s32) (var_a6 + 1) % 300);
                goto loop_1;
            }
            return 0xFFFFU;
        }
        goto loop_2;
    }
    return M2C_FIELD((temp_a0 + D_003E758C), u16 *, 0x350);
}
