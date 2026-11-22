/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 D_005BD300[];
extern u32 D_005BD304[];

void func_001424C0(int arg0, s64 arg1) {
    D_005BD300[0] = (int)arg1 + 1;
    if (D_005BD300[0] == 1) {
        D_005BD304[0] = 2;
        return;
    }
    D_005BD304[0] = 1;
}
