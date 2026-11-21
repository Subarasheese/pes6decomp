/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BC0748(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
extern s32 *D_00C3F1BC;
extern char D_00C4C108[];

s32 func_00BC05D8(void) {
    s32 var_s0;

    func_00BC0748(9, 0x18, ((void *)D_00C4C108), 0xC4);
    var_s0 = 0x1B;
    if (D_00C3F1BC != NULL) {
        var_s0 = *D_00C3F1BC + 0x1B;
    }
    func_00BC0748(0xA, 0x18, ((void *)D_00C4C108), 0xCA);
    return var_s0;
}
