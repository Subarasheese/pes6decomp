/* compiler: mwcc-3.0.1b210 */
#include "types.h"

void func_00BCDBF0(s8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((s8 *)(arg0) + 0xBC) = arg2;
    *(s32 *)((s8 *)(arg0) + 0xB4) = arg1;
}
