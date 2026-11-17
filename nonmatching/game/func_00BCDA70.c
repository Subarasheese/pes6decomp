/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char *D_003E758C;
extern char D_00CBAA02[];
extern char D_00CBAA04[];

u16 func_00BCDA70(void) {
    s32 hi;
    s32 i;
    u32 prev, pt, ct;
    u16 res;

    res = *(u16 *)D_00CBAA04;
    hi = *(u16 *)D_00CBAA02;
    if (hi < (s32)res) {
        for (i = res; i < 0x12C; i++) {
            prev = (i == 0) ? 0x12B : i - 1;
            pt = *(u8 *)(D_003E758C + prev * 0x354 + 0x34E);
            ct = *(u8 *)(D_003E758C + i * 0x354 + 0x34E);
            if ((pt == 4 || pt == 0xD) && !(ct == 4 || ct == 0xD)) res = i;
        }
        i = 0;
        do {
            prev = (i == 0) ? 0x12B : i - 1;
            pt = *(u8 *)(D_003E758C + prev * 0x354 + 0x34E);
            ct = *(u8 *)(D_003E758C + i * 0x354 + 0x34E);
            if ((pt == 4 || pt == 0xD) && !(ct == 4 || ct == 0xD)) res = i;
            i++;
        } while (hi >= i);
    } else {
        i = res;
        do {
            prev = (i == 0) ? 0x12B : i - 1;
            pt = *(u8 *)(D_003E758C + prev * 0x354 + 0x34E);
            ct = *(u8 *)(D_003E758C + i * 0x354 + 0x34E);
            if ((pt == 4 || pt == 0xD) && !(ct == 4 || ct == 0xD)) res = i;
            i++;
        } while (hi >= i);
    }
    return res;
}
