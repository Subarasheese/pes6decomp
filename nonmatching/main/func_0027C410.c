/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_0014AAB0(void *, void *);              /* extern */
M2C_UNK func_0027C470(void *);                      /* extern */
void *func_0027CD20(s32);                           /* extern */

void func_0027C410(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_s0 != NULL) {
        M2C_FIELD(arg0, void **, 0x44) = func_0027CD20(M2C_FIELD(temp_s0, s32 *, 8));
        func_0014AAB0(temp_s0, M2C_FIELD(arg0, void **, 0x44));
        func_0027C470(arg0);
        func_00153FA0(temp_s0);
    }
}
