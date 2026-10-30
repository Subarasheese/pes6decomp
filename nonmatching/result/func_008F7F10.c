/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003EA62C;
extern char D_00921C38[];

void func_008F7F10(void) {
    if (M2C_FIELD(((void *)D_00921C38), void **, 8) != NULL) {
        func_00153FA0(M2C_FIELD(((void *)D_00921C38), void **, 8));
    }
    func_001C48E8(((void *)D_00921C38), 0, 0xC);
    D_003EA62C = 0;
}
