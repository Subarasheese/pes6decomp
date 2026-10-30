/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00179788(void *);
extern char D_003CC740[];
extern char D_003CC7C0[];
extern char D_003CC7E8[];
extern char D_003CC810[];
extern char D_00510D20[];

void func_00179C90(u32 arg0, u32 arg1, s32 arg2, s32 arg3, M2C_UNK *arg4) {
    void *temp_s0;

    if (arg1 >= 6U) {
        func_00179788(((void *)D_003CC7C0));
        return;
    }
    if (arg0 >= 8U) {
        func_00179788(((void *)D_003CC7E8));
        return;
    }
    temp_s0 = ((void *)D_00510D20) + ((arg0 * 0x48) + (arg1 * 0xC));
    if (M2C_FIELD(temp_s0, s32 *, 0) != 0) {
        func_00179788(((void *)D_003CC810));
    }
    M2C_FIELD(temp_s0, s32 *, 0) = arg2;
    M2C_FIELD(temp_s0, s32 *, 4) = arg3;
    if (arg4 != NULL) {
        M2C_FIELD(temp_s0, M2C_UNK **, 8) = arg4;
        return;
    }
    M2C_FIELD(temp_s0, M2C_UNK **, 8) = ((void *)D_003CC740);
}
