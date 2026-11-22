/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_001C48E8(void *, int, unsigned int);

void func_008744A0(s8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    func_001C48E8((s32 *) (arg0 + 0x40), 0, 0x400);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x454) = 0;
    M2C_FIELD(arg0, s16 *, 0x458) = 1;
}
