/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_005BEDA0;
extern s32 D_005BEDA4;
extern s32 D_011E38E4;
extern s32 func_00158B68(void);
extern s32 func_00158B88(void);
extern void func_00134FB0(s32);

s32 func_00157800(void) {
    s32 value1;
    s32 value2;
    value1 = func_00158B68();
    if (value1 != 0) {
        return 0;
    } else {
        value2 = func_00158B88();
        D_011E38E4 = value2;
        if (!((value2 >= 0))) {
            func_00134FB0(D_005BEDA0);
            D_005BEDA0 = 0;
            D_005BEDA4 = 0;
        }
        return 1;
    }
}
