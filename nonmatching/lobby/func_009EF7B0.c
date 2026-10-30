/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9C60(void *);
M2C_UNK func_002DC1D0(s32);                         /* extern */

void func_009EF7B0(void *arg0) {
    s32 temp_v1;
    void *temp_s0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    temp_s0 = M2C_FIELD(arg0, void **, 4);
    if (temp_v1 != 0) {
        func_002DC1D0(temp_v1);
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    if (temp_s0 != NULL) {
        func_001B9C60(temp_s0);
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
}
