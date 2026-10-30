/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003EA630;
extern char D_00921C50[];

void func_008F8490(void) {
    if (M2C_FIELD(((void *)D_00921C50), void **, 0x10) != NULL) {
        func_00153FA0(M2C_FIELD(((void *)D_00921C50), void **, 0x10));
    }
    func_001C48E8(((void *)D_00921C50), 0, 0x14);
    D_003EA630 = 0;
}
