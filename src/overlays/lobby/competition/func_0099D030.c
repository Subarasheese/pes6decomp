/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001B8470(s32);
extern char D_00A7DB28[];

s32 func_0099D030(s64 arg0) {
    s64 value;

    value = (s64)(arg0 << 0x38) >> 0x38;
    if (value == (*(s8 *)D_00A7DB28)) {
        return 1;
    }
    if (value == 1) {
        func_001B8470(1);
    } else {
        func_001B8470(0);
    }
    (*(s8 *)D_00A7DB28) = (s8)arg0;
    return 1;
}
