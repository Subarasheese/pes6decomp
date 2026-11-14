/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCB700[];

u8 func_00C37760(s32 arg0, s32 arg1) {
    return *(u8 *)(arg1 + (((u8 *)D_00CCB700) + ((arg0 - 1) * 0x94)));
}
