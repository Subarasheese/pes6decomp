/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208610(void *, void *);              /* extern */
M2C_UNK func_00209540(void *, M2C_UNK, u16);        /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_00BA8570(void **arg0) {
    u16 temp_a1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    temp_a0 = M2C_FIELD(*arg0, void **, 4);
    temp_a1 = M2C_FIELD(temp_a0, void **, 4);
    if (M2C_FIELD(temp_a1, u16 *, 6) == 0x38C) {
        func_00209540(temp_a0, 0x48E, M2C_FIELD(temp_a1, u16 *, 4));
        func_00207390(M2C_FIELD(*arg0, void **, 4), 8);
    } else {
        func_00208610(temp_a0, temp_a1);
    }
    temp_a0_2 = M2C_FIELD(*arg0, void **, 4);
    temp_a1_2 = M2C_FIELD(temp_a0_2, u16 *, 0x30);
    if ((temp_a1_2 == 0) || (temp_a1_2 == 0x1A7)) {
        func_00209A00(temp_a0_2, 0x489, 0);
    }
}
