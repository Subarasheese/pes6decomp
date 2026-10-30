/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00991950(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00990130();                            /* extern */
M2C_UNK func_009904A0(u8);                          /* extern */
M2C_UNK func_00990C50();                            /* extern */

void func_00991240(void) {
    u32 temp_v0;

    temp_v0 = func_00991950();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(0x102A6);
        func_00990C50();
        func_009904A0(M2C_FIELD(temp_v0, u8 *, 0x495));
        func_00990130();
    }
}
