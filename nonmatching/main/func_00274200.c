/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00592980[];
extern char D_00591BE4[];
extern u8 *func_00BC8D50(void);
s32 func_00274200(u8 *src, s32 mode) {
    u8 *v;
    s32 ok = 0;
    u8 *tab;
    s32 sel;
    f32 f;
    v = func_00BC8D50();
    if (v != 0) {
        *(s32 *)v = 2;
        v[4] = 1;
        tab = (u8 *)D_00592980 + src[0x12] * 26880 + src[0x11] * 840 + 0x100;
        v[0xC] = src[0];
        v[0xD] = src[0x12];
        v[0xE] = src[0x11];
        if (mode == 1) {
            sel = *(s32 *)(tab + 0xC);
            *(s32 *)(v + 0x10) = sel;
        } else if (mode == 0) {
            sel = *(s32 *)(tab + 8);
            *(s32 *)(v + 0x10) = sel;
        } else {
            *(s32 *)(v + 0x10) = sel;
        }
        f = 1.0f + 2.0f * (f32)((((u8 *)D_00591BE4)[0] * 4) / 3);
        v[5] = (u8)(u32)f;
        ok = 1;
    }
    return ok;
}
