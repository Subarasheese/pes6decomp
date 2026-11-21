/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00AEFF50(void);
extern void func_00AF2B70(void);

s32 func_00AF1B30(void) {
    u32 value1;
    value1 = func_00AEFF50();
    if (value1 == 0) {
        return 1;
    } else {
        if (((s32 *)(value1))[0x8CC] != 4) {
            func_00AF2B70();
            return 0;
        } else {
            return 1;
        }
    }
}
