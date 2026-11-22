/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_011E21F8;
extern s32 func_00158B68(void);
extern s32 func_00158B88(void);

s32 func_00155F20(void) {
    s32 value1;
    s32 value2;
    value1 = func_00158B68();
    if (value1 != 0) {
        return 0;
    } else {
        value2 = func_00158B88();
        D_011E21F8 = value2;
        return 1;
    }
}
