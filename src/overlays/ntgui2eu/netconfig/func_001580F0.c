/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_005BEDB0;
extern s32 D_005BEDBC;
extern s32 D_011E3908;
extern s32 func_00158B68(void);
extern s32 func_00158B88(void);
extern void func_00134FB0(s32);

s32 func_001580F0(void) {
    s32 value1;
    s32 value2;
    value1 = func_00158B68();
    if (value1 != 0) {
        return 0;
    } else {
        value2 = func_00158B88();
        D_011E3908 = value2;
        if (!((value2 >= 0))) {
            func_00134FB0(D_005BEDB0);
            D_005BEDB0 = 0;
            D_005BEDBC = 0;
        }
        return 1;
    }
}
