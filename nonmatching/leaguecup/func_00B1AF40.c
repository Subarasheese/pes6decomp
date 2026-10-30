/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009BDAA0();                            /* extern */
M2C_UNK func_009BE0B0();                            /* extern */
M2C_UNK func_00B1BF20();                            /* extern */
M2C_UNK func_00B1BFF0();                            /* extern */
extern s32 D_003EAD7C;

void func_00B1AF40(void) {
    if (D_003EAD7C != 0) {
        func_00B1BF20();
        func_00B1BFF0();
        if (D_003EAD7C != 0) {
            func_0096DA00(D_003EAD7C);
            D_003EAD7C = 0;
        }
        func_009BE0B0();
        func_001D5C40(0x1030C);
        func_001E7140(0x3011E);
        func_009BDAA0();
    }
}
