/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003EA634;
extern char D_00921C70[];

void func_008FA2A0(void) {
    if (M2C_FIELD(((void *)D_00921C70), void **, 0xC) != NULL) {
        func_00153FA0(M2C_FIELD(((void *)D_00921C70), void **, 0xC));
    }
    func_001C48E8(((void *)D_00921C70), 0, 0x10);
    D_003EA634 = 0;
}
