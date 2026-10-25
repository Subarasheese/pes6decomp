/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

#define SLOT(x) ((x) != 0xFF ? (x) % 23 : 1)

extern char D_0058E5B0[];
extern u8 D_0058E7F0[];

void func_002AE6C0(s32 a, s32 b, u8 **out) {
    s32 i;
    u8 *rec;

    *out = NULL;
    for (rec = D_0058E7F0, i = 1; i < 23; i++, rec += 0x240) {
        if (rec[0x12] == a && rec[0x11] == b) {
            *out = (u8 *)D_0058E5B0 + SLOT(rec[0]) * 0x240;
            break;
        }
    }
}
