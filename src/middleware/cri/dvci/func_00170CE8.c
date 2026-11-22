/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/sa20_a.c (func_0040BA28). See THIRD_PARTY.md. */
#include "types.h"
typedef unsigned long long u64;
typedef signed long long s64;
typedef struct {
    u8 p0[2];
    s8 b2;
    u8 p3[5];
    u64 f8;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2c;
} IO;
extern u8 D_003CAC00[];
extern u8 D_003CAC18[];
extern u8 D_003CAC38[];
extern s32 D_00387810;
extern void func_00170400(IO *, u8 *);
extern s32 func_00170430(IO *);
extern s32 func_0016C690(void);
extern void func_001704E8(IO *, s32);
extern s32 func_0016C8A8(s32, s32, s64, s64, s32);
extern void func_0016D248(void);
extern void func_0016D138(void);
extern void func_0016C718(s32);

s32 func_00170CE8(IO *o, s32 n, s32 m) {
    s32 r;
    s32 k;
    s32 rem;
    u64 sz;
    if (o == 0) {
        func_00170400(o, D_003CAC00);
        return 0;
    }
    if (n < 0) {
        func_00170400(o, D_003CAC18);
        return 0;
    }
    if (m == 0) {
        func_00170400(o, D_003CAC38);
        return 0;
    }
    if (func_00170430(o) == 1)
        return 0;
    if (o->b2 == 2)
        return 0;
    if (n == 0) {
        o->b2 = 1;
        return 0;
    }
    r = func_0016C690();
    o->f2c = r;
    if (r == 0)
        return 0;
    rem = o->f10 - o->f1c;
    o->f20 = m;
    k = (n < rem) ? (n) : (rem);
    o->f24 = k;
    sz = (u64)(n << 11);
    if (o->f8 < sz)
        sz = o->f8;
    func_001704E8(o, k);
    if (func_0016C8A8(o->f2c, o->f18, o->f1c, sz, m) == 0)
        return 0;
    if (D_00387810 == 1) {
        func_0016D248();
        func_0016D138();
        o->f1c = o->f1c + o->f24;
        func_0016C718(o->f2c);
        o->f2c = 0;
        o->b2 = 1;
        o->f28 = o->f24;
    } else {
        o->b2 = 2;
        o->f28 = 0;
    }
    o->f14 = 0;
    return o->f24;
}
