/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_005E19A0[];
extern void func_001A4880(s32);

void func_002A8890(s32 mask) {
    s32 value = *(s32 *)D_005E19A0 & ~mask;
    *(s32 *)D_005E19A0 = value;
    if (value & 2) {
        func_001A4880(1);
    } else {
        func_001A4880(0);
    }
}
