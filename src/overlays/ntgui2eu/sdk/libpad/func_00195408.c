/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/12A948.c, func_0012FB68.
 * See config/cross_project_matches.json for per-image address mappings. */
/* libpad: pad RPC command 10 for a port/slot, then follow-up when it answers 1; 2.9-ee-991111 */
typedef struct { s32 x0; s32 x4; s32 x8; s32 xC; s32 x10; } Q_12FB68;

extern s32 func_0019EE30();
extern void func_00194C50(s32, s32, s32);
extern Q_12FB68 D_011FD700;
extern u8 D_011FD4C0[];

s32 func_00195408(s32 port, s32 slot, s32 arg) {
    D_011FD700.x0 = 10;
    D_011FD700.x4 = port;
    D_011FD700.x8 = slot;
    D_011FD700.xC = arg;
    if (func_0019EE30(D_011FD4C0, 1, 0, &D_011FD700, 0x80, &D_011FD700, 0x80, 0, 0) < 0) {
        return 0;
    }
    if (D_011FD700.x10 == 1) {
        func_00194C50(port, slot, 2);
    }
    return D_011FD700.x10;
}
