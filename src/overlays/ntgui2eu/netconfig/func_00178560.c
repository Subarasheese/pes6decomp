/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void func_001786B8(void *);

void func_00178560(s8 *arg0) {
    *(s32 *)((s8 *)(arg0) + 0x4D0) = 0;
    func_001786B8(arg0);
}
