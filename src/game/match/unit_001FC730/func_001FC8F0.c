/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00533030[];
extern char D_00533034[];

void func_001FC8F0(s32 arg0) {
    if (arg0 < (*(s32 *)D_00533030)) {
        M2C_FIELD(((arg0 << 4) + (*(s32 *)D_00533034)), s8 *, 0xC) = 0;
    }
}
