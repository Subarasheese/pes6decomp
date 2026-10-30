/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B44A70();                                /* extern */
u8 func_00B49910(s32);                              /* extern */
extern s32 D_003EAE78;
extern s32 D_003EAE7C;
extern u8 D_003EAE80;

s32 func_00B497D0(void) {
    if (D_003EAE78 != 0) {
        if (D_003EAE80 != 0) {
            D_003EAE7C = 0;
        } else {
            if (D_003EAE7C >= 0x65) {
                D_003EAE80 = func_00B49910(D_003EAE7C - 0x64);
            }
            D_003EAE7C += 1;
        }
        return func_00B44A70();
    }
    return 1;
}
