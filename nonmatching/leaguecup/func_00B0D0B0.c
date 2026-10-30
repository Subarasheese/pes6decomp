/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
M2C_UNK func_00B0EDD0();                            /* extern */
M2C_UNK func_00B108A0();                            /* extern */
extern void *D_003EAD68;

void func_00B0D0B0(void) {
    void *temp_s0;

    temp_s0 = D_003EAD68;
    if (temp_s0 != NULL) {
        func_00B0EDD0();
        func_00B108A0();
        func_001D5C40(0x10304);
        func_001D5C40(0x10344);
        func_001D5C40(0x10385);
        func_001E7140(M2C_FIELD(temp_s0, s32 *, 0x1410));
        if (D_003EAD68 != NULL) {
            func_0096DA00(D_003EAD68);
            D_003EAD68 = NULL;
        }
    }
}
