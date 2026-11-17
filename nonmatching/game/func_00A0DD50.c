/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u8 D_00591E4F[];
extern u8 D_00591F16[];
extern u8 D_00591F17[];

s32 func_00A0DD50(u8 *arg0) {
    s32 i;
    u8 v;

    v = arg0[0];
    i = arg0[0x13] * 2;
    if (v == D_00591E4F[i]) {
        return 1;
    }
    if (v == D_00591F16[i] || v == D_00591F17[i]) {
        return 1;
    }
    return 0;
}
