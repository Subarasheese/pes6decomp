/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001544E0(s32);
extern void func_001BC2B0(void);
extern void func_001BC350(void);
extern u32 func_00B0A1E0(void);

void func_00B09A30(void) {
    u32 temp_v0;

    temp_v0 = func_00B0A1E0();
    if (temp_v0 != 0) {
        func_001544E0(M2C_FIELD(temp_v0, s32 *, 0x494));
        func_001BC350();
        func_001BC2B0();
    }
}
