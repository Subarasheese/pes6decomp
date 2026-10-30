/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B154D0(M2C_UNK);                     /* extern */
M2C_UNK func_00B5B970();                            /* extern */
M2C_UNK func_00B5E5F0();                            /* extern */
extern s32 D_003EAEB8;

void func_00B5B7E0(void) {
    if (D_003EAEB8 != 0) {
        func_00B5E5F0();
        func_00B5B970();
        if (D_003EAEB8 != 0) {
            func_0096DA00(D_003EAEB8);
            D_003EAEB8 = 0;
        }
        func_001D5C40(0x10331);
        func_001D5C40(0x102AF);
        func_001D5C40(0x10330);
        func_001D5C40(0x1032A);
        func_001D5C40(0x1033B);
        func_00B154D0(0);
    }
}
