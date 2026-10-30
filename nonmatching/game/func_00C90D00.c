/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C89450(s32, s32);                    /* extern */
extern char D_00CCD8A4[];
extern char D_00CCD8A8[];

void func_00C90D00(void) {
    s32 temp_s0;
    s32 var_s1;

    temp_s0 = (((*(s32 *)D_00CCD8A8) * (*(s32 *)D_00CCD8A4)) / 255) + ((u32) ((*(s32 *)D_00CCD8A8) * (*(s32 *)D_00CCD8A4)) >> 0x1F);
    func_00C89450(0, temp_s0 & 0xFF);
    func_00C89450(1, temp_s0 & 0xFF);
    var_s1 = 2;
    do {
        func_00C89450(var_s1, temp_s0 & 0xFF);
        var_s1 += 1;
    } while (var_s1 < 0x21);
}
