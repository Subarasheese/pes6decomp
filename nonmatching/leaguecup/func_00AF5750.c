/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(s32);                         /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
M2C_UNK func_00AF5960();                            /* extern */
M2C_UNK func_00AF5F10();                            /* extern */
extern void *D_003EAD4C;

void func_00AF5750(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;

    if (D_003EAD4C != NULL) {
        temp_s1 = M2C_FIELD(D_003EAD4C, s32 *, 0x58);
        temp_s0 = M2C_FIELD(D_003EAD4C, s32 *, 0x5C);
        temp_s2 = M2C_FIELD(D_003EAD4C, s32 *, 0x54);
        func_00AF5960();
        func_00AF5F10();
        if (D_003EAD4C != NULL) {
            func_0096DA00(D_003EAD4C);
            D_003EAD4C = NULL;
        }
        func_001D5C40(temp_s0);
        func_001E7140(temp_s2);
        func_001E7140(temp_s1);
    }
}
