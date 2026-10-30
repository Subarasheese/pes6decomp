/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC360(void);
extern void func_002F4E10(void *);
M2C_UNK func_002F62E0(s32);                         /* extern */
extern s32 D_003EB33C;

s32 func_00CF49F0(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        func_002F4E10(M2C_FIELD(arg0, void **, 0));
        D_003EB33C = 0;
        M2C_FIELD(arg0, void **, 0) = NULL;
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x128);
        if (temp_a0 != 0) {
            func_002F62E0(temp_a0);
            M2C_FIELD(arg0, s32 *, 0x128) = 0;
            func_001BC360();
            func_001BC360();
        }
        return 1;
    }
    return 0;
}
