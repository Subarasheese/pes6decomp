/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEE570(void);
extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern s32 func_00230380(void);
M2C_UNK func_00AEC630();                            /* extern */

void func_00AED590(s8 arg0) {
    u32 temp_v0;

    temp_v0 = func_00AEE570();
    if (temp_v0 != 0) {
        if (!(arg0 & 0xFF)) {
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), arg0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x28), arg0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x34), arg0);
            return;
        }
        if (func_00230380() != 0) {
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 1);
            func_001D7D80(M2C_FIELD(temp_v0, void **, 4), 1);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x28), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x34), 1);
            func_00AEC630();
        } else {
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 1);
            func_001D7D80(M2C_FIELD(temp_v0, void **, 4), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x28), 1);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x34), 0);
        }
    }
}
