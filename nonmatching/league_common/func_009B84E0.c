/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F62E0(s32);                         /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
M2C_UNK func_009B82F0();                            /* extern */
M2C_UNK func_009B8610();                            /* extern */
extern void *D_003EA9BC;

void func_009B84E0(void) {
    s32 temp_a0;
    void *temp_s0;

    if (D_003EA9BC != NULL) {
        func_009B82F0();
        func_009B8610();
        temp_s0 = D_003EA9BC;
        if (temp_s0 != NULL) {
            temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x3C);
            if (temp_a0 != 0) {
                func_002F62E0(temp_a0);
            }
            func_0096DA00(temp_s0);
            D_003EA9BC = NULL;
        }
    }
}
