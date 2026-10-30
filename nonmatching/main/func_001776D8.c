/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00176E78(void *, int);
extern char D_003CC2D0[];
extern char D_003CC300[];
extern char D_003CC370[];
extern char D_003CC3A8[];
extern char D_003CC3B8[];
extern char D_003CC3C8[];

void func_001776D8(void *arg0, s32 arg1, void *arg2) {
    M2C_UNK (*temp_v0)(s32, M2C_UNK, s32, s32, s32);
    M2C_UNK (*temp_v0_2)(s32, M2C_UNK, s32, s32, s32);
    M2C_UNK (*temp_v0_3)(s32, M2C_UNK, s32, s32, s32);
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_hi;
    s32 temp_hi_2;

    if (arg0 == NULL) {
        func_00176E78(((void *)D_003CC3A8), (s32) ((void *)D_003CC2D0));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        temp_a2 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_a2 != 0) {
            temp_a3 = M2C_FIELD(arg2, s32 *, 4);
            if ((temp_a3 > 0) && (temp_a4 = M2C_FIELD(arg2, s32 *, 0), (temp_a4 != 0))) {
                if (arg1 == 0) {
                    temp_hi = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) + temp_a2) - temp_a3) % temp_a2;
                    if (temp_hi != ((s32) (temp_a4 - M2C_FIELD(arg0, s32 *, 0x1C)) % temp_a2)) {
                        temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK, s32, s32, s32), 0x38);
                        if (temp_v0 != NULL) {
                            temp_v0(M2C_FIELD(arg0, s32 *, 0x3C), -3, temp_a2, temp_a3, temp_a4);
                        }
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x14) = temp_hi;
                        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + M2C_FIELD(arg2, s32 *, 4));
                    }
                    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(arg2, s32 *, 4));
                    return;
                }
                if (arg1 != 1) {
                    temp_v0_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK, s32, s32, s32), 0x38);
                    M2C_FIELD(arg2, s32 *, 0) = 0;
                    M2C_FIELD(arg2, s32 *, 4) = 0;
                    if (temp_v0_2 != NULL) {
                        temp_v0_2(M2C_FIELD(arg0, s32 *, 0x3C), -3, temp_a2, temp_a3, temp_a4);
                    }
                } else {
                    temp_hi_2 = (s32) ((M2C_FIELD(arg0, s32 *, 0x18) + temp_a2) - temp_a3) % temp_a2;
                    if (temp_hi_2 != ((s32) (temp_a4 - M2C_FIELD(arg0, s32 *, 0x1C)) % temp_a2)) {
                        temp_v0_3 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK, s32, s32, s32), 0x38);
                        if (temp_v0_3 != NULL) {
                            temp_v0_3(M2C_FIELD(arg0, s32 *, 0x3C), -3, temp_a2, temp_a3, temp_a4);
                        }
                    } else {
                        M2C_FIELD(arg0, s32 *, 0x18) = temp_hi_2;
                        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + M2C_FIELD(arg2, s32 *, 4));
                    }
                    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(arg2, s32 *, 4));
                }
            }
        } else {
            func_00176E78(((void *)D_003CC3C8), (s32) ((void *)D_003CC370));
        }
    } else {
        func_00176E78(((void *)D_003CC3B8), (s32) ((void *)D_003CC300));
    }
}
