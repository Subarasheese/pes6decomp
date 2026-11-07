/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001B9630(s32, s32);                    /* extern */
extern void *D_003E9FBC;

void func_0035A690(void) {
    if (D_003E9FBC != NULL) {
        func_001B9630(M2C_FIELD(D_003E9FBC, s32 *, 8), M2C_FIELD(D_003E9FBC, s32 *, 0xC));
        func_00153FA0(M2C_FIELD(D_003E9FBC, s32 *, 8));
        func_00153FA0(M2C_FIELD(D_003E9FBC, s32 *, 0x14));
        M2C_FIELD(D_003E9FBC, s32 *, 8) = 0;
        M2C_FIELD(D_003E9FBC, s32 *, 0x14) = 0;
        D_003E9FBC = NULL;
    }
}
