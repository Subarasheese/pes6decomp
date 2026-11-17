/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_002C18C0(s32, s32, s32, s32);
s32 func_00C13390(s32);
u8 func_00C132C0(s32);
u8 func_00C132B0(s32);
u8 *func_00C13280(s32);
s32 func_002C4B50(s32, s32);
typedef s32 (*Fn)(s32 *);

s32 func_00C5CEB0(u32 arg0, s32 arg1, u32 arg2) {
    s32 buf[5];
    s32 res = 0;
    u32 s1 = arg2 & 0xFF;
    s32 s0 = (s1 >> 5) & 1;
    u32 s2;
    s32 v;
    s32 i;
    u32 t;
    u32 h;
    f32 sc;

    if (arg0 == -1 || arg1 == -1) return 0;
    v = func_002C18C0(arg0, arg1, s0, 6);
    if (v == -1) return 0;
    s2 = func_00C13390(v);
    if (s2 == -1) return 0;
    if (!(arg0 < s2)) return 0;
    if (func_00C132C0(s2) != 0xB) return 0;
    if ((s0 & 0xFF) != ((func_00C132B0(s2) >> 5) & 1)) return 0;
    if (s1 != func_00C132B0(s2)) return 0;
    for (i = 0; i < 5; i++) buf[i] = 0;
    t = func_00C13280(s2)[5] & 0x70;
    if (t == 0x30) {
        buf[1] = 1;
    } else if (t == 0x20 || t == 0x10) {
        buf[0] = 1;
    }
    sc = (f32)func_002C4B50(s2, s0 & 0xFF);
    h = *(u16 *)(func_00C13280(s2) + 2);
    buf[3] = 0;
    ((f32 *)buf)[2] = sc * (86.59163665771484f * (f32)((s32)h % 0x138) - 13465.0f);
    ((f32 *)buf)[4] = sc * (83.53109741210938f * (f32)((s32)h / 0x138) - 8729.0f);
    {
        Fn fn = (Fn)0x00C5E450;
        res = fn(buf);
    }
    return res;
}
