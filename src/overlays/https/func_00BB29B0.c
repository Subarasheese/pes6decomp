/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void *func_001C4730(void *, void *, u32);

void func_00BB29B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 != arg1) {
        func_001C4730((void *)arg1, (void *)arg2, (u32)arg3);
    }
}
