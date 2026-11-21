/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_011E0D88;
extern s32 func_00158B68(void);
extern s32 func_00158B88(void);

s32 func_001558B0(void) {
    s32 value1;
    s32 value2;
    value1 = func_00158B68();
    if ((value1 != 0)) {
        return 0;
    } else {
        value2 = func_00158B88();
        D_011E0D88 = value2;
        return 1;
    }
}
