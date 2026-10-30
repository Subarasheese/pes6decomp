/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B2A1C0(void);
extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
void func_00B28F50(s32 arg0) {
    u32 temp_v0;

    temp_v0 = func_00B2A1C0();
    if (temp_v0 != 0) {
        switch (arg0) {                             /* irregular */
        case 11:
            func_001D7D80(M2C_FIELD(temp_v0, void **, 4), 4);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 1);
            return;
        case 10:
            func_001D7D80(M2C_FIELD(temp_v0, void **, 4), 3);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 1);
            return;
        case 7:
            func_001D7D80(M2C_FIELD(temp_v0, void **, 4), 2);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 1);
            return;
        case 6:
            func_001D7D80(M2C_FIELD(temp_v0, void **, 4), 1);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 1);
            return;
        case 5:
            func_001D7D80(M2C_FIELD(temp_v0, void **, 4), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 1);
            return;
        default:
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 0);
            break;
        }
    }
}
