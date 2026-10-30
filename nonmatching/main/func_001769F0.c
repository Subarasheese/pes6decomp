/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00176460(void *, int);
extern char D_003CC170[];
extern char D_003CC1A0[];
extern char D_003CC220[];
extern char D_003CC230[];

void func_001769F0(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_UNK (*temp_v0)(s32, M2C_UNK, void *);
    s32 temp_a0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    if (arg0 == NULL) {
        func_00176460(((void *)D_003CC220), (s32) ((void *)D_003CC170));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_00176460(((void *)D_003CC230), (s32) ((void *)D_003CC1A0));
        return;
    }
    if (arg1 == 0) {
        M2C_FIELD(arg3, s32 *, 0) = 0;
        M2C_FIELD(arg3, s32 *, 4) = 0;
        return;
    }
    if (arg1 != 1) {
        temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK, void *), 0x1C);
        M2C_FIELD(arg3, s32 *, 0) = 0;
        M2C_FIELD(arg3, s32 *, 4) = 0;
        if (temp_v0 != NULL) {
            temp_v0(M2C_FIELD(arg0, s32 *, 0x20), -3, arg0);
        }
        return;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_v0_3 = (temp_v0_2 >= arg2) ? arg2 : temp_v0_2;
    M2C_FIELD(arg3, s32 *, 4) = temp_v0_3;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_a0 + temp_v0_3);
    M2C_FIELD(arg3, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + temp_a0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg3, s32 *, 4));
}
