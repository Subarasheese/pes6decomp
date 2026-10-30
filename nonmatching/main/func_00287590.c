/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58F0(void *, int);
void func_00287590(void *arg0, s32 arg1) {
    void *temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 4);
    temp_s0 = M2C_FIELD(temp_s1, void **, 0);
    func_001A58F0(temp_s0, arg1);
    if (M2C_FIELD(temp_s1, u8 *, 0x2C) != 0) {
        if (M2C_FIELD(temp_s0, u8 *, 1) == 0) {
            M2C_FIELD(temp_s0, u8 *, 1) = 1U;
        }
    }
}
