/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00AFBAB0(u8);
extern char D_00CBD2A6[];
extern char D_00CBD2A8[];

s32 func_00BC2B50(char *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    s32 var_v0;

    var_v0 = *(u8 *)(D_00CBD2A6 + arg2) == *(u8 *)(arg0 + 0x13);
    temp_a2 = *(u8 *)arg0 - (func_00AFBAB0(*(u8 *)arg0) & 0xFF);
    if (var_v0 != 0) {
        var_v0 = ((s32) (*(u16 *)(D_00CBD2A8 + arg1 * 4 + arg2 * 2) & (1 << temp_a2)) >> temp_a2) != 0;
    }
    return var_v0;
}
