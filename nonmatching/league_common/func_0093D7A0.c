/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7840(void *, s8);
extern void * func_001D5A10(s32);
M2C_UNK func_001D7A20(void *, s32 *, M2C_UNK);      /* extern */
s32 func_0022C790();                                /* extern */
M2C_UNK func_00972F70(void *, M2C_UNK, s32, s32 *); /* extern */
void *func_00973CD0(void *, M2C_UNK);               /* extern */
extern void *D_003EA8C8;
extern void *D_003EA8CC;

void func_0093D7A0(void) {
    s32 sp30;
    s32 sp34;
    void *temp_v0;
    void *temp_v0_2;

    if ((D_003EA8C8 == NULL) && (D_003EA8CC == NULL)) {
        temp_v0 = func_001D5A10(0x1029F);
        if (temp_v0 != NULL) {
            temp_v0_2 = func_00973CD0(temp_v0, 0);
            func_001D7840(temp_v0_2, 2);
            func_001D7A20(temp_v0_2, &sp30, 0);
            sp30 = 0;
            sp34 = 0x42000000;
            func_00972F70(temp_v0_2, 0, func_0022C790(), &sp30);
            D_003EA8C8 = temp_v0;
            D_003EA8CC = temp_v0_2;
        }
    }
}
