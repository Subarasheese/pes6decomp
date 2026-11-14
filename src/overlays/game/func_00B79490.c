/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00209A00(void *, s32, s32);
extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];
extern char D_0059237D[];

s32 func_00B79490(void) {
    u8 *p;
    s32 i;
    s32 n;
    u8 *q;
    u16 h;

    if ((*(u8 *)D_0059237D) != 0) {
        n = 0x17;
        p = (u8 *)Pes6MatchPlayers;
    } else {
        n = 0x16;
        p = (u8 *)D_0058E7F0;
    }
    i = 0;
    if (i < n) {
        do {
            q = *(u8 **)(p + 4);
            if (q[0x2C] != 0) {
                h = *(u16 *)(q + 0x30);
                if ((h >= 0x5CA) && (h < 0x5E2)) {
                    func_00209A00(q, 0x1BF, 0);
                    p[0x16] = 0xFD;
                    *(s16 *)(p + 0x18) = 0;
                }
            }
            i += 1;
            p += 0x240;
        } while (i < n);
    }
    return 0;
}
