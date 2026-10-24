/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/1301D8.c, func_00132888.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct {
    u8 pad0[0x12C];
    s32 x12C;           /* 0x12C */
    u8 pad130[0x828 - 0x130];
    s32 x828;           /* 0x828 */
    s32 x82C;           /* 0x82C */
    u8 pad830[0x848 - 0x830];
    s32 x848;           /* 0x848 */
    s32 x84C;           /* 0x84C */
    u8 pad850[0x858 - 0x850];
    s32 x858;           /* 0x858 */
} S_132428;
extern void func_008F8908(S_132428 *);
extern long func_008F8578(S_132428 *);
/* libmpeg: get n bits through IPU FDEC; 2.9-ee-991111 */
static __inline__ void cmd_132888(S_132428 *p, u32 cmd) {
    *(volatile u32 *)0x10002000 = cmd;
    p->x82C = cmd & 0xF0000000;
    if (p->x82C == 0x20000000 || p->x82C == 0x30000000 || p->x82C == 0x40000000) {
        p->x828 = 0;
    } else {
        p->x828 = 1;
    }
}

u32 func_008F86F8(S_132428 *p, s32 n) {
    u32 r;

    func_008F8908(p);
    if (p->x828 != 0 || p->x84C < n) {
        cmd_132888(p, 0x40000000);
        p->x848 = func_008F8578(p);
    }
    r = (u32)p->x848 >> (0x20 - n);
    p->x84C = 0x20;
    cmd_132888(p, n | 0x40000000);
    p->x848 = func_008F8578(p);
    return r;
}
