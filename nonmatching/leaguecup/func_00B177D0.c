/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009BDAA0();                            /* extern */
M2C_UNK func_009BE0B0();                            /* extern */
M2C_UNK func_00B194A0();                            /* extern */
M2C_UNK func_00B197D0();                            /* extern */
extern s32 D_003EAD78;

void func_00B177D0(void) {
    if (D_003EAD78 != 0) {
        func_00B194A0();
        func_00B197D0();
        if (D_003EAD78 != 0) {
            func_0096DA00(D_003EAD78);
            D_003EAD78 = 0;
        }
        func_009BE0B0();
        func_001D5C40(0x1030B);
        func_001E7140(0x3011D);
        func_009BDAA0();
    }
}
