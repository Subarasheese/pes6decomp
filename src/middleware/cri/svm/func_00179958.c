/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/k3.c (func_00411548). See THIRD_PARTY.md. */
#include "types.h"
typedef long long s64;
extern void func_00179848(s64, char *, long);
extern s32 func_001C80F0(char *);
extern void func_001C8228(char *, char *, s32);
extern char D_003CC710[];

void func_00179958(s64 a, s64 b, char *c, long d) {
    char *e;
    func_00179848(a, c, d);
    func_001C8228(c, D_003CC710, (((s32)d) - func_001C80F0(c)) - 1);
    e = c + func_001C80F0(c);
    func_00179848(b, e, (u32)(4 - func_001C80F0(c)));
}
