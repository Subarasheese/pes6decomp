/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9D48;

void func_001C4730(void *dst, void *src, s32 n);
void *func_002BD240(void);
s32 func_00C18E60(void *);
s32 func_00C186A0(s32);
s32 func_00C17C50(s32);
s32 func_00C16E20(s32);
s32 func_00C15F40(s32);
s32 func_00C183B0(s32);
s32 func_00C13C30(s32);
s32 func_00C14FC0(s32);
s32 func_00C12E50(s32);
s32 func_00C11E50(s32);
s32 func_00C10310(s32);
s32 func_00C219D0(s32);
char *func_00C0EFF0(s32);
char *func_00C54950(char *);

char *func_002BD140(char *p) {
    s32 n;
    char *q;
    char *r;
    s32 *g = &D_003E9D48;

    if (p != 0) {
        n = 0x10;
        func_001C4730(p, &n, 4);
        q = p + 4;
        func_001C4730(q, func_002BD240(), n * 2);
        r = func_00C0EFF0(func_00C219D0(func_00C10310(func_00C11E50(func_00C12E50(func_00C14FC0(func_00C13C30(func_00C183B0(func_00C15F40(func_00C16E20(func_00C17C50(func_00C186A0(func_00C18E60(q + n * 2)))))))))))));
        func_001C4730(r, g, 4);
        p = func_00C54950(r + 4);
    }
    return p;
}
