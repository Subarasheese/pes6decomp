/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00591BE4[];
extern char D_00CB52A0[];

s32 func_00C23330(void *arg0) {
    u8 *p;
    s32 i;
    u8 *slot;

    i = 0;
    p = (u8 *)D_00CB52A0;
    for (;;) {
        if (*(s32 *)(p + 0x6BC) == 0) {
            slot = (u8 *)D_00CB52A0 + (i << 6) + 0x6BC;
            break;
        }
        i += 1;
        p += 0x40;
        if (i >= 0x16) {
            slot = NULL;
            break;
        }
    }
    if (slot == NULL) {
        return 0;
    }
    *(u8 *)(slot + 0x10) = *(u8 *)arg0;
    *(s32 *)(slot + 0) = 8;
    *(s32 *)(slot + 8) = *(u8 *)D_00591BE4 * 2;
    *(s16 *)(slot + 0xC) = (s16)(s32)*(f32 *)((u8 *)arg0 + 0xE0);
    *(s16 *)(slot + 0xE) = (s16)(s32)*(f32 *)((u8 *)arg0 + 0xE8);
    *(u8 *)(slot + 0x11) = 1;
    return 1;
}
