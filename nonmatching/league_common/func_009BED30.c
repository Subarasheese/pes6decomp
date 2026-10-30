/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D4E00(s32);                         /* extern */
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001D7F10(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
M2C_UNK func_00973460(s32);                         /* extern */
M2C_UNK func_009BDAA0();                            /* extern */
extern void *D_003EA9CC;

void func_009BED30(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_s0;

    temp_s0 = D_003EA9CC;
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, s32 *, 0x7C) == 1) {
            if (temp_s0 != NULL) {
                func_00957070(M2C_FIELD(temp_s0, s32 *, 0x10));
                func_00957070(M2C_FIELD(temp_s0, s32 *, 0x14));
                func_00973460(M2C_FIELD(temp_s0, s32 *, 0x18));
                func_001D7F10(M2C_FIELD(temp_s0, s32 *, 4));
                func_001D7F10(M2C_FIELD(temp_s0, s32 *, 8));
                func_001D7F10(M2C_FIELD(temp_s0, s32 *, 0xC));
                temp_a0 = M2C_FIELD(temp_s0, s32 *, 0);
                if (temp_a0 != 0) {
                    func_001D4E00(temp_a0);
                    M2C_FIELD(temp_s0, s32 *, 0) = 0;
                }
                if (D_003EA9CC != NULL) {
                    func_0096DA00(D_003EA9CC);
                    D_003EA9CC = NULL;
                }
                func_001D5C40(0x1032F);
            }
        } else if (temp_s0 != NULL) {
            func_00973460(M2C_FIELD(temp_s0, s32 *, 0x18));
            func_001D7F10(M2C_FIELD(temp_s0, s32 *, 4));
            func_001D7F10(M2C_FIELD(temp_s0, s32 *, 8));
            func_001D7F10(M2C_FIELD(temp_s0, s32 *, 0xC));
            temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0);
            if (temp_a0_2 != 0) {
                func_001D4E00(temp_a0_2);
                M2C_FIELD(temp_s0, s32 *, 0) = 0;
            }
            if (D_003EA9CC != NULL) {
                func_0096DA00(D_003EA9CC);
                D_003EA9CC = NULL;
            }
            func_001D5C40(0x1030F);
        }
        func_009BDAA0();
    }
}
