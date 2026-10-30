/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
M2C_UNK sprintf(s8 *, M2C_UNK *, s32);        /* extern */
extern char D_00CB4BE0[];
extern char D_00CB4BE8[];

void func_00C74D60(void **arg0, s32 arg1) {
    s8 sp20;
    void *temp_a0;

    if ((arg0 != NULL) && (sprintf(&sp20, ((void *)D_00CB4BE0), arg1), (arg0 != NULL)) && (temp_a0 = *arg0, (temp_a0 != NULL)) && (M2C_FIELD(temp_a0, s32 *, 0) == 0)) {
        if (&sp20 != NULL) {
            if (sp20 != 0) {
                func_001DF820(M2C_FIELD(temp_a0, void **, 0xC), (s32) &sp20);
            } else {
                goto block_8;
            }
        } else {
block_8:
            func_001DF820(M2C_FIELD(temp_a0, void **, 0xC), (s32) ((void *)D_00CB4BE8));
        }
    }
}
