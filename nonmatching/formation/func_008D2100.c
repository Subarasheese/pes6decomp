/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEE60(void *, void *);
void func_008D2100(s32 arg0, void *arg1, s32 arg2) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(((arg2 * 4) + arg0), void **, 0x124);
    if (temp_a0 != NULL) {
        func_001EEE60(temp_a0, arg1);
    }
}
