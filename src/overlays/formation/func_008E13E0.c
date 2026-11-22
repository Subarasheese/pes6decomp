/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_002DB960(s32, s64, s32);

void func_008E13E0(s8 *arg0, s32 arg1) {
    func_002DB960(*(s32 *)((s8 *)(arg0) + 0x5C), (arg1 & 0xFF), 0);
}
