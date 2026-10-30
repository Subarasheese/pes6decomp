/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00391478[];
extern char D_00391480[];

void func_00176EF0(void) {
    s32 temp_v0;

    temp_v0 = (*(s32 *)D_00391478);
    if (temp_v0 == 0) {
        func_001C48E8(((void *)D_00391480), 0, 0x4000);
    }
    (*(s32 *)D_00391478) = temp_v0 + 1;
}
