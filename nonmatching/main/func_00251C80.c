/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9B74;
extern s32 D_003E9B94;
extern char D_005850E0[];

void func_00251C80(s32 arg0) {
    s32 i;
    s32 d;
    char *p;
    if (arg0 == 1) {
        D_003E9B94 = D_003E9B74;
    } else if (arg0 == 0) {
        d = D_003E9B74 - D_003E9B94;
        D_003E9B94 = d;
        p = D_005850E0;
        for (i = 0; i < 4; i++, p += 0xD4) {
            if (*(s32 *)(p + 8) >= 0x14) {
                if (*(s32 *)(p + 0xB8) != 0) {
                    *(s32 *)(p + 0xB8) = d + *(s32 *)(p + 0xB8);
                }
            }
        }
        p = D_005850E0;
        for (i = 0; i < 4; i++, p += 0xD4) {
            s32 t = *(s32 *)(p + 8);
            if (t >= 0x11 && t < 0x13) {
                if (*(s32 *)(p + 0xBC) != 0) {
                    *(s32 *)(p + 0xBC) = d + *(s32 *)(p + 0xBC);
                }
            }
        }
    }
}
