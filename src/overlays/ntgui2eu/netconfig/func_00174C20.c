/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void func_00174E68(s32);

void func_00174C20(s8 *arg0) {
    *(s32 *)((s8 *)(arg0) + 0x4D0) = 0;
    func_00174E68(arg0);
}
