/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_004FDC04[];
extern char D_004FDC10[];

s32 func_00140490(void) {
    s32 *p = (s32 *)(*(s32 *)D_004FDC04);
    return p[(((*(u8 *)D_004FDC10) != 0) ^ 1) + 6];
}
