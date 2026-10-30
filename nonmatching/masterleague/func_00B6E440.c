/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BC2B0();                            /* extern */
M2C_UNK func_001BC350();                            /* extern */
M2C_UNK func_001D4E00(s32);                         /* extern */
M2C_UNK func_001D7F10(s32);                         /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00B29060();                            /* extern */
M2C_UNK func_00B6EEC0();                            /* extern */
M2C_UNK func_00B6F0B0(void *);                      /* extern */
extern void *D_003EAEF8;

s32 func_00B6E440(void) {
    s32 temp_v1;
    void *temp_s0;

    if (D_003EAEF8 != NULL) {
        if ((M2C_FIELD(D_003EAEF8, u8 *, 0x98) == 0) && (M2C_FIELD(D_003EAEF8, s32 *, 0xD8) == 1) && (M2C_FIELD(D_003EAEF8, u8 *, 0x99) == 1)) {
            M2C_FIELD(D_003EAEF8, s32 *, 0xD8) = 2;
            temp_v1 = M2C_FIELD(D_003EAEF8, s32 *, 0xD4);
            if ((temp_v1 != 0xB) && (temp_v1 != 0xA) && (temp_v1 != 7) && (temp_v1 != 6) && (temp_v1 != 5)) {

            } else {
                func_00958000(0x23);
            }
            temp_s0 = D_003EAEF8;
            if (temp_s0 != NULL) {
                if (temp_s0 != NULL) {
                    func_001D7F10(M2C_FIELD(temp_s0, s32 *, 0xC));
                    func_001D7F10(M2C_FIELD(temp_s0, s32 *, 0x10));
                    func_00972290(M2C_FIELD(temp_s0, s32 *, 0x14));
                    func_001D4E00(M2C_FIELD(temp_s0, s32 *, 4));
                    func_00B29060();
                }
                func_001BC350();
                func_001BC2B0();
                func_0096DA00(temp_s0);
                D_003EAEF8 = NULL;
            }
        } else {
            M2C_FIELD(D_003EAEF8, s32 *, 0xD8) = 1;
            M2C_FIELD(D_003EAEF8, u8 *, 0x98) = 0U;
            M2C_FIELD(D_003EAEF8, u8 *, 0x99) = 1U;
            func_00B6F0B0(D_003EAEF8);
            func_00B6EEC0();
        }
        func_0026E840(0x84008401);
    }
    return 0;
}
