/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF4F0(void *, s8);
s32 func_009EB040(void *, void *);                  /* extern */
M2C_UNK func_009EED30(void *, s32);                 /* extern */
M2C_UNK func_009EF120(void *, s32);                 /* extern */
M2C_UNK func_009EFA20(void *, s32);                 /* extern */
M2C_UNK func_009EFC90(void *, M2C_UNK);             /* extern */
M2C_UNK func_009EFD90(void *, void *, s32);         /* extern */
M2C_UNK func_009EFF90(void *);                      /* extern */
s32 func_009F00B0(void *, void *);                  /* extern */
M2C_UNK func_009F0420(void *, s32, s32);            /* extern */
s32 func_009F05D0(void *, void *, void *);          /* extern */
M2C_UNK func_009F06D0(void **, s32, s32, s32, s32); /* extern */

void func_009EA220(void *arg0) {
    void **temp_v0;
    void *temp_a0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_v0_2;

    if (M2C_FIELD(arg0, s32 *, 0x38) == 0) {
        temp_s1 = arg0 + 0x3C;
        if (func_009F05D0(M2C_FIELD(arg0, void **, 0x2C), temp_s1 + 0x14, temp_s1 + 0x18) == 1) {
            func_009F0420(temp_s1, M2C_FIELD(temp_s1, s32 *, 0x14), M2C_FIELD(temp_s1, s32 *, 0x18));
        }
    } else {
        temp_s1_2 = M2C_FIELD(arg0, void **, 0x2C);
        temp_s2 = arg0 + 0x3C;
        if (func_009EB040(temp_s2, temp_s1_2) == 1) {
            func_009F06D0(M2C_FIELD(temp_s2, void ***, 4), *M2C_FIELD(arg0, s32 **, 0x3C), M2C_FIELD(temp_s2, s32 *, 8), M2C_FIELD(temp_s2, s32 *, 0xC), M2C_FIELD(temp_s2, s32 *, 0x10));
            if (M2C_FIELD(temp_s1_2, s32 *, 0x3C) <= 0) {
                temp_v0 = M2C_FIELD(temp_s2, void ***, 4);
                if (temp_v0 != NULL) {
                    temp_v0_2 = *temp_v0;
                    if (temp_v0_2 != NULL) {
                        temp_a0 = M2C_FIELD(temp_v0_2, void **, 0xC);
                        if (temp_a0 != NULL) {
                            func_001DF4F0(temp_a0, 0);
                        }
                    }
                }
            }
        }
    }
    temp_s1_3 = M2C_FIELD(arg0, void **, 0x2C);
    temp_s2_2 = arg0 + 0x60;
    if (func_009F00B0(temp_s2_2, temp_s1_3) == 1) {
        func_009EFF90(temp_s2_2);
    }
    func_009EFD90(temp_s2_2, temp_s1_3, M2C_FIELD(arg0, s32 *, 0x30));
    func_009EFC90(arg0 + 0x84, 0);
    func_009EFA20(arg0 + 0xA8, M2C_FIELD(arg0, s32 *, 0x30));
    func_009EF120(arg0 + 0xEC, M2C_FIELD(arg0, s32 *, 0x30));
    func_009EED30(arg0 + 0x1AC, M2C_FIELD(arg0, s32 *, 0x34));
}
