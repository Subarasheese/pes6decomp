/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_0030FAB0(s32 a);
extern s32 func_0030E750(s32 a);
extern void func_0030DCC0(f32 *a, f32 *b, s32 c);
extern s32 func_003405E0(f32 a, f32 b);
extern s32 func_00340590(f32 a, f32 b);
extern s32 func_0032E980(s32 a);
extern char *func_00335370(void);
s32 func_003442C0(s32 *out, s32 who) {
    f32 fa, fb;
    u8 buf[11];
    s32 i, cnt = 0, extra = 0;
    s32 s6 = who & 0xFF;
    s32 a = func_0030FAB0(who) & 0xFF;
    s32 b = func_0030E750(who) & 0xFF;
    s32 sel;
    for (i = 0; i < 11; i++) {
        func_0030DCC0(&fa, &fb, a & 0xFF);
        if (func_003405E0(fa, fb) && s6 != a) {
            buf[cnt] = a;
            cnt++;
        }
        func_0030DCC0(&fa, &fb, b & 0xFF);
        if (func_00340590(fa, fb))
            extra++;
        a++;
        b++;
    }
    if (extra != 0)
        extra--;
    *out = cnt;
    if (cnt == 0) {
        sel = 0xFF;
    } else {
        sel = buf[func_0032E980(cnt)];
    }
    *(s32 *)(func_00335370() + 0x101C) = sel;
    return extra < cnt;
}
