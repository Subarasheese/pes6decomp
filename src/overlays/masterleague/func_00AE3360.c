/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00AE9C80(void);
extern void func_00AEA100(void);
extern s32 D_003EADA4;

void func_00AE3360(void) {
    if (D_003EADA4 != 0) {
        func_00AEA100();
        func_00AE9C80();
    }
}
