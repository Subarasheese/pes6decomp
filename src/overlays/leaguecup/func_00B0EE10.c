/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00B0CD50(void);
extern void func_00B101D0(void);

s32 func_00B0EE10(void) {
    u32 value1;
    value1 = func_00B0CD50();
    if (value1 == 0) {
        return 1;
    } else {
        if (((s32 *)(value1))[0x507] != 4) {
            func_00B101D0();
            return 0;
        } else {
            return 1;
        }
    }
}
