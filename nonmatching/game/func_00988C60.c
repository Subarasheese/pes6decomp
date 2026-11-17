/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00591DC4[];
extern char D_005926FA[];
extern char D_00591E50[];
extern char D_0058E5B0[];
extern char D_00CB5308[];
extern char D_00591BBC[];
extern s32 D_003E7574;
extern s32 func_009B3350(s32, s32, s32);
extern s32 func_0098ED30(s32);

s32 func_00988C60(char *p) {
    s32 s0, s1, s2, t;
    u32 r;
    if (((*(u32 *)D_00591DC4) >> 1) % *(u8 *)D_005926FA != 0) {
        return 0;
    }
    t = *(u8 *)(D_00591E50 + *(u8 *)(p + 0x13) * 2);
    if (t == 0xFF) {
        s0 = 1;
    } else {
        s0 = t % 23;
    }
    s2 = func_009B3350(D_003E7574, (s32)(13465.0f * (f32)(-*(s16 *)(p + 0x14))), 0);
    s1 = *(s32 *)(p + 0x11C);
    s0 = *(s32 *)(D_0058E5B0 + s0 * 0x240 + 0x11C);
    if (s2 < s1 && s0 < s2) {
        r = func_0098ED30(0xFF) & 0xFF;
        if (r == 3) {
            if (*(u8 *)D_00CB5308 != 0) {
                return 1;
            }
        } else if (r == 5) {
            return 1;
        } else if (r == 4) {
            return 1;
        }
    }
    if (*(u8 *)D_00591BBC >= 2) {
        return 0;
    }
    r = func_0098ED30(0xFF) & 0xFF;
    if (r != 5) {
        return 0;
    }
    if (*(u32 *)(p + 0x114) <= 0x100) {
        return 0;
    }
    if (!(s0 < s1)) {
        return 0;
    }
    if (!((u32)s2 < *(u32 *)(p + 0x11C))) {
        return 0;
    }
    return 1;
}
