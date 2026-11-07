/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00CB52A0[];

void func_00C23BF0(u8 *arg0) {
    s32 var_s1;
    u8 *var_s0;

    var_s1 = 0;
    var_s0 = (u8 *)D_00CB52A0;
    do {
        if (M2C_FIELD(var_s0, u8 *, 0x6CC) == *arg0) {
            func_001C48E8(var_s0 + 0x6BC, 0, 0x40);
        }
        var_s1 += 1;
        var_s0 += 0x40;
    } while (var_s1 < 0x16);
}
