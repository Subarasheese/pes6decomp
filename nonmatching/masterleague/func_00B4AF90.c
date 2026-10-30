/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BC2B0();                            /* extern */
M2C_UNK func_001BC350();                            /* extern */
M2C_UNK func_001D4E00(s32);                         /* extern */
M2C_UNK func_001D7F10(s32);                         /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F2ED0(s32);                         /* extern */
s32 func_002F3850(s32);                             /* extern */
M2C_UNK func_002F39A0(s32);                         /* extern */
M2C_UNK func_002F3A00(s32);                         /* extern */
M2C_UNK func_002F4E10(s32);                         /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
extern void *D_003EAE90;

s32 func_00B4AF90(void) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_v0;
    s32 temp_v1;
    u32 temp_a0;
    u32 temp_v1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s1;

    temp_s0 = D_003EAE90;
    if (temp_s0 != NULL) {
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x14C);
        switch (temp_v1) {                          /* irregular */
        case 0:
            temp_a0 = M2C_FIELD(temp_s0, u32 *, 0x130);
            temp_v1_2 = M2C_FIELD(temp_s0, u32 *, 0x124);
            if (temp_a0 >= temp_v1_2) {
                *M2C_FIELD(temp_s0, u32 **, 0x120) = temp_v1_2;
                temp_s0_2 = D_003EAE90;
                if (temp_s0_2 != NULL) {
                    temp_a0_2 = M2C_FIELD(temp_s0_2, s32 *, 0x2C);
                    if ((temp_a0_2 != 0) && (func_002F3850(temp_a0_2) == 2)) {
                        func_002F39A0(M2C_FIELD(temp_s0_2, s32 *, 0x2C));
                    }
                }
                if ((D_003EAE90 != NULL) && (M2C_FIELD(D_003EAE90, s32 *, 0x14C) == 1)) {
                    func_002F2ED0(M2C_FIELD(D_003EAE90, s32 *, 0x2C));
                }
                temp_s0_3 = D_003EAE90;
                if (temp_s0_3 != NULL) {
                    if (temp_s0_3 != NULL) {
                        func_001D7F10(M2C_FIELD(temp_s0_3, s32 *, 0x1C));
                        func_001D7F10(M2C_FIELD(temp_s0_3, s32 *, 0x20));
                        func_001D4E00(M2C_FIELD(temp_s0_3, s32 *, 0));
                        func_002F4E10(M2C_FIELD(temp_s0_3, s32 *, 0x2C));
                    }
                    func_001BC350();
                    func_001BC2B0();
                    func_0096DA00(temp_s0_3);
                    D_003EAE90 = NULL;
                }
                func_0026E840(0x84028400);
            } else {
                *M2C_FIELD(temp_s0, u32 **, 0x120) = temp_a0;
                temp_s1 = D_003EAE90;
                if (temp_s1 != NULL) {
                    temp_a0_3 = M2C_FIELD(temp_s1, s32 *, 0x2C);
                    if (temp_a0_3 != 0) {
                        temp_v0 = func_002F3850(temp_a0_3);
                        if ((temp_v0 != 1) && (temp_v0 != 3)) {
                            func_002F3A00(M2C_FIELD(temp_s1, s32 *, 0x2C));
                        }
                    }
                }
                M2C_FIELD(temp_s0, s32 *, 0x14C) = 1;
                func_0026E840(0x8C008005);
            }
            break;
        case 1:
            if (temp_s0 != NULL) {
                temp_a0_4 = M2C_FIELD(temp_s0, s32 *, 0x2C);
                if ((temp_a0_4 != 0) && (func_002F3850(temp_a0_4) == 2)) {
                    func_002F39A0(M2C_FIELD(temp_s0, s32 *, 0x2C));
                }
            }
            if ((D_003EAE90 != NULL) && (M2C_FIELD(D_003EAE90, s32 *, 0x14C) == 1)) {
                func_002F2ED0(M2C_FIELD(D_003EAE90, s32 *, 0x2C));
            }
            temp_s0_4 = D_003EAE90;
            if (temp_s0_4 != NULL) {
                if (temp_s0_4 != NULL) {
                    func_001D7F10(M2C_FIELD(temp_s0_4, s32 *, 0x1C));
                    func_001D7F10(M2C_FIELD(temp_s0_4, s32 *, 0x20));
                    func_001D4E00(M2C_FIELD(temp_s0_4, s32 *, 0));
                    func_002F4E10(M2C_FIELD(temp_s0_4, s32 *, 0x2C));
                }
                func_001BC350();
                func_001BC2B0();
                func_0096DA00(temp_s0_4);
                D_003EAE90 = NULL;
            }
            func_0026E840(0x84008401);
            break;
        }
    }
    return 0;
}
