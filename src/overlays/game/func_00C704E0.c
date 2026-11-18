/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CB4BD0[];
extern char D_00CCBCC8[];

u8 func_00C704E0(void) {
    return *(((char *)D_00CB4BD0) + (*(s32 *)D_00CCBCC8));
}
