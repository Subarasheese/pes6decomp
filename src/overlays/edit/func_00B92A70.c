/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001E6E10(s32);
extern s32 func_00B8F8D0(s32, s32);
extern void func_00B8F910(void *, s8);
extern void func_00B90140(s32, s32);
extern s32 func_00BF62A0(s32);

void func_00B92A70(s32 arg0, s32 arg1) {
    s32 value;
    s32 value2;

    value = func_00B8F8D0(arg0, 0);
    value2 = func_00BF62A0(arg1);
    if (func_001E6E10(value2) == 0) {
        func_00B8F910((void *)arg0, 0);
    } else {
        func_00B90140(value, value2);
        func_00B8F910((void *)arg0, 1);
        return;
    }
}
