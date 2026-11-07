/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(u8 *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00C9EFC0[];
extern char D_00C9F088[];

void func_00C04570(void) {
    u8 *var_s1;
    s32 var_s0;

    var_s0 = 0;
    if (0 < (s32) (*(u8 *)D_00C9F088)) {
        var_s1 = ((void *)D_00C9EFC0);
        do {
            func_001C48E8(var_s1, 0, 0x28);
            var_s0 += 1;
            M2C_FIELD(var_s1, s32 *, 8) = -1;
            var_s1 += 0x28;
        } while (var_s0 < (s32) (*(u8 *)D_00C9F088));
    }
    (*(u8 *)D_00C9F088) = 0;
}
