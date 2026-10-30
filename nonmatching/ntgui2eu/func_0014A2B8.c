/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001236B8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00165AE0(s32);                         /* extern */
extern char D_005B58F0[];
extern char D_005B58F8[];
extern char D_011DFB88[];
extern char D_011DFEC0[];

void func_0014A2B8(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    void *temp_v0;
    void *temp_v0_2;

    if ((*(s32 *)D_005B58F0) != 0) {
        func_001236B8((*(s32 *)D_005B58F0), 0, 0);
    }
    if ((*(s32 *)D_005B58F8) != 0) {
        func_001236B8((*(s32 *)D_005B58F8), 0, 0);
    }
    if ((*(s32 *)D_011DFEC0) != 0) {
        if (M2C_FIELD(((void *)D_011DFB88), s32 *, 0) != 0) {
            func_001236B8(M2C_FIELD(((void *)D_011DFB88), s32 *, 0), 1, 0x40);
        }
    } else if (M2C_FIELD(((void *)D_011DFB88), s32 *, -0x478) != 0) {
        func_001236B8(M2C_FIELD(((void *)D_011DFB88), s32 *, -0x478), 0, 0x40);
    }
    if (*(s32 *)0x5B3704 & 2) {
        temp_a0 = M2C_FIELD((((void *)D_011DFB88) - 0x478), s32 *, 4);
        if (temp_a0 != 0) {
            func_00165AE0(temp_a0);
        }
    } else {
        temp_v0 = ((void *)D_011DFB88) - 0x478;
        if (M2C_FIELD((((void *)D_011DFEC0) - 0x140), s32 *, 4) != 0) {
            temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 4);
            if (temp_a0_2 != 0) {
                func_001236B8(temp_a0_2, 1, 0x40);
            }
        } else {
            temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 4);
            if (temp_a0_3 != 0) {
                func_001236B8(temp_a0_3, 0, 0x40);
            }
        }
    }
    if (*(s32 *)0x5B3704 & 4) {
        temp_a0_4 = M2C_FIELD((((void *)D_011DFB88) - 0x478), s32 *, 8);
        if (temp_a0_4 != 0) {
            func_00165AE0(temp_a0_4);
        }
    } else {
        temp_v0_2 = ((void *)D_011DFB88) - 0x478;
        if (M2C_FIELD((((void *)D_011DFEC0) - 0x140), s32 *, 8) != 0) {
            temp_a0_5 = M2C_FIELD(temp_v0_2, s32 *, 8);
            if (temp_a0_5 != 0) {
                func_001236B8(temp_a0_5, 1, 0x40);
            }
        } else {
            temp_a0_6 = M2C_FIELD(temp_v0_2, s32 *, 8);
            if (temp_a0_6 != 0) {
                func_001236B8(temp_a0_6, 0, 0x40);
            }
        }
    }
}
