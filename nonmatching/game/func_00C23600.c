/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00591BE4[];
extern char D_00CB52A0[];

s32 func_00C23600(u8 *arg0) {
    u8 *p;
    u8 *slot;
    s32 i;

    slot = NULL;
    p = (u8 *)D_00CB52A0;
    for (i = 0; i < 0x16; i++) {
        if (*(s32 *)(p + 0x6BC) == 0) {
            slot = p + 0x6BC;
            break;
        }
        p += 0x40;
    }
    if (slot == NULL) {
        return 0;
    }
    slot[0x10] = arg0[0];
    *(s32 *)slot = 4;
    *(s32 *)(slot + 8) = *(u8 *)D_00591BE4 * 10;
    *(s16 *)(slot + 0xC) = (s16)(s32)*(f32 *)(arg0 + 0xE0);
    *(s16 *)(slot + 0xE) = (s16)(s32)*(f32 *)(arg0 + 0xE8);
    return 1;
}
