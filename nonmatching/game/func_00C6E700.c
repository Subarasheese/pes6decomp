/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00CA8360[];
extern char D_00CCBBE8[];
extern char D_00CCBBEC[];

void func_00C6E700(s32 arg0) {
    *(s32 *)D_00CCBBE8 = arg0;
    *(u32 *)D_00CCBBEC = (u32)D_00CA8360 + (arg0 * 8) + 4;
}
