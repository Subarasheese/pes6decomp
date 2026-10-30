/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_009BDAA0();                            /* extern */
M2C_UNK func_009BE0B0();                            /* extern */
M2C_UNK func_00B14E60();                            /* extern */
M2C_UNK func_00B14F50();                            /* extern */
extern s32 D_003EAD74;

void func_00B15600(void) {
    if (D_003EAD74 != 0) {
        func_00B14E60();
        func_00B14F50();
        if (D_003EAD74 != 0) {
            func_0096DA00(D_003EAD74);
            D_003EAD74 = 0;
        }
        func_009BE0B0();
        func_001D5C40(0x10305);
        func_009BDAA0();
    }
}
