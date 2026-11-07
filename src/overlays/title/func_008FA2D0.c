/* compiler: ee-gcc-2.9 */
#include "types.h"

typedef struct {
    u8 pad0[0x160];
    u32 x160;
    s32 x164;
    s32 x168;
    s32 x16C;
    s32 x170;
    u8 pad174[0x1BC - 0x174];
    s32 x1BC;
    u8 pad1C0[0x85C - 0x1C0];
    s32 x85C;
    s32 x860;
    s32 x864;
} S;

extern s32 func_008F86F8(S *, s32);
extern void func_008FA868(S *);
extern void func_008FAA70(S *, s32);

void func_008FA2D0(S *p) {
    s32 s1;
    s32 a1, a0, v1, v0, t;

    s1 = func_008F86F8(p, 0xA);
    p->x160 = func_008F86F8(p, 3);
    func_008F86F8(p, 0x10);
    if (p->x160 - 2 < 2) {
        p->x164 = func_008F86F8(p, 1);
        p->x168 = func_008F86F8(p, 3);
    }
    if (p->x160 == 3) {
        p->x16C = func_008F86F8(p, 1);
        p->x170 = func_008F86F8(p, 3);
    }
    while (func_008F86F8(p, 1) != 0) {
        func_008FAA70(p, 8);
    }
    func_008FA868(p);
    a1 = 0;
    a0 = 0;
    if (p->x160 != 3 && s1 != 0) {
        if (s1 < 0) {
            a1 = p->x864 == 0;
        }
        p->x864 = 0;
        a0 = s1;
    }
    v1 = p->x85C + s1;
    p->x1BC = v1;
    if (a1 != 0 && a0 >= s1) {
        p->x1BC = v1 + 0x400;
    }
    v0 = p->x860;
    t = p->x1BC;
    if (v0 < t) v0 = t;
    p->x860 = v0;
}
