/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B6EEC0();                            /* extern */
M2C_UNK func_00B6F0B0(M2C_UNK, M2C_UNK, void *);    /* extern */
extern void *D_003EAEF8;

s32 func_00B6E350(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_v0_2;

    if (D_003EAEF8 != NULL) {
        temp_v0 = M2C_FIELD(D_003EAEF8, s32 *, 0xD8);
        switch (temp_v0) {                          /* irregular */
        case 2:
            break;
        case 1:
            M2C_FIELD(D_003EAEF8, s32 *, 0xD8) = 0;
            temp_v1 = M2C_FIELD(D_003EAEF8, s32 *, 0xD4);
            if (temp_v1 != 7) {
                if (temp_v1 != 0x2B) {
                    M2C_FIELD(D_003EAEF8, u8 *, 0x98) = 2U;
                } else {
                    goto block_27;
                }
            } else {
block_27:
                M2C_FIELD(D_003EAEF8, u8 *, 0x98) = 0U;
            }
            func_00B6F0B0(1, 2, D_003EAEF8);
            func_0026E840(0x8400F802);
            break;
        case 0:
            temp_v1_2 = M2C_FIELD(D_003EAEF8, s32 *, 0xD4);
            if (temp_v1_2 != 7) {
                if (temp_v1_2 != 0x2B) {
                    temp_v0_2 = M2C_FIELD(D_003EAEF8, u8 *, 0x98);
                    if (temp_v0_2 != 0) {
                        M2C_FIELD(D_003EAEF8, u8 *, 0x98) = (u8) (temp_v0_2 - 1);
                    } else {
                        M2C_FIELD(D_003EAEF8, s32 *, 0xD8) = 1;
                    }
                } else {
                    goto block_16;
                }
            } else {
block_16:
                M2C_FIELD(D_003EAEF8, s32 *, 0xD8) = 1;
            }
            func_00B6F0B0(1, 2, D_003EAEF8);
            func_0026E840(0x8400F802);
            break;
        }
        func_00B6EEC0();
    }
    return 0;
}
