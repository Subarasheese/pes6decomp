/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int EIntr(void);
M2C_UNK func_00105370(s32);                         /* extern */
s32 DIntr();                                /* extern */
extern char D_003B3200[];

s32 func_002DAFD0(void) {
    s32 temp_s0;

    temp_s0 = (*(s32 *)D_003B3200);
    (*(s32 *)D_003B3200) = -1;
    if (DIntr() != 0) {
        EIntr();
    }
    if (temp_s0 >= 0) {
        func_00105370(temp_s0);
    }
    return 0;
}
