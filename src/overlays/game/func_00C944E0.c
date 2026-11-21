/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00CA90B4[];
extern char D_00CCD950[];
extern char D_00CCD954[];

void func_00C944E0(s32 arg0) {
    (*(s32 *)D_00CCD950) = arg0;
    (*(s32 *)D_00CCD954) = *((s32 *)(((s8 *)D_00CA90B4) + (arg0 * 8)));
}
