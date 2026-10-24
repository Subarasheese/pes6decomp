/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/12A948.c, func_0012F918.
 * See config/cross_project_matches.json for per-image address mappings. */
/* libpad: set the actuator alignment (scePadSetActAlign-style); 2.9-ee-991111 */
typedef struct { u8 pad0[4]; s32 x4; s32 x8; u8 act[6]; } B_12F918;
typedef struct { u8 pad0[4]; B_12F918 *x4; u8 pad8[0x1C - 8]; } P_12F918;

extern void func_00194978(s32, s32, u8 *);
extern s32 func_001945C0(s32, s32);
extern P_12F918 D_011FD510[][4];

s32 func_001951B8(s32 port, s32 slot, u8 *data) {
    u8 info[0x80];
    B_12F918 *buf;
    s32 i;

    func_00194978(port, slot, info);
    if (info[0x72] != 1) {
        return 0;
    }
    buf = D_011FD510[port][slot].x4;
    for (i = 0; i < 6; i++) {
        buf->act[i] = data[i];
    }
    buf->x4 = 1;
    buf->x8 = 6;
    if (func_001945C0(port, slot) != 1) {
        return 0;
    }
    return 1;
}
