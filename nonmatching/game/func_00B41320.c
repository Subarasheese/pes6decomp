/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CB5408[];
extern char D_00CB5411[];
void func_00B2A420(s32);
void func_00B41DC0(s32);
s32 func_00B42790(s32, s32, s32, s32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);


void func_00B41320(s32 a0) {
    char *p;
    s32 t;
    u16 r;
    s32 base;
    u8 *q;
    u8 *obj;
    f32 lim;
    f32 x;

    base = *(s32 *)a0;
    func_00B2A420(*(u8 *)(base + *(u8 *)(base + 0x13) * 11 + 0x1B4));
    func_00B41DC0(a0);
    t = *(u8 *)(*(s32 *)(a0 + 4) + 0x4E);
    if (t == 0 || t == 0x20 || t == 0x30 || t == 0x38 || t == 0x78 || t == 4 || t == 0x24 ||
        t == 0x34 || t == 0x3C || t == 0x7C || t == 6 || t == 0x26 || t == 0x36 || t == 0x3E ||
        t == 0x7E || t == 7 || t == 0x27 || t == 0x37 || t == 0x3F || t == 0x7F) {
        if (*(u8 *)(*(s32 *)a0 + 0x13) != 0) {
            p = D_00CB5408;
        } else {
            p = D_00CB5411;
        }
    }
    r = func_00B42790(a0, (s32)p, 8, 2);
    obj = *(u8 **)a0;
    *(f32 *)(obj + 0x6C) = *(f32 *)(obj + 0xE0) + (f32)func_00BBB990(r, 0x100);
    obj = *(u8 **)a0;
    *(f32 *)(obj + 0x70) = *(f32 *)(obj + 0xE8) + (f32)func_00BBB9C0(r, 0x100);
    x = *(f32 *)(*(s32 *)a0 + 0xE0);
    if ((x < 0 ? -x : x) < 6732.0f) {
        *(u8 *)(*(s32 *)(a0 + 4) + 0x4F) = 0;
    }
}
