/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_00CBD890[];
extern char D_00CBD894[];

void func_00C010E0(s32 arg0) {
    s32 value;

    value = arg0;
    if (value >= 0x2E) {
        value = 0;
    }
    if (!(value >= 0x20)) {
        (*(s32 *)D_00CBD890) &= ~(1 << value);
    } else {
        (*(s32 *)D_00CBD894) &= ~(1 << (value - 0x20));
        return;
    }
}
