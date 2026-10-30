/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00170400(void *, void *);
extern char D_003CAC00[];

s32 func_00170C18(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    if (arg0 == NULL) {
        func_00170400(arg0, ((void *)D_003CAC00));
        return 0;
    }
    switch (arg2) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + arg1);
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + arg1);
        break;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    temp_v0_3 = (temp_v0_2 >= M2C_FIELD(arg0, s32 *, 0x10)) ? M2C_FIELD(arg0, s32 *, 0x10) : temp_v0_2;
    temp_v0 = (temp_v0_3 < 0) ? 0 : temp_v0_3;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0;
    return temp_v0;
}
