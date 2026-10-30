/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00165CE0(void *);
extern void func_001677E8(void *);
M2C_UNK func_0016B000(void *);                      /* extern */

void func_00166E28(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    void *temp_a0;

    if ((arg1 != M2C_FIELD(arg0, s32 *, 0x5AC)) || (arg2 != M2C_FIELD(arg0, s32 *, 0x5B0))) {
        temp_a2 = (arg2 <= -1) ? 0 : arg2;
        M2C_FIELD(arg0, s32 *, 0x4D8) = temp_a2;
        M2C_FIELD(arg0, s32 *, 0x5AC) = (s32) ((arg1 <= -1) ? 0 : arg1);
        M2C_FIELD(arg0, s32 *, 0x5B0) = temp_a2;
        func_001677E8(arg0);
        temp_a0 = M2C_FIELD(arg0, void **, 0x50);
        if (temp_a0 != NULL) {
            func_00165CE0(temp_a0);
        }
        func_0016B000(arg0);
    }
}
