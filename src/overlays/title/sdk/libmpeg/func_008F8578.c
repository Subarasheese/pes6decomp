/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/1301D8.c, func_00132708.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct {
    u8 pad0[0x82C];
    s32 f82C;
    u8 pad830[0x868 - 0x830];
    s32 f868;
    u8 pad86C[0x878 - 0x86C];
    s32 f878;
} S_132708;

extern s32 func_008FBE28(s32);
extern void func_00900398(void);

long func_008F8578(S_132708 *p)
{
    long r;
    s32 n;
    u32 bp;
    s32 m;
    u32 avail;

    n = 0;
    while ((r = *(volatile long *)0x10002000) < 0 && !(*(volatile u32 *)0x10002010 & 0x4000)) {
        bp = *(volatile u32 *)0x10002020;
        m = p->f82C;
        avail = ((bp & 0xFF00) >> 1) + ((bp & 0x30000) >> 9) - (bp & 0x7F);
        if ((m == 0x20000000 || m == 0x30000000 || m == 0x40000000) && avail < 0x20
            && *(volatile u32 *)0x1000B420 == 0) {
            func_008FBE28(p->f868);
            if (p->f878 != 0) {
                func_00900398();
                break;
            }
            n = 0;
        }
        if (n++ >= 0x1F5) {
            func_008FBE28(p->f868);
            if (p->f878 != 0) {
                func_00900398();
                break;
            }
            n = 0;
        }
    }
    p->f82C = 0;
    return r;
}
