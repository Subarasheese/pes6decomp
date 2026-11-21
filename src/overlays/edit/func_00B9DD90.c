/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00B9C490(void);
extern void func_00B92210(s32, s32, s64);

void func_00B9DD90(void) {
    s32 *value1;
    value1 = func_00B9C490();
    ((s32 *)(value1))[1] = 0x61;
    func_00B92210(0, 1, 1);
}
