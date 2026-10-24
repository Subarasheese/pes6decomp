/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/12A948.c, func_0012F2A0.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct {
    u8 data[0x58];
    s32 frame;
    u8 pad5C[0x80 - 0x5C];
} Pd_12F2A0;

typedef struct {
    Pd_12F2A0 *area;
    u8 pad4[0x1C - 4];
} St_12F2A0;

extern St_12F2A0 D_011FD510[2][4];
extern s32 func_001A4728(void);
extern s32 func_001A4778(void);
extern void func_0019BBD8(void *, void *);

Pd_12F2A0 *func_00194978(s32 port, s32 slot, Pd_12F2A0 *out)
{
    s32 r;
    Pd_12F2A0 *pd;
    s32 i;

    r = func_001A4728();
    pd = D_011FD510[port][slot].area;
    func_0019BBD8(pd, (u8 *)pd + 0xFF);
    i = pd[0].frame < pd[1].frame;
    if (out != 0) {
        *out = pd[i];
    }
    if (r == 1) {
        func_001A4778();
    }
    return &pd[i];
}
