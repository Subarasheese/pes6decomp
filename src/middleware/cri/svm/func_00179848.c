/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/nq60_c.c (func_00411438). See THIRD_PARTY.md. */
#include "types.h"
extern long long __moddi3(long long, long long);
extern long long __divdi3(long long, long long);
extern u32 func_001C80F0(u8 *);
extern u8 D_00510D00[];

void func_00179848(long long n, u8 *buf, long size) {
    long i;
    long len;
    u8 *q;
    u8 *p;
    for (i = 0; i < 32; i++) {
        p = buf + i;
        *p = __moddi3(n, 10);
        n = __divdi3(n, 10);
        if (n == 0) {
            *p = 0;
            break;
        }
    }
    q = D_00510D00;
    i = 0;
    len = func_001C80F0(q);
    if (len >= size - 1)
        len = size - 1;
    for (; i < len; i++) {
        buf[i] = D_00510D00[len - 1 - i];
    }
    buf[i] = 0;
}
