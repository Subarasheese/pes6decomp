/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/nq60_c.c (func_00411438). See THIRD_PARTY.md. */
#include "types.h"
extern long long func_0011DDB0(long long, long long);
extern long long func_0011D718(long long, long long);
extern u32 func_001C80F0(u8 *);
extern u8 D_00510D00[];

void func_00179848(long long n, u8 *buf, long size) {
    long i;
    long len;
    u8 *q;
    u8 *p;
    for (i = 0; i < 32; i++) {
        p = buf + i;
        *p = func_0011DDB0(n, 10);
        n = func_0011D718(n, 10);
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
