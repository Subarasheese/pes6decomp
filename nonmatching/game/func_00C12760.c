/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
extern u8 *D_003EA7BC;
extern char D_00CBDED0[];

void func_00C12760(void) {
    u8 *var_a1;
    s32 var_a3;
    s32 var_a2;

    D_003EA7BC = (u8 *)D_00CBDED0;
    func_001C48E8(D_00CBDED0, 0, 0x1BC4);
    var_a3 = 0;
    var_a1 = (u8 *)D_00CBDED0;
    do {
        var_a2 = 0;
        do {
            if (var_a2 < 0xB) {
                var_a1[var_a2 + 0x98] = var_a2;
            } else {
                var_a1[var_a2 + 0x98] = 0xFF;
            }
            var_a2 += 1;
        } while (var_a2 < 0x12);
        var_a3 += 1;
        var_a1 += 0x12;
    } while (var_a3 < 2);
}
