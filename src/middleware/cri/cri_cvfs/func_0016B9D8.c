/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/u0_c.c (func_004071C0). See THIRD_PARTY.md. */
#include "types.h"
extern s32 func_0016A8B0(s32);
typedef struct {
    u8 pad[0x48];
    s32 (*fn)(s32, s32, s32);
} T48;
extern char D_003C9950[];
extern void func_0016AE20(char *, char *, s32);
extern void func_0016AF68(char *);
extern void func_0016C338(char *, char *);
extern void func_0016A550(const char *);

s32 func_0016B9D8(s32 a, s32 b, s32 c) {
    char buf[0x130];
    char buf2[0x130];
    s32 r;
    T48 *t;
    func_0016AE20(buf, buf2, a);
    r = 0;
    if (buf[0] == 0) {
        func_0016AF68(buf);
        if (buf[0] == 0) {
            func_0016A550(D_003C9950);
            return 0;
        }
    }
    func_0016C338(buf, buf2);
    if ((t = (T48 *)func_0016A8B0((s32)buf)) != 0) {
        if (t->fn != 0)
            r = t->fn(a, b, c);
    }
    return r;
}
