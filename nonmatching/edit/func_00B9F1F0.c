/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C1B3C0(u32);
void *func_00B9C490();                              /* extern */
M2C_UNK func_00BC7390(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C1B440(M2C_UNK, u16);                /* extern */
extern char D_00CE3680[];
extern char D_00CE3687[];

void func_00B9F1F0(void) {
    void *temp_v0;

    temp_v0 = func_00B9C490();
    (*(s8 *)D_00CE3680) = 1;
    (*(s8 *)D_00CE3687) = 1;
    M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_v0, u32 *, 0x34) = 0U;
    func_00BC7390(0xE, 1);
    func_00C1B3C0(M2C_FIELD(temp_v0, u32 *, 0x34));
    func_00C1B440(0, M2C_FIELD(temp_v0, u16 *, 0x3A));
}
