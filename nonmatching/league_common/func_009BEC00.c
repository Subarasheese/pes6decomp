/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_009BE0B0();                            /* extern */
extern void *D_003EA9CC;

void func_009BEC00(s8 arg0) {
    void *temp_s0;

    temp_s0 = D_003EA9CC;
    if (temp_s0 != NULL) {
        func_001D7D60(M2C_FIELD(temp_s0, void **, 4), arg0);
        func_001D7D60(M2C_FIELD(temp_s0, void **, 8), arg0);
        func_001D7D60(M2C_FIELD(temp_s0, void **, 0xC), arg0);
        if (!(arg0 & 0xFF)) {
            func_009BE0B0();
        }
    }
}
