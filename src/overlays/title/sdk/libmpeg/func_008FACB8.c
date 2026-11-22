/* compiler: ee-gcc-2.9-G0 */
/* MPEG decoder source adapted from OpenRAC/rac-deadlocked-decomp, src/core/00141388.c.
 * See THIRD_PARTY.md for provenance and terms. */
/* C adapted from rac3-decomp func_00134E48 (NTSC-U func_00134E48, commit 403f30a9) */
#include "types.h"

extern s32 func_008F86F8();
u32 func_008FACB8(void *s) {
    func_008F86F8(s, 1);
    func_008F86F8(s, 8);
    func_008F86F8(s, 1);
    func_008F86F8(s, 7);
    func_008F86F8(s, 1);
    func_008F86F8(s, 0x14);
    func_008F86F8(s, 1);
    func_008F86F8(s, 0x16);
    func_008F86F8(s, 1);
    return func_008F86F8(s, 0x16);
}
