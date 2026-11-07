/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(void *);                      /* extern */
M2C_UNK func_001B4D20(s32);                         /* extern */
M2C_UNK func_001BBC20(s32);                         /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
extern void *D_003E9DB8;

void func_002D9230(void) {
    if (D_003E9DB8 != NULL) {
        func_001BBC20(M2C_FIELD(D_003E9DB8, s32 *, 0x18));
        func_001EDD90(M2C_FIELD(D_003E9DB8, s32 *, 0));
        func_001B4D20(M2C_FIELD(D_003E9DB8, s32 *, 4));
        func_00153FA0(D_003E9DB8);
        D_003E9DB8 = NULL;
    }
}
