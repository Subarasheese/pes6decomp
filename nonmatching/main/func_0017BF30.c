/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00140FE0(void);
extern void func_00153FA0(void *);
void func_0017BF30(void *arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 0x14);
    if (M2C_FIELD(temp_s0, void **, 0) != NULL) {
        func_00140FE0();
        func_00153FA0(M2C_FIELD(temp_s0, void **, 0));
        M2C_FIELD(temp_s0, void **, 0) = NULL;
    }
}
