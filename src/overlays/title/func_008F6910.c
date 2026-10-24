/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/1301D8.c, func_00130AA0.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct {
    int f0;
    u8 pad4[0x10 - 4];
    int f10;
} Pic_130AA0;
typedef struct {
    int f0;
    int pad4;
    int f8;
    int fC;
    int f10;
    u8 pad14[0x140 - 0x14];
} Blk_130AA0;
typedef struct {
    u8 pad0[0x12C];
    int f12C;
    u8 pad130[0x13C - 0x130];
    int f13C;
    u8 pad140[0x184 - 0x140];
    int f184;
    u8 pad188[0x1D0 - 0x188];
    Pic_130AA0 *f1D0;
    u8 pad1D4[0x1E0 - 0x1D4];
    Pic_130AA0 *f1E0;
    u8 pad1E4[0x1F0 - 0x1E4];
    Pic_130AA0 *f1F0;
    u8 pad1F4[0x6C8 - 0x1F4];
    Blk_130AA0 blk[1];
    u8 pad808[0x820 - 0x808];
    int f820;
} S_130AA0;
extern char D_00901CE0[];
void func_00900558(void *s, char *fmt, int x);
void func_008F6208(S_130AA0 *s, int x, int y, int flags, int mode, int *mv, int *fs, int a7);
void func_008F8BB8();

int func_008F6910(S_130AA0 *s, int addr, int type, int flags, int mode, int *mv, int *fs, int a7)
{
    int intra;
    int mbx;
    int mby;
    Pic_130AA0 *p;
    int px;
    int py;

    intra = flags & 1;
    mby = addr / s->f13C;
    mbx = addr % s->f13C;
    px = mbx << 4;
    py = mby << 4;
    if (intra) {
        while ((*(volatile u32 *)0x1000D400 >> 8) & 1) {
        }
        s->blk[s->f820].f10 = 0;
    } else {
        if ((u32)(mode - 1) >= 3) {
            func_00900558(s, D_00901CE0, mode);
            s->f12C = 1;
            return 0;
        }
        func_008F6208(s, px, py, flags, mode, mv, fs, a7);
        while ((*(volatile u32 *)0x1000D400 >> 8) & 1) {
        }
        func_008F8BB8(s);
        s->blk[s->f820].f10 = 1;
    }
    if (type == 1 && (flags & 2)) {
        s->blk[s->f820].fC = type;
    } else {
        s->blk[s->f820].fC = 0;
    }
    s->blk[s->f820].f8 = intra;
    if (s->f184 == 3) {
        s->blk[s->f820].f0 = s->f1D0->f0 + (mbx * s->f1D0->f10 + mby) * 0x180;
    } else {
        if (s->f184 == 2) {
            p = s->f1F0;
        } else {
            p = s->f1E0;
        }
        s->blk[s->f820].f0 = p->f0 + (mbx * p->f10 + mby) * 0x180;
    }
    return 1;
}
