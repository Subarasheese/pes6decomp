/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B088B0();                            /* extern */
M2C_UNK func_00B09A30();                            /* extern */
extern s32 D_003EADEC;

void func_00B0A3E0(void) {
    if (D_003EADEC != 0) {
        func_00B09A30();
        func_00B088B0();
        if (D_003EADEC != 0) {
            func_0096DA00(D_003EADEC);
            D_003EADEC = 0;
        }
    }
}
