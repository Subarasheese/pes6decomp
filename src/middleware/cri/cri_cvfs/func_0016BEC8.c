/* compiler: ee-gcc-2.96-nsa-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/u0_c.c (func_004076B0). See THIRD_PARTY.md. */
#include "types.h"
typedef struct {
    u8 pad[0x60];
    s32 (*fn)(void *, s32, s32, s32);
} T;
extern char D_003C9C70[];
extern char D_003C9C98[];
extern char D_003C9CC8[];
extern s32 func_0016A8B0(s32);
extern void *func_001C48E8(void *, s32, u32);
extern void func_0016A550(const char *);

s32 func_0016BEC8(s32 a, s32 b) {
    s32 v[5];
    T *t;
    if (a == 0) {
        func_0016A550(D_003C9C70);
        return -1;
    }
    if (b == 0) {
        func_0016A550(D_003C9C98);
        return -1;
    }
    t = (T *)func_0016A8B0(a);
    if (t == 0) {
        func_0016A550(D_003C9CC8);
        return -1;
    }
    func_001C48E8(v, 0, 0x14);
    v[0] = b;
    if (t->fn != 0)
        return t->fn(v, 1, 0, 0);
    return -1;
}
