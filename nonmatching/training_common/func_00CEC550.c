/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(s32);                         /* extern */
extern s32 D_003E7E38;

void func_00CEC550(s32 arg0) {
    s32 temp_a1;

    temp_a1 = D_003E7E38;
    if (temp_a1 == 0x2B) {
        D_003E7E38 = arg0;
        func_00CD7A00(temp_a1);
    }
}
