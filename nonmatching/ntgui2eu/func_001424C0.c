/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BD300[];
extern char D_005BD304[];

void func_001424C0(M2C_UNK arg0, s64 arg1) {
    s32 temp_a1;

    temp_a1 = ((s64) (arg1 << 0x20) >> 0x20) + 1;
    (*(s32 *)D_005BD300) = temp_a1;
    if (temp_a1 == 1) {
        (*(s32 *)D_005BD304) = 2;
        return;
    }
    (*(s32 *)D_005BD304) = 1;
}
