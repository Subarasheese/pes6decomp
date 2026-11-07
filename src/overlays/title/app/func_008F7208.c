/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/1301D8.c, func_00131398.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct {
    u8 pad0[0x13C];
    int f13C;
    int f140;
    u8 pad144[0x184 - 0x144];
    int f184;
    u8 pad188[0x820 - 0x188];
    int f820;
    int f824;
    u8 pad828[0x848 - 0x828];
    int f848;
    int f84C;
    u8 pad850[0x868 - 0x850];
    int f868;
    u8 pad86C[0x878 - 0x86C];
    int f878;
} S_131398;
extern char D_00901D20[];
int func_008F7448(void *s, int n);
void func_008F8908(void *s);
int func_008FBE28(int x);
void func_00900398(void);
void func_00900438(void *s);
void func_008F6FE8(void *s, int first);
extern s32 func_00900500();

static inline int sync_131398(S_131398 *s)
{
    int ok;
    u32 bp;
    long top;
    u32 t;
    int k;

    ok = 1;
    func_008F8908(s);
    func_008F8908(s);
    while (*(volatile u32 *)0x1000B020 != 0 && !(*(volatile u32 *)0x10002010 & 0x4000)) {
        if (*(volatile u32 *)0x1000B420 == 0 && !(*(volatile u32 *)0x1000B400 & 0x100)) {
            func_008FBE28(s->f868);
        }
        if (s->f878) {
            func_00900398();
            return 0;
        }
    }
    bp = *(volatile u32 *)0x10002020;
    top = *(volatile long *)0x10002030;
    s->f848 = top;
    if (top < 0) {
        t = bp & 0x1F;
        if (t) {
            k = 0x20 - t;
        } else {
            k = 0;
        }
    } else {
        k = 0x20;
    }
    s->f84C = k;
    if (*(volatile u32 *)0x10002010 & 0x4000) {
        func_00900438(s);
        ok = 0;
    }
    return ok;
}

int func_008F7208(S_131398 *s)
{
    int n;
    int r;

    s->f820 = 0;
    s->f824 = 0;
    n = s->f13C * s->f140;
    if (s->f184 != 3) {
        n >>= 1;
    }
    do {
        r = func_008F7448(s, n);
    } while (r == 1 || r == 3);
    if (!sync_131398(s)) {
        if (s->f878) {
            return 4;
        }
        r = 2;
    }
    while ((*(volatile u32 *)0x1000D400 >> 8) & 1) {
    }
    if (r == 0) {
        func_008F6FE8(s, s->f820 == 0);
    }
    if ((u32)(r - 1) < 2) {
        func_00900500(s, D_00901D20);
    }
    return r == 0;
}
