/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void func_00162BD8(void *, s32);

void func_00162C30(s8 *arg0, s32 arg1) {
    func_00162BD8(arg0, ((arg1 - *(s32 *)((s8 *)(arg0) + 0x898)) + 1));
}
