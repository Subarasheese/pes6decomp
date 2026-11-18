/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_008B146B[];

u8 func_008028C0(s32 arg0) {
    return *(((u8 *)D_008B146B) + (arg0 & 0xFF));
}
