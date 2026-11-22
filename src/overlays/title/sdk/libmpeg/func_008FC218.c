/* compiler: ee-gcc-2.9-G0 */
/* MPEG decoder source adapted from OpenRAC/rac-deadlocked-decomp, src/core/00142610.c.
 * See THIRD_PARTY.md for provenance and terms. */
/* C adapted from rac3-decomp func_001360D0 (NTSC-U func_001360D0, commit 403f30a9) */
#include "types.h"

typedef struct {
    u8 pad0[0xEC];
    u32 fEC;
    u8 padF0[4];
    int fF4;
    int fF8;
    u8 padFC[0x184 - 0xFC];
    int f184;
} Type1;
typedef struct {
    u32 f0;
    u8 pad4[0xC - 4];
    int fC;
    int f10;
} Type2;
int DIntr(void);
int EIntr(void);

void func_008FC218(Type1 *s, Type2 *in) {
    u32 src;
    u32 dst;
    int n;
    int q;
    int var1;
    int cnt;
    u32 var2;
    int i;
    int j;
    int di;
    u32 a;
    u32 b;

    src = in->f0 & 0x0FFFFFFF;
    var2 = s->fEC & 0x0FFFFFFF;
    if (s->f184 == 3 || s->fF4 == 0) {
        n = in->f10 * 0x180;
        q = n >> 4;
        if (s->fF4) {
            var1 = (s->fF4 >> 4) * 0x180;
        } else {
            var1 = n;
        }
        cnt = 1;
    } else {
        var1 = (s->fF4 >> 4) * 0xC0;
        n = (in->f10 >> 1) * 0x180;
        q = n >> 4;
        cnt = 2;
    }
    for (i = 0; i < cnt; i++) {
        dst = var2;
        for (j = 0; j < in->fC; j++) {
            di = DIntr();
            *(volatile u32 *)0x1000D480 = 0;
            *(volatile u32 *)0x1000D410 = src;
            *(volatile u32 *)0x1000D420 = q;
            *(volatile u32 *)0x1000D400 = 0x101;
            if (di) {
                EIntr();
            }
            a = src + n;
            b = dst + var1;
            while (*(volatile u32 *)0x1000D400 & 0x100) {
            }
            di = DIntr();
            *(volatile u32 *)0x1000D080 = 0;
            *(volatile u32 *)0x1000D010 = dst;
            *(volatile u32 *)0x1000D020 = q;
            *(volatile u32 *)0x1000D000 = 0x100;
            if (di) {
                EIntr();
            }
            while (*(volatile u32 *)0x1000D000 & 0x100) {
            }
            while (*(volatile u32 *)0x1000D020) {
            }
            dst = b;
            src = a;
        }
        var2 += s->fF8 * 0xC0;
    }
}
