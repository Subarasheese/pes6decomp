/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001DEEF0(void *);
extern s32 func_001D6D30(s32, s32);
extern void func_001DF820(void *, s32);
extern s32 func_001F4AE0(void *);
M2C_UNK func_001B6FA0(void *, s32);                 /* extern */
M2C_UNK sprintf(s8 *, s32, s32);              /* extern */
extern char D_00CB4BE8[];

void func_00C74DF0(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 sp30;
    s32 temp_a1;
    void *temp_a0;
    void *temp_v1;

    temp_a1 = func_001D6D30(arg1, arg2);
    if ((arg0 != NULL) && (temp_a1 != 0)) {
        temp_v1 = *arg0;
        if (temp_v1 != NULL) {
            func_001B6FA0(M2C_FIELD(temp_v1, void **, 0xC), temp_a1);
        }
    }
    if ((arg0 != NULL) && (func_001F4AE0(*arg0) == 0) && (sprintf(&sp30, func_001DEEF0(M2C_FIELD(*arg0, void **, 0xC)), arg3), (arg0 != NULL)) && (temp_a0 = *arg0, (temp_a0 != NULL)) && (M2C_FIELD(temp_a0, s32 *, 0) == 0)) {
        if (&sp30 != NULL) {
            if (sp30 != 0) {
                func_001DF820(M2C_FIELD(temp_a0, void **, 0xC), (s32) &sp30);
            } else {
                goto block_13;
            }
        } else {
block_13:
            func_001DF820(M2C_FIELD(temp_a0, void **, 0xC), (s32) ((void *)D_00CB4BE8));
        }
    }
}
