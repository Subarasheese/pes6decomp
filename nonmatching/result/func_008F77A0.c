/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003EA628;
extern char D_00921C30[];

void func_008F77A0(void) {
    if (M2C_FIELD(((void *)D_00921C30), void **, 4) != NULL) {
        func_00153FA0(M2C_FIELD(((void *)D_00921C30), void **, 4));
    }
    func_001C48E8(((void *)D_00921C30), 0, 8);
    D_003EA628 = 0;
}
