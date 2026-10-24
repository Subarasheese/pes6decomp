/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/1301D8.c, func_001325A0.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct {
    u8 pad0[0x82C];
    int f82C;
    u8 pad830[0x868 - 0x830];
    int f868;
    u8 pad86C[0x878 - 0x86C];
    int f878;
} S_1325A0;
int func_008FBE28(int x);
void func_00900398(void);

void func_008F8410(S_1325A0 *s)
{
    int cnt;
    u32 bp;
    int mode;
    u32 avail;

    cnt = 0;
    while ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000) {
        bp = *(volatile u32 *)0x10002020;
        mode = s->f82C;
        avail = ((bp & 0xFF00) >> 1) + ((bp & 0x30000) >> 9) - (bp & 0x7F);
        if ((mode == 0x20000000 || mode == 0x30000000 || mode == 0x40000000) && avail < 0x20 &&
            *(volatile u32 *)0x1000B420 == 0) {
            func_008FBE28(s->f868);
            if (s->f878) {
                goto err;
            }
            cnt = 0;
        }
        if (cnt++ > 0x1388) {
            func_008FBE28(s->f868);
            if (s->f878) {
            err:
                func_00900398();
                s->f82C = 0;
                return;
            }
            cnt = 0;
        }
    }
    s->f82C = 0;
}
