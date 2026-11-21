/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_011E21F0;
extern s32 D_011E21F8;
extern s32 func_00158B68(void);
extern s32 func_00158B88(void);
extern void func_001590E8(s32);

s32 func_00155D70(void) {
    s32 value1;
    s32 value2;
    value1 = func_00158B68();
    if (value1 != 0) {
        return 0;
    } else {
        value2 = func_00158B88();
        D_011E21F8 = value2;
        func_001590E8(D_011E21F0);
        return 1;
    }
}
