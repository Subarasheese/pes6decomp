/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001DEEF0(void *);
extern s32 func_001F08B0(s32);
extern void func_001DF820(void *, s32);
extern s32 func_001F4AE0(void *);
M2C_UNK sprintf(s8 *, s32, s32);              /* extern */
extern char D_00CB4BE8[];

void func_00C74EE0(void **arg0, s32 arg1) {
    s8 sp30;
    s32 temp_s0;
    void *temp_a0;

    if ((arg0 != NULL) && (func_001F4AE0(*arg0) == 0) && (temp_s0 = func_001DEEF0(M2C_FIELD(*arg0, void **, 0xC)), sprintf(&sp30, temp_s0, func_001F08B0(arg1)), (arg0 != NULL)) && (temp_a0 = *arg0, (temp_a0 != NULL)) && (M2C_FIELD(temp_a0, s32 *, 0) == 0)) {
        if (&sp30 != NULL) {
            if (sp30 != 0) {
                func_001DF820(M2C_FIELD(temp_a0, void **, 0xC), (s32) &sp30);
            } else {
                goto block_9;
            }
        } else {
block_9:
            func_001DF820(M2C_FIELD(temp_a0, void **, 0xC), (s32) ((void *)D_00CB4BE8));
        }
    }
}
