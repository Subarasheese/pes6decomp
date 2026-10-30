/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00866260(s32, M2C_UNK *);              /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_00A4DB00[];

s32 func_0093D950(void) {
    s32 temp_s1;

    temp_s1 = func_00D0BAF0();
    if (((void *)D_00A4DB00) != NULL) {
        func_001C48E8(((void *)D_00A4DB00), 0, 0x1774);
    }
    func_00866260(temp_s1, ((void *)D_00A4DB00));
    return 1;
}
