/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003FBB60[];
extern char D_003FBB70[];
extern char D_003FBB80[];
extern char D_003FBBC0[];
extern char D_0050AD40[];
extern char D_003FB790[];
extern char D_003FB9B0[];
extern char D_003767E0[];
extern char D_003767F0[];
extern char D_003767D0[];
extern char D_00375C70[];
extern char D_00375C80[];

void func_00103C00(void *, void *, void *);
f32 func_00103C20(void *, void *);
void func_00103C48(void *, void *);
void func_00103C88(void *, void *);
void func_00103DA8(void *, void *, void *);
void func_00103E38(void *, void *);
void func_00103E48(void *, void *);
void *func_00129C60(s32, void *, char *, s32);
void func_001C6158(void *, s32, s32, void *);
void func_00133210(void);

void Pes6Lighting_Update(void) {
    f32 n[16];
    f32 m[16];
    f32 a[4];
    f32 b[4];
    char *p[3];
    f32 *g;
    char *e;
    char *s3;
    s32 cnt = 0;
    s32 i;

    *(f32 *)D_003FBB60 = 0;
    func_00103E38(D_003FBB70, D_0050AD40);
    func_00103E48(D_003FBB80, D_0050AD40);
    e = D_003FB790;
    for (i = 0; i < 3; i++) {
        if (*(s32 *)e == 4) {
            p[cnt] = e;
            cnt++;
        }
        e += 0xB0;
    }
    if (cnt == 0) {
        return;
    }
    func_00103E48(n, func_00129C60(4, &p[cnt], e, i));
    func_00103C88(m, n);
    m[11] = 0;
    m[7] = 0;
    func_001C6158(p, cnt, 4, func_00133210);
    s3 = p[0];
    func_00103DA8(a, s3 + 0x40, &m[8]);
    func_00103C48(a, a);
    func_00103DA8(b, s3 + 0x50, D_003767E0);
    func_00103C48(b, b);
    ((f32 *)(D_003FB9B0))[3] = a[0];
    ((f32 *)(D_003FB9B0))[7] = a[1];
    ((f32 *)(D_003FB9B0))[11] = a[2];
    ((f32 *)(D_003FB9B0 + 0x80))[3] = b[0];
    ((f32 *)(D_003FB9B0 + 0x80))[7] = b[1];
    ((f32 *)(D_003FB9B0 + 0x80))[11] = b[2];
    *(f32 *)D_003FBB60 = func_00103C20(s3 + 0x60, D_00375C70);
    if (a[0] == 0.0f && a[1] == 0.0f && a[2] == 0.0f) {
        *(s32 *)&a[0] = 0x3F800000;
    }
    func_00103C00(D_003FBB80, &m[4], a);
    func_00103C00(D_003FBB80 + 0x10, a, D_003FBB80);
    func_00103C48(D_003FBB80, D_003FBB80);
    func_00103C48(D_003FBB80 + 0x10, D_003FBB80 + 0x10);
    func_00103E38(D_003FBB80 + 0x20, a);
    func_00103E38(D_003FBB80 + 0x30, D_003767F0);
    func_00103C88(D_003FBB80, D_003FBB80);
    func_00103E38(D_003FBB80 + 0x30, D_00375C80);
    if (b[0] == 0.0f && b[1] == 0.0f && b[2] == 0.0f) {
        *(s32 *)&b[0] = 0x3F800000;
    }
    func_00103C00(D_003FBBC0, D_003767D0, b);
    func_00103C00(D_003FBBC0 + 0x10, b, D_003FBBC0);
    func_00103C48(D_003FBBC0, D_003FBBC0);
    func_00103C48(D_003FBBC0 + 0x10, D_003FBBC0 + 0x10);
    func_00103E38(D_003FBBC0 + 0x20, b);
    func_00103E38(D_003FBBC0 + 0x30, D_003767F0);
    func_00103C88(D_003FBBC0, D_003FBBC0);
    func_00103E38(D_003FBBC0 + 0x30, D_00375C80);
    func_00103E38(D_003FBB70, s3 + 0x60);
}
