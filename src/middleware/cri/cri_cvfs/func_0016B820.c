/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/ra19_c.c (func_00407008). See THIRD_PARTY.md. */
#include "types.h"
/* EE GCC 2.96: ./tryee.sh src/ra19_c.c sn */
typedef struct {
    u8 pad[0x40];
    s32 (*fn)(s8 *);
} R_c;
extern char D_003C9928[], D_003C9978[], D_003C99A0[];
extern void func_0016AE20(u8 *, s8 *, void *);
extern R_c *func_0016ABD8(u8 *, s8 *, void *);
extern void func_0016A550(char *);

s32 func_0016B820(void *a) {
    u8 buf1[0x130];
    s8 buf2[0x130];
    R_c *r;
    func_0016AE20(buf1, buf2, a);
    if (buf2[0] == 0) {
        func_0016A550(D_003C9928);
        return 0;
    }
    r = func_0016ABD8(buf1, buf2, a);
    if (r == 0)
        func_0016A550(D_003C9978);
    if (r->fn != 0)
        return r->fn(buf2);
    func_0016A550(D_003C99A0);
    return 0;
}
