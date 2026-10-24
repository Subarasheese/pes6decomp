/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/12A948.c, func_0012F9E0.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct {
    s32 cmd;
    s32 port;
    s32 slot;
    u8 data[8];
    s32 result;
    u8 pad18[0x80 - 0x18];
} Rb_12F9E0;

extern Rb_12F9E0 D_011FD700;
extern u8 D_011FD4C0[];
extern s32 func_0019EE30();
extern s32 func_00194C50(s32, s32, s32);

s32 func_00195280(s32 port, s32 slot, u8 *data)
{
    s32 i;
    Rb_12F9E0 *b = &D_011FD700;

    b->cmd = 8;
    b->port = port;
    b->slot = slot;
    for (i = 0; i < 6; i++) {
        b->data[i] = data[i];
    }
    if (func_0019EE30(D_011FD4C0, 1, 0, b, 0x80, b, 0x80, 0, 0) < 0) {
        return 0;
    }
    if (b->result == 1) {
        func_00194C50(port, slot, 2);
    }
    return b->result;
}
