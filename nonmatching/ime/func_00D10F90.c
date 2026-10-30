/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D6E70(s32, s32, s32);
extern void func_001D7960(void *, s8);
extern void func_001D7F10(void *);
M2C_UNK func_0081D7E0(s32, s8);                     /* extern */
s32 func_0081D850(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0081D930(s32);                         /* extern */
M2C_UNK func_0081D9D0(s32, s8 *);                   /* extern */
M2C_UNK func_00D10B00(void *);                      /* extern */
M2C_UNK func_00D10C10(void *, s32);                 /* extern */
extern char D_00D1FFC8[];

s32 func_00D10F90(void *arg0, s32 arg1) {
    s8 sp38;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_v0;
    s8 *var_v1;
    s8 temp_v1;

    var_v0 = 8;
    var_v1 = &sp38;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if (arg0 == NULL) {
        return 1;
    }
    if (arg1 != 0) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {
            temp_v1 = M2C_FIELD(arg0, s8 *, 0xC);
            if (temp_v1 == M2C_FIELD(arg0, s8 *, 0xD)) {
                if ((temp_v1 == 1) && (M2C_FIELD(arg0, s32 *, 0x20) == 0) && (M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
                    temp_v0 = func_0081D850(M2C_FIELD(arg0, s32 *, 0x1C), 0, 2, 0, 1);
                    M2C_FIELD(arg0, s32 *, 0x20) = temp_v0;
                    if (temp_v0 != 0) {
                        M2C_FIELD(arg0, s32 *, 0x24) = func_001D6E70(temp_v0, 0, (s32) ((void *)D_00D1FFC8));
                        M2C_FIELD(arg0, s32 *, 0x28) = func_001D6E70(M2C_FIELD(arg0, s32 *, 0x20), 1, (s32) ((void *)D_00D1FFC8));
                        M2C_FIELD(arg0, s32 *, 0x2C) = func_001D6E70(M2C_FIELD(arg0, s32 *, 0x20), 2, (s32) ((void *)D_00D1FFC8));
                        func_001D7960((void *) M2C_FIELD(arg0, s32 *, 0x20), 3);
                        func_0081D9D0(M2C_FIELD(arg0, s32 *, 0x28), &sp38);
                        func_0081D9D0(M2C_FIELD(arg0, s32 *, 0x2C), &sp38);
                        func_0081D930(M2C_FIELD(arg0, s32 *, 0x28));
                        func_0081D930(M2C_FIELD(arg0, s32 *, 0x2C));
                        M2C_FIELD(arg0, s8 *, 0x3D) = 1;
                        M2C_FIELD(arg0, s8 *, 0x3E) = 1;
                        M2C_FIELD(arg0, s32 *, 0x18) = 0;
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x24) = 0;
                        M2C_FIELD(arg0, s32 *, 0x28) = 0;
                        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                    }
                } else if (temp_v1 == 0) {
                    temp_a0 = M2C_FIELD(arg0, s32 *, 0x20);
                    if (temp_a0 != 0) {
                        if (arg0 != NULL) {
                            if (temp_a0 != 0) {
                                func_001D7F10((void *) temp_a0);
                                M2C_FIELD(arg0, s32 *, 0x20) = 0;
                            }
                            M2C_FIELD(arg0, s32 *, 0x24) = 0;
                            M2C_FIELD(arg0, s32 *, 0x28) = 0;
                            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                            M2C_FIELD(arg0, s8 *, 0x3D) = 1;
                            M2C_FIELD(arg0, s8 *, 0x3E) = 1;
                        }
                        M2C_FIELD(arg0, s8 *, 0x3D) = 0;
                        M2C_FIELD(arg0, s8 *, 0x3E) = 0;
                    }
                }
            } else {
                if ((temp_v1 == 1) && (M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
                    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
                        temp_v0_2 = func_0081D850(M2C_FIELD(arg0, s32 *, 0x1C), 0, 2, 0, 1);
                        M2C_FIELD(arg0, s32 *, 0x20) = temp_v0_2;
                        if (temp_v0_2 != 0) {
                            M2C_FIELD(arg0, s32 *, 0x24) = func_001D6E70(temp_v0_2, 0, (s32) ((void *)D_00D1FFC8));
                            M2C_FIELD(arg0, s32 *, 0x28) = func_001D6E70(M2C_FIELD(arg0, s32 *, 0x20), 1, (s32) ((void *)D_00D1FFC8));
                            M2C_FIELD(arg0, s32 *, 0x2C) = func_001D6E70(M2C_FIELD(arg0, s32 *, 0x20), 2, (s32) ((void *)D_00D1FFC8));
                            func_0081D9D0(M2C_FIELD(arg0, s32 *, 0x28), &sp38);
                            func_0081D9D0(M2C_FIELD(arg0, s32 *, 0x2C), &sp38);
                            func_0081D930(M2C_FIELD(arg0, s32 *, 0x28));
                            func_0081D930(M2C_FIELD(arg0, s32 *, 0x2C));
                            M2C_FIELD(arg0, s8 *, 0x3D) = 1;
                            M2C_FIELD(arg0, s8 *, 0x3E) = 1;
                            M2C_FIELD(arg0, s32 *, 0x18) = 0;
                        } else {
                            M2C_FIELD(arg0, s32 *, 0x24) = 0;
                            M2C_FIELD(arg0, s32 *, 0x28) = 0;
                            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                        }
                    }
                } else {
                    if (arg0 != NULL) {
                        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x20);
                        if (temp_a0_2 != 0) {
                            func_001D7F10((void *) temp_a0_2);
                            M2C_FIELD(arg0, s32 *, 0x20) = 0;
                        }
                        M2C_FIELD(arg0, s32 *, 0x24) = 0;
                        M2C_FIELD(arg0, s32 *, 0x28) = 0;
                        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                        M2C_FIELD(arg0, s8 *, 0x3D) = 1;
                        M2C_FIELD(arg0, s8 *, 0x3E) = 1;
                    }
                    M2C_FIELD(arg0, s8 *, 0x3D) = 0;
                    M2C_FIELD(arg0, s8 *, 0x3E) = 0;
                }
                func_0081D7E0(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s8 *, 0xC));
                M2C_FIELD(arg0, s8 *, 0xD) = (s8) M2C_FIELD(arg0, s8 *, 0xC);
            }
            if ((M2C_FIELD(arg0, s32 *, 0x20) != 0) && (M2C_FIELD(arg0, s32 *, 0x24) != 0) && (M2C_FIELD(arg0, s32 *, 0x28) != 0) && (M2C_FIELD(arg0, s32 *, 0x2C) != 0)) {
                if (M2C_FIELD(arg0, s8 *, 0x3D) == 1) {
                    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x18);
                    if ((M2C_FIELD(arg0, s32 *, 0x14) != temp_v1_2) || (temp_v1_2 == 0)) {
                        func_00D10C10(arg0, arg1);
                        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
                    }
                    M2C_FIELD(arg0, s8 *, 0x3D) = 0;
                }
                if (M2C_FIELD(arg0, s8 *, 0x3E) == 1) {
                    func_00D10B00(arg0);
                    M2C_FIELD(arg0, s8 *, 0x3E) = 0;
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 4);
        return 0;
    }
    return 1;
}
