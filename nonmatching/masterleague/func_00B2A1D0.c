/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
M2C_UNK func_00B299A0(void *);                      /* extern */
extern u8 D_003E7D04;
extern void *D_003EAE30;

void func_00B2A1D0(void) {
    u8 temp_v1;

    if (D_003EAE30 != NULL) {
        temp_v1 = M2C_FIELD(D_003EAE30, u8 *, 0xD0);
        if ((temp_v1 == 0) && (M2C_FIELD(D_003EAE30, u8 *, 0xD1) == 0)) {
            D_003E7D04 = 1;
        } else {
            D_003E7D04 = temp_v1;
        }
        func_00B299A0(D_003EAE30);
        if (D_003EAE30 != NULL) {
            func_0096DA00(D_003EAE30);
            D_003EAE30 = NULL;
        }
        func_001D5C40(0x10336);
        func_001D5C40(0x10320);
    }
}
