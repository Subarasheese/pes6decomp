/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00C89450(s32, u8);
extern s32 D_00CCD8A4[];
extern s32 D_00CCD8A8[];

void func_00C90D00(void) {
    s32 temp_s0;
    s32 var_s1;

    temp_s0 = (D_00CCD8A8[0] * D_00CCD8A4[0]) / 255;
    func_00C89450(0, temp_s0);
    func_00C89450(1, temp_s0);
    var_s1 = 2;
    do {
        func_00C89450(var_s1, temp_s0);
        var_s1 += 1;
    } while (var_s1 <= 0x20);
}
