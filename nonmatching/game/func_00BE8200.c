/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u32 func_009B33A0(s32, s32, s32);
s32 func_009B3480(s32, f32, f32);
void func_00B83FF0(s32, s32, f32 *, f32, f32, f32, f32, f32);
void func_00BE83E0(s32, s32, f32, f32, f32, f32);
s32 func_00BF6270(void);
extern char D_00CBCC70[];
extern char D_00CBCD8C[];
extern char D_00CBCD8E[];

void func_00BE8200(f32 *out, s32 a1, s32 a2, s32 a3, f32 fa, f32 fb) {
    f32 v[4];
    u8 *p;
    s32 i;
    s32 s7;
    u32 best;
    u32 r;
    u8 s1;

    if (func_00BF6270() != 0xFF) {
        func_00BF6270();
    }
    s7 = ((((func_009B3480(a1, fa, fb) & 0xFFFF) - (a2 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001;
    p = (u8 *)D_00CBCC70;
    for (i = 0; i < a3; i++, p += 4) {
        f32 t = *(f32 *)(p + 0x60);
        s1 = s7;
        if (t < 0.0f) {
            s1 = (s7 == 0);
        }
        func_00B83FF0(a2, s1, &v[0], fa, fb, t, *(f32 *)(p + 0x80), 80.0f);
        r = func_009B33A0(a1, (s32)v[0], (s32)v[1]);
        if (i != 0 && r >= best) {
        } else {
            best = r;
            *(u8 *)D_00CBCD8C = i;
            *(u8 *)D_00CBCD8E = s1;
            v[2] = v[0];
            v[3] = v[1];
        }
    }
    func_00BE83E0(a1, 0, fa, fb, v[2], v[3]);
    out[0] = v[2];
    out[1] = v[3];
}
