/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00133D40(void *);
extern void func_00140FE0(void);
extern void func_00153FA0(void *);
void func_0017D0A0(void *arg0, s32 arg1) {
    void *temp_a0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x18) + (arg1 * 0x1C);
    if (M2C_FIELD(temp_s0, void **, 8) != NULL) {
        func_00140FE0();
        func_00153FA0(M2C_FIELD(temp_s0, void **, 8));
        M2C_FIELD(temp_s0, void **, 8) = NULL;
    }
    temp_a0 = M2C_FIELD(temp_s0, void **, 0x18);
    if (temp_a0 != NULL) {
        func_00133D40(temp_a0);
        M2C_FIELD(temp_s0, void **, 0x18) = NULL;
    }
}
