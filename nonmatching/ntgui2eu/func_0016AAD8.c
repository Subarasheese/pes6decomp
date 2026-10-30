/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00134FE8(M2C_UNK);                       /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
extern char D_005FD440[];

void *func_0016AAD8(s32 arg0, s64 arg1, s32 arg2, s64 arg3, s32 arg4) {
    void *temp_v0;

    temp_v0 = func_00134FE8(0x20);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x1C) = arg0;
        M2C_FIELD(temp_v0, s64 *, 0) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0xC) = arg2;
        M2C_FIELD(temp_v0, s64 *, 0x10) = arg3;
        M2C_FIELD(temp_v0, s32 *, 0x18) = arg4;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        return temp_v0;
    }
    func_0019DBD0(((void *)D_005FD440));
    return NULL;
}
