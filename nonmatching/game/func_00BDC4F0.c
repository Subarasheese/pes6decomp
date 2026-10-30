/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00BDBEA0(void **, u16);                /* extern */
M2C_UNK func_00BDBFD0(void **, u16);                /* extern */
M2C_UNK func_00BDC140(void **, u16);                /* extern */

void func_00BDC4F0(u8 *arg0) {
    u16 temp_a1;
    void **temp_v0;

    temp_v0 = func_00B2A420(*arg0);
    temp_a1 = M2C_FIELD(*temp_v0, u16 *, 0x18);
    switch (temp_a1) {                              /* irregular */
    case 0:
        func_00BDC140(temp_v0, temp_a1);
        return;
    case 1:
        func_00BDBFD0(temp_v0, temp_a1);
        return;
    case 2:
        func_00BDBEA0(temp_v0, temp_a1);
        return;
    }
}
