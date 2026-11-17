/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00592980[];
extern char D_00591BE4[];
extern s32 func_00B2ACF0(void *a);
extern s32 func_00277220(void *p, s32 n);
extern s32 func_009E1C90(s32 n);
extern s32 func_002DCA30(void);
extern void func_0084C6D0(s32 n);

void func_00BED3F0(s32 *arg0) {
    s32 s0;
    u8 *p;
    s32 t;
    u32 a0;
    u8 *q;

    func_00B2ACF0(arg0);
    p = (u8 *)*arg0;
    q = (u8 *)D_00592980 + p[0x12] * 26880 + p[0x11] * 840;
    if (func_00277220(q + 0xF0, 1) == 0) {
        s0 = 0;
    } else {
        p = (u8 *)*arg0;
        q = (u8 *)D_00592980 + p[0x12] * 26880 + p[0x11] * 840;
        t = q[0xF1];
        if (t == 0) s0 = 0;
        else if (t == 1) s0 = 0;
        else if (t == 2) s0 = 1;
        else if (t == 3) s0 = 2;
        else if (t == 4) {
            if (q[0xF2] == 5) s0 = 3; else s0 = 2;
        } else if (t == 5) s0 = 4;
    }
    if ((func_009E1C90(1) & 0xFF) == 1) {
        p = (u8 *)*arg0;
        p[0x4E] = D_00591BE4[0] * 5;
    }
    a0 = *(u16 *)(*(u8 **)(*arg0 + 4) + 0x30);
    if (a0 == 0x184 || a0 == 0x253 || a0 == 0x254 || a0 == 0x17F) s0 = 5;
    if (a0 == 0x16D || a0 == 0x12A || a0 == 0x254) s0 = 6;
    {
        u8 *o = (u8 *)arg0[1];
        if (s0 == 0) o[0x4C] = 0x45;
        else if (s0 == 1) o[0x4C] = 0x4B;
        else if (s0 == 2) o[0x4C] = 0x4A;
        else if (s0 == 3) o[0x4C] = 0x48;
        else if (s0 == 4) o[0x4C] = 0x49;
        else if (s0 == 5) {
            if (a0 == 0x184 || a0 == 0x253) o[0x4C] = 0x43;
            else if (a0 == 0x17F) o[0x4C] = 0x4C;
            else o[0x4C] = 0x44;
        } else if (s0 == 6) o[0x4C] = 0x46;
    }
    if ((func_009E1C90(1) & 0xFF) == 1) {
        p = (u8 *)*arg0;
        q = (u8 *)D_00592980 + p[0x12] * 26880 + p[0x11] * 840;
        q[0xF9] = 1;
        if (func_002DCA30() != 0) func_0084C6D0(9);
    }
    t = ((u8 *)arg0[1])[0x4C] - 0x43;
    if ((u32)t < 10) {
        *(s16 *)(*arg0 + 0x18) = 9;
    }
}
