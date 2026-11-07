/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00AE57F0(s32);
s32 func_00AE9DC0(void);
extern void *D_003EADA4;
extern s32 D_003EADA8;

s32 func_00AE32F0(void) {
    u8 *p;

    p = D_003EADA4;
    if (p == NULL) {
        return 1;
    }
    D_003EADA8 = *(s32 *)(p + 0x3DB8);
    if ((*(s32 *)(p + 0x59F4) == 1) && (*(s32 *)(p + 0x59F0) == 2)) {
        func_00AE57F0(*(s32 *)(p + 0x3DC0));
    }
    *(s32 *)(p + 0x59F8) += 1;
    return func_00AE9DC0();
}
