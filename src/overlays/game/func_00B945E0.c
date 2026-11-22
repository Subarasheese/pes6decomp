/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00BBB8C0(s32);
extern s32 func_00BC13A0(s32);

s32 func_00B945E0(void) {
    s32 value1;
    s32 value2;
    s32 value3;
    s32 value4;
    s32 value5;
    value1 = func_00BBB8C0(5);
    if (value1 != 3) {
        if (value1 != 2) {
            if (value1 != 1) {
                value5 = func_00BC13A0(0x41);
                return (value5 & 0xFFFF);
            } else {
                value4 = func_00BC13A0(0x3E);
                return (value4 & 0xFFFF);
            }
        } else {
            value3 = func_00BC13A0(0x40);
            return (value3 & 0xFFFF);
        }
    } else {
        value2 = func_00BC13A0(0x3F);
        return (value2 & 0xFFFF);
    }
}
