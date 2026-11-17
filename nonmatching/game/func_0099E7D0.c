/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592800[];
extern char D_00592810[];
extern char D_00591972[];
extern char D_00591E4C[];
extern char D_00591E7C[];
extern char D_00CAA2E0[];
void func_001A55C0(f32 *p);
void func_001A54F0(f32 *p);
u32 func_009B34C0(u32 a0, u32 a1, u32 a2, u32 a3, f32 a, f32 b, f32 c, f32 d);

void func_0099E7D0(u8 *p, u32 arg) {
    f32 vb[8];
    u32 s1;
    u32 s2;
    u32 s0;
    u32 v1;
    u32 r;
    u32 a0;
    s32 i;

    for (i = 0; i < 8; i++) {
        if (*(u8 *)(D_00592800 + i * 0x28 + 0x10) != 0xFF) {
            s1 = *(u8 *)(D_00592810 + i * 0x28);
            break;
        }
    }
    func_001A55C0(vb + 4);
    func_001A54F0(vb);
    s0 = *(s32 *)(p + 0xB0) & 0xF0;
    if (s0 == 0) {
        if (p[0x47] < 8 && *(u8 *)(D_00591972 + p[0x47] * 0x24) != 0) {
        } else {
            s0 = arg & 0xF0;
        }
    }
    s0 &= 0xFFFF;
    s2 = 0;
    if ((s0 & 0x10) && (s0 & 0x80)) s2 = 0x2000;
    else if ((s0 & 0x40) && (s0 & 0x80)) s2 = 0x6000;
    else if ((s0 & 0x40) && (s0 & 0x20)) s2 = 0xA000;
    else if (s0 & 0x10) {
        if (s0 & 0x20) s2 = 0xE000;
    } else {
        if (s0 & 0x80) s2 = 0x4000;
        else if (s0 & 0x40) s2 = 0x8000;
        else if (s0 & 0x20) s2 = 0xC000;
    }
    if (*(u8 *)D_00591E4C == (s1 & 0xFF)) {
        v1 = (*(u16 *)(p + 0x26) + s2) & 0xFFFF;
    } else {
        r = func_009B34C0(s0 & 0x10, s0, 0, 0, vb[4], vb[6], vb[0], vb[2]);
        v1 = (s2 + (r & 0xFFFF)) & 0xFFFF;
    }
    if ((v1 & 0x1F00) >= 0x1000) v1 = (v1 + 0x2000) & 0xFFFF;
    v1 = *(u16 *)(D_00CAA2E0 + ((((v1 & 0xFFFF) + 0x4000) & 0xFFFF) >> 13) * 4);
    if (s0 == 0) {
        *(s32 *)D_00591E7C = 0;
        a0 = 0;
    } else {
        a0 = (v1 & 0x70) << 1;
        *(s32 *)D_00591E7C = a0 | ((s32)(v1 & 0x80) >> 3);
    }
    r = func_009B34C0(a0, s0, 0, 0, vb[4], vb[6], vb[0], vb[2]);
    *(u16 *)(p + 0xFC) = *(u16 *)(p + 0xFC) + ((r - 0x4000) & 0xFFFF);
}
