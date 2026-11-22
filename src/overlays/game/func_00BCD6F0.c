/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00CBD520[];

void func_00BCD6F0(u32 arg0, s32 arg1) {
    if (arg0 < 0xCU) {
        *((s32 *)(((char *)D_00CBD520) + (arg0 * 4))) = arg1;
    }
}
