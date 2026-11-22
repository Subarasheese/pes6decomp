/* compiler: ee-gcc-2.96 */
#include "types.h"

extern void func_00106B38(s32);

extern char D_002B9DA8[];

void func_00106F40(s32 arg0) {
    func_00106B38((s32) ((arg0 * 0xC8) + (((void *)D_002B9DA8) - 0x4E20)));
}
