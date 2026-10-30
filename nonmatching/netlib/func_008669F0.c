/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_008669F0(s32 *arg0, s32 *arg1) {
    void *temp_s2;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x3122) {
            return -0x46;
        }
        func_00874470();
        temp_s2 = arg1 + (*arg1 * 0x25C) + 4;
        func_00873F60(arg0, temp_s2 + 0x14);
        func_00874120(arg0, temp_s2 + 0x59);
        func_00874120(arg0, temp_s2 + 0x5A);
        func_001C48E8(temp_s2, 0, 0x14);
        func_00873EE0(arg0, temp_s2, 0x13);
        func_001C48E8(temp_s2 + 0x18, 0, 0x41);
        func_00873EE0(arg0, temp_s2 + 0x18, 0x40);
        func_001C48E8(temp_s2 + 0x5B, 0, 0x201);
        func_00873EE0(arg0, temp_s2 + 0x5B, 0x200);
        func_00874460(arg0);
        *arg1 += 1;
        return 0;
    }
    return -0x18;
}
