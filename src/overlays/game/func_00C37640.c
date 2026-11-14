/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCB6FD[];

u8 func_00C37640(s32 arg0) {
    return *(u8 *)(((u8 *)D_00CCB6FD) + ((arg0 - 1) * 0x94));
}
