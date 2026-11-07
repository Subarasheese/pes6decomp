/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0090B510(s32);
extern char D_0092F04C[];

u8 func_0090D3F0(void) {
    return !(~(*(s32 *)D_0092F04C) & func_0090B510(0));
}
