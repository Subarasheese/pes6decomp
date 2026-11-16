/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 D_003EA820;
extern char D_00CCBD28[];
extern char D_00CCBD30[];

s32 func_00C72100(s32 arg0) {
    s32 var_v0;

    D_003EA820 = arg0;
    var_v0 = 0;
    if (*(s32 *)(D_00CCBD28 + (arg0 * 4)) != 0) {
        var_v0 = M2C_FIELD((D_00CCBD30 + (arg0 * 0x50)), u8 *, 0x29) & 1;
    }
    return var_v0;
}
