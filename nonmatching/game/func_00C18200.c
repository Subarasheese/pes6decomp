/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C13B60(void *);                      /* extern */
extern s32 D_003EA7D4;
extern char D_00CCAE40[];

void func_00C18200(void) {
    func_00C13B60(((void *)D_00CCAE40) + 0xE8);
    func_001C48E8(((void *)D_00CCAE40), 0xFF, 0xF4);
    D_003EA7D4 = 0;
}
