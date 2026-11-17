/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_003B4BD0[];
extern char D_003B4BD4[];
extern s32 D_003E9E78;

s32 func_002FC630(u32 arg0) {
    s32 i;
    char *p;

    D_003E9E78 = 0;
    i = 0;
    p = D_003B4BD0;
    do {
        if ((arg0 == *(u32 *)p) && (*(s32 *)(p + 4) != 0x80)) {
            return *(s32 *)(D_003B4BD4 + (i << 6));
        }
        p += 0x40;
        i += 1;
        D_003E9E78 = i;
    } while (i <= 0);
    if (arg0 < 0x69U) {
        return 0x5A;
    }
    if (arg0 < 0xB9U) {
        return 0x7F;
    }
    return 0x5A;
}
