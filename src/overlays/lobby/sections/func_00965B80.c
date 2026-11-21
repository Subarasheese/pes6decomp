/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s16 func_00952AB0(s32);
extern s32 func_00840A10(s32);
extern s32 func_009523D0(s32);

s32 func_00965B80(s32 arg0) {
    s32 value1;
    s32 value2;
    s16 value3;
    value1 = func_00840A10(arg0);
    if ((value1 != 0)) {
        value2 = func_009523D0(value1);
        value3 = func_00952AB0((value2 & 0xFFFF));
        return (s16)value3;
    } else {
        return 0;
    }
}
