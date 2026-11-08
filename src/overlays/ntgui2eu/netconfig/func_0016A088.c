/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void *func_00134FE8(s32);

void *func_0016A088(s32 arg0, s32 arg1, s64 arg2) {
    void *p;

    p = func_00134FE8(0x20);
    if (p == NULL) {
        return NULL;
    }
    M2C_FIELD(p, s32 *, 0) = arg0;
    M2C_FIELD(p, s32 *, 0x10) = arg1;
    M2C_FIELD(p, s64 *, 8) = arg2;
    return p;
}
