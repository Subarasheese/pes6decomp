/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/m2c.h"

extern void func_00BA28B0(void *, s32);
extern s32 func_00BA2928(void *);

void func_00BA3208(s32 arg0) {
    func_00BA28B0((void *)arg0, func_00BA2928(M2C_FIELD(arg0, void **, 0x24)));
    M2C_FIELD(arg0, s32 *, 0x18) = (s32)M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x18);
}
