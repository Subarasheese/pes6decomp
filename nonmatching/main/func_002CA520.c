/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058E7F0[];

void func_002CA520(void) {
    u8 *p;
    s32 n;
    s32 k;

    n = 0;
    p = (u8 *)D_0058E7F0;
    do {
        n += 7;
        for (k = 0; k < 7; k++) {
            M2C_FIELD(*M2C_FIELD(p, u8 ***, 4 + k * 0x240), u8 *, 0x209) = 0;
            M2C_FIELD(*M2C_FIELD(p, u8 ***, 4 + k * 0x240), u8 *, 0x20B) = 0;
            M2C_FIELD(p, u8 *, 0x234 + k * 0x240) = 0;
        }
        p += 0xFC0;
    } while (n < 0xF);
    M2C_FIELD(*M2C_FIELD(p, u8 ***, 4), u8 *, 0x209) = 0;
    M2C_FIELD(*M2C_FIELD(p, u8 ***, 4), u8 *, 0x20B) = 0;
    M2C_FIELD(p, u8 *, 0x234) = 0;
}
