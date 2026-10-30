/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009505F0(s32, s32);                    /* extern */
s32 func_00950D30(s32);                             /* extern */
extern s32 D_003EAC90;

void func_00964F90(s32 arg0) {
    func_009505F0(func_00950D30(D_003EAC90), arg0);
}
