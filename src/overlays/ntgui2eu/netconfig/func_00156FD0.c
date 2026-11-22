/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_011E37A8;
extern s32 func_00158B68(void);
extern s32 func_00158B88(void);
extern s32 func_00158B98(s32 *);
extern s8 D_011E37B8[];

s32 func_00156FD0(void) {
    s32 value1;
    s32 value2;
    value1 = func_00158B68();
    if (value1 != 0) {
        return 0;
    } else {
        value2 = func_00158B88();
        D_011E37A8 = value2;
        if (!((value2 < 0))) {
            func_00158B98(D_011E37B8);
        }
        return 1;
    }
}
