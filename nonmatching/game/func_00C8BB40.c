/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001C78F8(void *, void *, s32);
extern u8 *func_001DBD70(s32, s32, s32, void *);
extern void func_00C89360(s32, void *, f32, f32);
extern void func_00C897C0(s32, s32);
extern char D_00CA88D0[];
extern char D_00CB4F88[];
extern char D_00CCD4C0[];

void func_00C8BB40(s32 arg0, s32 arg1) {
    u8 buf[24];
    s32 args[2];
    s32 i;
    s32 n;
    s32 id;
    u8 *e;
    u8 *r;
    u32 h;
    f32 v;

    args[0] = arg0;
    args[1] = arg1;
    for (i = 0; i < 2; i++) {
        e = (u8 *)D_00CA88D0 + (i + 3) * 0x14;
        id = *(s16 *)(e + 0x12);
        n = args[i];
        if (n < 0) {
            n = 0;
        }
        if (n >= 0x64) {
            n = 0x63;
        }
        func_001C78F8(buf, D_00CB4F88, n);
        r = func_001DBD70(0x17, 0, 0, buf);
        h = *(u16 *)(r + 0x14);
        v = (f32)h;
        func_00C89360(id, r, *(f32 *)e - v, *(f32 *)(e + 4));
        func_00C897C0(id, 1);
        *(u8 **)(D_00CCD4C0 + i * 4 + 0x14) = r;
    }
}
