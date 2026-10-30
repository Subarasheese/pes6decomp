/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00172E10(void *, void *);
extern char D_003CB508[];

void func_001734F8(void *arg0, s32 arg1) {
    s32 temp_a0;

    if (arg0 == NULL) {
        func_00172E10(arg0, ((void *)D_003CB508));
        return;
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((s32) ((M2C_FIELD(arg0, s32 *, 8) + arg1) - 1) / arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x10) * temp_a0) / arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) * arg1);
}
