/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern void func_001D7D60(void *, s8);
void func_008C5750(void *arg0, s32 arg1) {
    void *temp_s0;
    void *temp_v1;

    temp_s0 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_s0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_v1 == NULL) {
            return;
        }
        if (temp_v1 != NULL) {
            if (arg1 == 0) {
                func_001D7D60(temp_s0, 0);
                return;
            }
            func_001DF820(M2C_FIELD(temp_v1, void **, 0xC), arg1);
            func_001D7D60(temp_s0, 1);
        }
    }
}
