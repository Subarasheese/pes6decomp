/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00214290(s32);                         /* extern */
M2C_UNK func_008178F0(M2C_UNK);                     /* extern */
M2C_UNK func_00835C40(void *);                      /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
M2C_UNK func_009DEB20();                            /* extern */
extern void *D_00A7DEC8;

void func_009DE1C0(void) {
    if (D_00A7DEC8 != NULL) {
        if (M2C_FIELD(D_00A7DEC8, u8 *, 0x208) != 0) {
            M2C_FIELD(D_00A7DEC8, u8 *, 0x208) = 0U;
            func_00835C40(D_00A7DEC8 + 0x208);
            func_008178F0(1);
        }
        if (D_00A7DEC8 != NULL) {
            func_00214290(M2C_FIELD(D_00A7DEC8, s32 *, 0));
            func_009DEB20();
            func_0099C7C0(D_00A7DEC8);
            D_00A7DEC8 = NULL;
        }
    }
}
