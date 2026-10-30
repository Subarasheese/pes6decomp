/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7C20(void *, s32);
M2C_UNK func_00B22460(M2C_UNK);                     /* extern */
s32 func_00B22970();                                /* extern */
extern void *D_003EAE20;
extern s32 D_003EAE24;
extern u8 D_003EAE28;

s32 func_00B22BB0(void) {
    void *temp_s0;

    temp_s0 = D_003EAE20;
    if (temp_s0 != NULL) {
        if (D_003EAE28 != 0) {
            D_003EAE24 = 0;
        } else {
            if (D_003EAE24 >= 0x51) {
                func_00B22460(0);
                func_001D7C20(M2C_FIELD(temp_s0, void **, 8), 2);
                D_003EAE28 = 1;
            }
            D_003EAE24 += 1;
        }
        return func_00B22970();
    }
    return 1;
}
