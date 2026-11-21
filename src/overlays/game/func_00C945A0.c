/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00CA9184[];
extern char D_00CCD958[];
extern char D_00CCD95C[];

void func_00C945A0(s32 arg0) {
    (*(s32 *)D_00CCD958) = arg0;
    (*(s32 *)D_00CCD95C) = *((s32 *)(((s8 *)D_00CA9184) + (arg0 * 8)));
}
