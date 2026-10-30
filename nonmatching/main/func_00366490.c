/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DEE20(s32, s32, s32);
extern void func_0020A380(s32, s32, s32);
extern s32 func_00209C60(s32, s32);
s32 func_002307F0();                                /* extern */
extern char D_00591BBA[];
extern char D_0061ED60[];

void func_00366490(void) {
    s32 *var_s0;
    s32 var_s1;

    if (!(func_002307F0() & 0xFF)) {
        if ((*(u8 *)D_00591BBA) == 0) {
            return;
        }
        var_s1 = 0;
        var_s0 = ((void *)D_0061ED60);
        do {
            if (M2C_FIELD(var_s0, u8 *, 4) & 1) {
                func_002DEE20(M2C_FIELD(var_s0, s32 *, 0xC), M2C_FIELD(var_s0, s32 *, 0x10), 0xF);
                func_00209C60((*(s32 *)D_0061ED60), 2);
                func_0020A380((*(s32 *)D_0061ED60), 1, M2C_FIELD(var_s0, s32 *, 8));
            }
            var_s1 += 1;
            var_s0 += 0x10;
        } while (var_s1 < 0x14);
    }
}
