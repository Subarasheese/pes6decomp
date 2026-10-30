/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001D5A10(s32);
s32 func_0081D850(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_008A4338[];
extern char D_008A4340[];
extern char D_008A4348[];

s32 func_00821320(void) {
    s32 temp_v0_2;
    void *temp_v0;

    if ((*(s32 *)D_008A4338) == 0) {
        if ((*(s32 *)D_008A4340) == 0) {
            temp_v0 = func_001D5A10(0x103A0);
            if (temp_v0 != NULL) {
                (*(s32 *)D_008A4338) = func_0081D850(temp_v0, 0, 1, 0, 0);
                (*(s32 *)D_008A4340) = func_0081D850(temp_v0, 1, 1, 0, 0);
                temp_v0_2 = func_0081D850(temp_v0, 2, 1, 0, 0);
                (*(s32 *)D_008A4348) = temp_v0_2;
                if (((*(s32 *)D_008A4338) != 0) && ((*(s32 *)D_008A4340) != 0)) {
                    if (temp_v0_2 != 0) {
                        return 1;
                    }
                    goto block_14;
                }
                goto block_14;
            }
            goto block_14;
        }
        return 0;
    }
block_14:
    return 0;
}
