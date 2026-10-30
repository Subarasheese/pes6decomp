/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00326070(void *);
extern char D_003E2E20[];
extern char D_003E2EC0[];

s32 func_00334AC0(void *arg0, s32 arg1, void *arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    void *temp_s0;
    void *temp_s1;

    temp_v1 = arg1 * 0x10;
    temp_s1 = ((void *)D_003E2E20) + temp_v1;
    temp_s0 = ((void *)D_003E2EC0) + temp_v1;
    if (func_00326070(arg2) == 0) {
        M2C_FIELD(arg0, s32 *, 0x108) = -1;
        M2C_FIELD(arg0, s32 *, 0x118) = 0;
        M2C_FIELD(arg0, s32 *, 0x10C) = -1;
        M2C_FIELD(arg0, s32 *, 0x11C) = 0;
        M2C_FIELD(arg0, s32 *, 0x110) = -1;
        M2C_FIELD(arg0, s32 *, 0x120) = 0;
        M2C_FIELD(arg0, s32 *, 0x114) = -1;
        M2C_FIELD(arg0, s32 *, 0x124) = 0;
    } else {
        temp_a0 = M2C_FIELD(temp_s1, s32 *, 0);
        temp_v1_2 = M2C_FIELD(temp_s1, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x108) = temp_a0;
        temp_a1 = M2C_FIELD(temp_s1, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0x118) = (s32) (M2C_FIELD(temp_s0, s32 *, 0) - temp_a0);
        M2C_FIELD(arg0, s32 *, 0x10C) = temp_v1_2;
        M2C_FIELD(arg0, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_s0, s32 *, 4) - temp_v1_2);
        temp_v1_3 = M2C_FIELD(temp_s1, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0x110) = temp_a1;
        M2C_FIELD(arg0, s32 *, 0x120) = (s32) (M2C_FIELD(temp_s0, s32 *, 8) - temp_a1);
        M2C_FIELD(arg0, s32 *, 0x114) = temp_v1_3;
        M2C_FIELD(arg0, s32 *, 0x124) = (s32) (M2C_FIELD(temp_s0, s32 *, 0xC) - temp_v1_3);
    }
    return 1;
}
