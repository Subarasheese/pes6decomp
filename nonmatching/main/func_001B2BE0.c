/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
void *func_001B06F0(void *);                        /* extern */
M2C_UNK func_001B2CB0(void *, void *, s32);         /* extern */

void func_001B2BE0(void *arg0) {
    void *temp_s0;
    void *temp_s1;

    temp_s0 = M2C_FIELD(arg0, void **, 4);
    temp_s1 = func_001B06F0(M2C_FIELD(arg0, void **, 0x44));
    func_00153FA0(M2C_FIELD(arg0, void **, 0x44));
    func_001B2CB0(temp_s0, temp_s1, M2C_FIELD(arg0, s32 *, 0));
    func_00153FA0(temp_s1);
    M2C_FIELD(temp_s0, s8 *, 0x64) = 2;
}
