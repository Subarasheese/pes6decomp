/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void FlushCache(s32);
extern void *func_001C48E8(void *, int, unsigned int);
extern s32 func_001FCE50(s32, s32, s32, s32);

void func_001FCEE0(s8 *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x14);
    FlushCache(0);
    FlushCache(2);
    if (temp_s0 != 0) {
        func_001C48E8((s32 *) &arg0[arg1], 0, temp_s0);
    }
    func_001FCE50(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C), 0, 0);
}
