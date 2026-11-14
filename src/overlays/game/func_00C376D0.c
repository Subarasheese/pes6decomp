/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCB6FF[];

void func_00C376D0(s32 arg0) {
    *(u8 *)(((u8 *)D_00CCB6FF) + ((arg0 - 1) * 0x94)) = 1;
}
