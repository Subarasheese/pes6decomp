/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002DF8E0(s32, s32);
extern void *D_003EAD1C;

void func_009B4060(s32 arg0) {
    if (M2C_FIELD(D_003EAD1C, s32 *, 0x1AC) != 0) {
        func_002DF8E0(M2C_FIELD(D_003EAD1C, s32 *, 0x190), arg0 & 0xFF);
        return;
    }
    func_002DF8E0(M2C_FIELD(D_003EAD1C, s32 *, 0x190), 0);
}
