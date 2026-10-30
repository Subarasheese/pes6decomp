/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001DF7B0(s32);                         /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */

s32 func_00CED470(void *arg0) {
    void *temp_a0;

    if (arg0 != NULL) {
        func_001EDD90(M2C_FIELD(arg0, s32 *, 4));
        func_001DF7B0(M2C_FIELD(arg0, s32 *, 0x10));
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        if (temp_a0 == NULL) {
            return 0;
        }
        func_00153FA0(temp_a0);
        func_001C48E8(arg0, 0, 0x1C);
        return 1;
    }
    return 0;
}
