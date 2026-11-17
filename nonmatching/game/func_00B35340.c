/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00270500(void *);
extern void func_00270530(void *, f32 *);
extern void func_009A7000(s32, f32, f32, f32);
extern s32 func_009A70B0(s32, f32, f32);
extern void func_00A08ED0(void *, s32, f32 *);
extern char D_00C9A620[];

void func_00B35340(void **arg0) {
    s8 buf[9];
    f32 b[3];
    f32 a[3];
    s32 i;
    s32 h;
    f32 t;
    u8 *p;
    f32 *q1;
    f32 *q2;

    for (i = 0; i < 9; i++) {
        buf[i] = D_00C9A620[i];
    }
    t = *(f32 *)((u8 *)*arg0 + 0xE0);
    if (t < 0) t = -t;
    if (!(t < 13465.0f)) {
        t = *(f32 *)((u8 *)*arg0 + 0xE8);
        if (t < 0) t = -t;
        if (t <= 963.0f) {
            func_00270530(*arg0, a);
            h = func_009A70B0(func_00270500(*arg0), a[0], a[2]);
            p = (u8 *)buf;
            q1 = &b[1];
            q2 = &b[2];
            for (i = 0; i < 9; i++) {
                func_00A08ED0(*arg0, *p, b);
                func_009A7000(h, b[0], *q1, *q2);
                p++;
            }
        }
    }
}
