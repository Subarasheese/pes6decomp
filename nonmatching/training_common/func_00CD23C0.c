/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_002640B0();                              /* extern */
M2C_UNK func_00264360(s32);                         /* extern */
s32 func_002643F0();                                /* extern */
M2C_UNK func_00264410(s32);                         /* extern */
s32 func_002644E0();                                /* extern */
M2C_UNK func_00264790(s32, M2C_UNK);                /* extern */
M2C_UNK func_00CDCBC0(s32);                         /* extern */
M2C_UNK func_00CDCBE0(s32);                         /* extern */
M2C_UNK func_00CDCC00(s32);                         /* extern */
M2C_UNK func_00CDCC20(s32);                         /* extern */
s32 func_00CDCCB0();                                /* extern */

void func_00CD23C0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = func_00CDCCB0();
    switch (temp_v0) {                              /* irregular */
    case 0:
        temp_v0_2 = func_002644E0();
        func_00CDCC20(temp_v0_2);
        func_00CDCBE0(temp_v0_2 + 0x3C);
        if (M2C_FIELD(func_002640B0(), s32 *, 0x44) == 0) {
            func_00264410(func_002644E0());
        }
        break;
    case 1:
        temp_v0_3 = func_002643F0();
        func_00CDCC00(temp_v0_3 + 0x1B8);
        func_00CDCBC0(temp_v0_3 + 0x1BC);
        if (M2C_FIELD(func_002640B0(), s32 *, 0x44) == 0) {
            func_00264360(func_002643F0());
        }
        break;
    }
    if ((M2C_FIELD(func_002640B0(), s32 *, 0x44) == 0) && (func_00CDCCB0() == 0)) {
        func_00264790(arg0, 9);
        return;
    }
    func_00264790(arg0, 0xA);
}
