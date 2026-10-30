/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1DE00(void);
extern void func_001D7D60(void *, s8);
extern void func_00B1C4B0(void);
M2C_UNK func_008CA300(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B1C740(s32);                         /* extern */

void func_00B1CAE0(void) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_00B1DE00();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x94);
        switch (temp_a0) {                          /* irregular */
        case 0:
            func_00B1C740(M2C_FIELD(temp_v0, s32 *, 0xA8));
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 0);
            func_008CA300(M2C_FIELD(temp_v0, s32 *, 0x30), 0);
            return;
        case 1:
            func_00B1C4B0();
            func_001D7D60(M2C_FIELD(temp_v0, void **, 4), 1);
            func_008CA300(M2C_FIELD(temp_v0, s32 *, 0x30), 1);
            break;
        }
    }
}
