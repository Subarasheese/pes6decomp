/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001EF900(void *, s8);

void func_008D7690(s32 arg0, s32 arg1, s8 arg2) {
    func_001EF900(*(void * *)((s8 *)((((arg1 & 0xFF) << 2) + arg0)) + 0x100), arg2);
}
