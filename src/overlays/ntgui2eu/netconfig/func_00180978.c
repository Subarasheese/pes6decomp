/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void func_00180DA8(void *);

void func_00180978(s8 *arg0) {
    *(s32 *)((s8 *)(arg0) + 0x4D0) = 0;
    func_00180DA8(arg0);
}
