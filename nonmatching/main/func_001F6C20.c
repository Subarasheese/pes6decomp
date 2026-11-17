/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003994F0[], D_003994F4[], D_003994F8[];
extern char D_00399510[], D_00399514[];
extern char D_00399500[], D_00399504[], D_00399508[];
void func_001EF370(void *a, void *b);
void func_001EEF60(void *a, void *b);
void func_001EE5D0(void *a, void *b);
void func_001EF860(void *a, void *b);
void func_001F6E90(void *a, void *b, s32 c);
s32 func_001F77E0(s32 a, s32 b);
void func_001EEAC0(void *a, s32 b);
void func_001EE890(void *a, void *b);

typedef s32 (*Fn1)(void *, void *, s32, s32);
typedef s32 (*Fn2)(void *, void *, s32);
typedef f32 (*Fn3)(void *, s32);

void *func_001F6C20(char *a0, void *a1, s32 a2, s32 a3) {
    void *p1;
    void *p2;
    f32 t1[3];
    f32 t2[2];
    f32 t3[3];
    f32 lB0[4];
    f32 lA0[4];
    f32 l90[4];
    f32 l60[12];
    f32 f20;
    s32 v;

    if (a0 == 0 || a1 == 0) return 0;
    t1[0] = *(f32 *)D_003994F0;
    t1[1] = *(f32 *)D_003994F4;
    t1[2] = *(f32 *)D_003994F8;
    p1 = lA0;
    if (a0 == 0 || p1 == 0) v = 0;
    else v = ((Fn1)((u32 *)t1)[a3])(a0, &p1, a2, a3);
    if (v == 0) return a1;
    t2[0] = *(f32 *)D_00399510;
    t2[1] = *(f32 *)D_00399514;
    p2 = l90;
    if (a0 != 0 && p2 != 0) ((Fn2)((u32 *)t2)[a3])(a0, &p2, a2);
    t3[0] = *(f32 *)D_00399500;
    t3[1] = *(f32 *)D_00399504;
    t3[2] = *(f32 *)D_00399508;
    if (a0 == 0) f20 = 0.0f;
    else f20 = ((Fn3)((u32 *)t3)[a3])(a0, a2);
    func_001EF370(a1, lA0);
    func_001EEF60(a1, l90);
    func_001EE5D0(a1, lB0);
    lB0[2] = f20;
    func_001EF860(a1, lB0);
    if (a3 != 0) return a1;
    {
        s32 idx = 0;
        char *q;
        func_001F6E90(a0, l60, a2);
        if (a0 != 0) {
            q = *(char **)(a0 + 0x14);
            if ((s32)(a2 & 0xFFFF) < *(u8 *)q)
                idx = *(u8 *)(*(char **)(q + 4) + (a2 & 0xFFFF) * 46 + 1);
        }
        v = func_001F77E0(*(s32 *)(a0 + 0x18), idx);
        if (v != 0) func_001EEAC0(a1, v);
        func_001EE890(a1, l60);
    }
    return a1;
}
