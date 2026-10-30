/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00366760(void);
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
M2C_UNK func_00B041E0();                            /* extern */
extern void *D_003EAD58;

void func_00B03B60(void) {
    void *temp_s0;

    temp_s0 = D_003EAD58;
    if (temp_s0 != NULL) {
        func_00366760();
        func_00B041E0();
        func_001E7140(M2C_FIELD(temp_s0, s32 *, 0x14));
        if (D_003EAD58 != NULL) {
            func_0096DA00(D_003EAD58);
            D_003EAD58 = NULL;
        }
    }
}
