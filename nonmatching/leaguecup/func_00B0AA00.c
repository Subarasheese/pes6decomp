/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B096C0();                            /* extern */
M2C_UNK func_00B09800();                            /* extern */
extern s32 D_003EAD60;

void func_00B0AA00(void) {
    if (D_003EAD60 != 0) {
        func_00B096C0();
        func_00B09800();
        if (D_003EAD60 != 0) {
            func_0096DA00(D_003EAD60);
            D_003EAD60 = 0;
        }
        func_001D5C40(0x10300);
        func_001D5C40(0x10344);
    }
}
