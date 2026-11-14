/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_001F1F10(void);
extern void func_001F13D0(void *, s32);
extern void func_001F1390(void *);
extern int func_001CDAA0(void);
extern f32 func_001D79A0(void *, u16);
extern void *func_001F1490(void *);
extern void func_001F3C80(void *, f32);
extern s32 func_001F3D10(void *, u8);
extern void func_001F3D80(void *, f32 *, s32);
extern void func_00C8E5C0(void *, void *);
extern void func_00C8EFA0(void *);
extern char D_00CCD570[];
extern char D_00CCD6FC[];
extern void *D_00CCD888[];
extern void *D_00CCD89C[];

void func_00C8E460(void) {
    f32 v[4];
    s32 a;
    s32 b;
    void *o;
    void *c;

    if (D_00CCD888[0] == NULL) {
        v[0] = -256.0f;
        if (func_001CDAA0() == 0) a = 0x1C0; else a = 0x200;
        a = -a;
        v[1] = (f32)(a / 2);
        v[2] = 512.0f;
        if (func_001CDAA0() == 0) b = 0x1C0; else b = 0x200;
        v[3] = (f32)b;
        o = func_001F1F10();
        D_00CCD888[0] = o;
        func_001F3D80(o, v, 0);
        func_001F3D10(o, 1);
        c = func_001F1490(o);
        func_001F13D0(c, 0x30003);
        func_001F3C80(c, func_001D79A0(D_00CCD89C[0], 0));
        func_00C8EFA0(o);
        func_00C8E5C0(D_00CCD570, o);
        func_00C8E5C0(D_00CCD6FC, o);
        c = func_001F1490(o);
        func_001F1390(c);
        func_001F3C80(c, func_001D79A0(D_00CCD89C[0], 1));
    }
}
