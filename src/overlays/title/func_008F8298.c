/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/1301D8.c, func_00132428.
 * See config/cross_project_matches.json for per-image address mappings. */
/* libmpeg: macroblock_address_increment through IPU VDEC; 2.9-ee-991111 */
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
extern s32 func_008F87E0(S_132428 *, s32);
extern void func_008F8940(S_132428 *, s32);
extern void func_00900558(S_132428 *, char *, s32);
extern char D_00901DB0[];

s32 func_008F8298(S_132428 *p) {
    s32 total = 0;
    s32 again;

    do {
        long r;
        u32 code;
        s32 c;
        func_008F8908(p);
        {
            u32 cmd = 0x30000000;
            *(volatile u32 *)0x10002000 = cmd;
            p->x82C = cmd;
            p->x828 = 0;
        }
        r = func_008F8578(p);
        {
            s32 bp = *(volatile s32 *)0x10002020;
            long top = *(volatile long *)0x10002030;
            p->x848 = top;
            if (top < 0) {
                p->x84C = (0x20 - (bp & 0x1F)) & 0x1F;
            } else {
                p->x84C = 0x20;
            }
        }
        p->x12C = (s32)r == 0;
        code = (s16)r;
        switch (code) {
        case 0x22:
            again = 1;
            break;
        case 0x23:
            again = 1;
            total += 0x21;
            break;
        case 0:
            c = func_008F87E0(p, 0xB);
            if (p->x858 != 0 && c == 0xF) {
                func_008F8940(p, 0xB);
                again = 1;
                break;
            }
            func_00900558(p, D_00901DB0, code);
            p->x12C = 1;
            return 1;
        default:
            total += code;
            again = 0;
            break;
        }
    } while (again);
    return total;
}
