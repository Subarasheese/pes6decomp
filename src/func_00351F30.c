/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 *D_0061C708[];
extern s32 D_0061C710[];
extern u8 *D_0061C70C[];

void func_00351F30(s32 a) {
    u8 *base = D_0061C708[0];
    s32 n;
    if (base) {
        n = D_0061C710[0];
        if (a >= n) a = 0;
        a = a < n ? a : 0;
        D_0061C70C[0] = base + a * 8;
        return;
    }
    D_0061C70C[0] = 0;
}
