/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
extern void func_001D7D80(void *, s16);
void func_00B0B540(s32 arg0) {
    u32 temp_v0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        switch (arg0) {                             /* irregular */
        case 2:
            func_001D7D80(M2C_FIELD(temp_v0, void **, 0xB18), 0);
            break;
        case 1:
            func_001D7D80(M2C_FIELD(temp_v0, void **, 0xB18), 1);
            return;
        case 0:
            func_001D7D80(M2C_FIELD(temp_v0, void **, 0xB18), 2);
            return;
        }
    }
}
