/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_002211F0();                              /* extern */
M2C_UNK func_002464C0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0026E190(u8);                          /* extern */
s32 func_00835730();                                /* extern */
s32 func_00835BA0(s32, M2C_UNK);                    /* extern */
s32 func_008375D0();                                /* extern */
s32 func_008376E0();                                /* extern */
s32 func_00837880();                                /* extern */
s32 func_00837940();                                /* extern */
s32 func_00837DA0(s32);                             /* extern */
void *func_00838B10();                              /* extern */
M2C_UNK func_00931190(M2C_UNK);                     /* extern */
s32 func_00953C90(s32, M2C_UNK);                    /* extern */
extern char D_008A5F70[];

s32 func_00930120(void) {
    s32 temp_v0;
    s8 var_v1;
    void *temp_s0;
    void *temp_v0_2;

    temp_s0 = func_00838B10();
    if ((func_008375D0() == 1) && (((void *)D_008A5F70) != NULL)) {
        if (func_00953C90(M2C_FIELD(((void *)D_008A5F70), s32 *, 0x524), 0x20) != 0) {
            var_v1 = 1;
        } else {
            if (func_00837880() != 0) {
                goto block_11;
            }
            if (func_00837940() == 0) {
                var_v1 = 1;
            } else {
                goto block_11;
            }
        }
    } else {
block_11:
        var_v1 = 0;
    }
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s8 *, 0x2B5) = var_v1;
    }
    if (var_v1 == 1) {
        temp_v0 = func_00837DA0(func_008376E0());
        if (func_00835BA0(temp_v0, 0) != 1) {
            func_002464C0(0xC1, 0);
        } else {
            func_002464C0(0xC1, 1);
        }
        if (func_00835BA0(temp_v0, 1) != 1) {
            func_002464C0(0xC2, 0);
        } else {
            func_002464C0(0xC2, 1);
        }
        if (func_00835BA0(temp_v0, 2) != 1) {
            func_002464C0(0xC3, 0);
        } else {
            func_002464C0(0xC3, 1);
        }
        if (func_00835BA0(temp_v0, 3) != 1) {
            func_002464C0(0xC8, 0);
        } else {
            func_002464C0(0xC8, 1);
        }
        if (func_00835BA0(temp_v0, 4) != 1) {
            func_002464C0(0xC9, 0);
        } else {
            func_002464C0(0xC9, 1);
        }
        if (func_00835BA0(temp_v0, 5) != 1) {
            func_002464C0(0xCA, 0);
        } else {
            func_002464C0(0xCA, 1);
        }
        if (func_00835BA0(temp_v0, 6) != 1) {
            func_002464C0(0xCB, 0);
        } else {
            func_002464C0(0xCB, 1);
        }
        if (func_00835BA0(temp_v0, 7) != 1) {
            func_002464C0(0xCC, 0);
        } else {
            func_002464C0(0xCC, 1);
        }
        if (func_00835BA0(temp_v0, 8) != 1) {
            func_002464C0(0xCD, 0);
        } else {
            func_002464C0(0xCD, 1);
        }
        if (func_00835BA0(temp_v0, 9) != 1) {
            func_002464C0(0xCE, 0);
        } else {
            func_002464C0(0xCE, 1);
        }
    } else if (func_008375D0() != 1) {
        func_002464C0(0xC1, 1);
        func_002464C0(0xC2, 1);
        func_002464C0(0xC3, 1);
        func_002464C0(0xC8, 1);
        func_002464C0(0xC9, 1);
        func_002464C0(0xCA, 1);
        func_002464C0(0xCB, 1);
        func_002464C0(0xCC, 1);
        func_002464C0(0xCD, 1);
        func_002464C0(0xCE, 1);
        func_00931190(1);
    } else {
        func_002464C0(0xC1, 0);
        func_002464C0(0xC2, 0);
        func_002464C0(0xC3, 0);
        func_002464C0(0xC8, 0);
        func_002464C0(0xC9, 0);
        func_002464C0(0xCA, 0);
        func_002464C0(0xCB, 0);
        func_002464C0(0xCC, 0);
        func_002464C0(0xCD, 0);
        func_002464C0(0xCE, 0);
        func_00931190(0);
    }
    if (func_008375D0() == 1) {
        func_00931190(0);
    } else {
        func_00931190(1);
        if (func_00835730() == 0) {
            temp_v0_2 = func_002211F0();
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0_2, s8 *, 1) = 0;
                M2C_FIELD(temp_v0_2, u8 *, 2) = 0U;
                func_0026E190(M2C_FIELD(temp_v0_2, u8 *, 2));
            }
        }
    }
    return 1;
}
