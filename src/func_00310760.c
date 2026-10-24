/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00591EF8[];
extern u8 D_00591AE2[][139];

s32 func_00310760(u8 *out, s32 slot, s32 team) {
    u8 base = D_00591EF8[team];

    *out = D_00591AE2[team][(base + slot) * 8 + 1];
    return 1;
}
