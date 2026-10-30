/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F3A20(void *);
extern u32 func_00B447A0(void);
s32 func_002F3850(void *);                          /* extern */

s32 func_00B3DB20(void) {
    s32 temp_v0_2;
    u32 temp_v0;
    void *temp_a0;

    temp_v0 = func_00B447A0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, void **, 0x6C4);
        if (temp_a0 == NULL) {
            return 0;
        }
        temp_v0_2 = func_002F3850(temp_a0);
        switch (temp_v0_2) {                        /* irregular */
        case 1:
            return 0;
        case 3:
            return 0;
        default:
            func_002F3A20(M2C_FIELD(temp_v0, void **, 0x6C4));
            return 1;
        }
    } else {
        return 0;
    }
}
