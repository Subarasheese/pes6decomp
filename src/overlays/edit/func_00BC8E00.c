/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 D_00CE5180[];

void func_00BC8E00(s32 arg0) {
    if (arg0 == 0) {
        D_00CE5180[0] = (D_00CE5180[0] + 0x200);
    } else {
        D_00CE5180[0] = (D_00CE5180[0] - 0x200);
    }
}
