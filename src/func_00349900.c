/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(s32);                         /* extern */
extern s32 D_003E9F64;

void func_00349900(void) {
    if (D_003E9F64 != 0) {
        func_00153FA0(D_003E9F64);
        D_003E9F64 = 0;
    }
}
