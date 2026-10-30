/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00163470(int);
extern int func_001633E8(int);
M2C_UNK func_001632D0(s32);                         /* extern */

s32 func_0015CCE0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x30) = arg3;
    M2C_FIELD(arg0, s32 *, 0x40) = arg4;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    func_001632D0(M2C_FIELD(arg0, s32 *, 4));
    if (func_00163470(M2C_FIELD(arg0, s32 *, 4)) == 4) {
        func_001633E8(M2C_FIELD(arg0, s32 *, 4));
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg4 << 0xB);
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    return 0;
}
