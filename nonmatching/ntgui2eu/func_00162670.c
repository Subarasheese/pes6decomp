/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00165778(void *);
void func_00162670(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x890) = 1;
    M2C_FIELD(arg0, s32 *, 0x88C) = 1;
    M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x878) = 0;
    M2C_FIELD(arg0, s32 *, 0x880) = 0;
    M2C_FIELD(arg0, s32 *, 0x884) = 0;
    M2C_FIELD(arg0, s32 *, 0x888) = 0;
    M2C_FIELD(arg0, s32 *, 0x870) = 0;
    func_00165778(arg0);
}
