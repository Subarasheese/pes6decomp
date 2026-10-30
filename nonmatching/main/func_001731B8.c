/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00172E10(void *, void *);
extern void func_00172DE0(void);
extern void func_00172DC8(void);
extern char D_003CB430[];

s32 func_001731B8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 == NULL) {
        func_00172E10(arg0, ((void *)D_003CB430));
        return 0;
    }
    func_00172DC8();
    switch (arg2) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x10) = arg1;
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + arg1);
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + arg1);
        break;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_v0_2 = (temp_v0 >= M2C_FIELD(arg0, s32 *, 0xC)) ? M2C_FIELD(arg0, s32 *, 0xC) : temp_v0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) ((temp_v0_2 < 0) ? 0 : temp_v0_2);
    func_00172DE0();
    return M2C_FIELD(arg0, s32 *, 0x10);
}
