/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E758C;
extern char D_00CBAA02[];
extern char D_00CBAA04[];

u16 func_009B5C10(void) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a6;
    u16 var_a7;
    void *var_a5;

    var_a7 = (*(u16 *)D_00CBAA04);
loop_1:
    temp_a1 = var_a7 * 0x354;
    var_a6 = 0;
    var_a5 = D_003E758C + temp_a1;
loop_2:
    temp_a0 = M2C_FIELD(var_a5, u16 *, 0x14) & 0x7FF;
    if ((temp_a0 >= 0x59A) && (temp_a0 < 0x5CA)) {
        return M2C_FIELD((temp_a1 + D_003E758C), u16 *, 0x352);
    }
    var_a6 += 1;
    var_a5 += 0x24;
    if (var_a6 >= 0x17) {
        if (var_a7 != (*(u16 *)D_00CBAA02)) {
            var_a7 = (u16) ((s32) (var_a7 + 1) % 300);
            goto loop_1;
        }
        return 0xFFFFU;
    }
    goto loop_2;
}
