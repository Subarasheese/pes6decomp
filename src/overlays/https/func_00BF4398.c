/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

s32 func_00BECFC8(s32, s32 *, M2C_UNK *);
M2C_UNK func_00BF2F28(s32);
extern char D_00C41E18[];

void func_00BF4398(s32 *arg0, s32 arg1) {
    if (func_00BECFC8(arg1, arg0, ((void *)D_00C41E18)) != 0) {
        return;
    }
    func_00BF2F28(*arg0);
}
