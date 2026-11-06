/* compiler: ee-gcc-2.9 */
#include "types.h"

typedef struct {
    u8 pad0[0x134];
    u32 x134;
    u32 x138;
    u8 pad13C[0x144 - 0x13C];
    u32 x144;
    u32 x148;
    u32 x14C;
    u32 x150;
    u8 pad154[0x858 - 0x154];
    s32 x858;
} S;

extern u32 func_008F86F8(S *, s32);
extern void func_00900500(S *, char *);
extern char D_00901E50[];
extern char D_00901E78[];

void func_008FA418(S *p) {
    u32 v, w, c, e;
    u32 a, b, d;

    p->x858 = 1;
    *(u32 *)0x10002010 &= 0xFF7FFFFF;
    v = func_008F86F8(p, 0x1C);
    d = (v >> 1) & 0xFFF;
    c = (v >> 17) & 3;
    b = (v >> 13) & 3;
    a = (v >> 15) & 3;
    p->x150 = c;
    if (c != 1) {
        func_00900500(p, D_00901E50);
    }
    p->x14C = (v >> 19) & 1;
    e = v >> 20;
    w = func_008F86F8(p, 0x10) >> 8;
    if (e != 0x48 && e != 0x58 && e != 0x44) {
        func_00900500(p, D_00901E78);
    }
    p->x134 = (a << 12) | (p->x134 & 0xFFF);
    p->x138 = (b << 12) | (p->x138 & 0xFFF);
    p->x144 += d << 18;
    p->x148 += w << 10;
}
