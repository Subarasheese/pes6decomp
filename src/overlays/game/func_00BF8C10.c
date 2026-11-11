/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_0029A000(s32);
M2C_UNK func_0027B270(s32, M2C_UNK);                /* extern */
extern char D_00CBD7B0[];

s32 func_00BF8C10(void) {
    if (*(s32 **)D_00CBD7B0 != NULL) {
        func_0027B270(**(s32 **)D_00CBD7B0, 0x8CB4);
        func_0029A000(0);
    }
    return 1;
}
