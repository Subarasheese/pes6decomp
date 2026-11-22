/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00CCB718[];

void func_00C37610(s32 arg0, s32 arg1) {
    *((s32 *)(((s8 *)D_00CCB718) + ((arg0 - 1) * 0x94))) = arg1;
}
