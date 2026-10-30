/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00886290(void *);                          /* extern */
extern void *D_008B2534;
extern char D_008B2550[];

void func_00885CA0(void) {
    s32 var_s1;
    void *var_s0;

    var_s0 = D_008B2534;
    var_s1 = 0;
loop_5:
    if ((*(u16 *)D_008B2550) != 0) {
        if (var_s1 < 0xE) {
            if ((((s32) ((*(u16 *)D_008B2550) & 0xFFFF) >> var_s1) & 1) && (func_00886290(var_s0) != 0)) {
                (*(u16 *)D_008B2550) &= ~(1 << M2C_FIELD(var_s0, s8 *, 0x54)) & 0xFFFF;
            }
            var_s1 += 1;
            var_s0 += 0x60;
            goto loop_5;
        }
    }
}
