/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B2FBB0(void);
extern s32 func_001F08B0(s32);
extern void func_001D7D80(void *, s16);
extern void func_001D7C20(void *, s32);
extern char D_00B7FDA8[];
extern char D_00B7FDAC[];

void func_00B2FA50(void) {
    s32 sp28;
    s32 sp2C;
    s64 var_v0;
    u32 temp_v0;
    u32 temp_v0_2;

    temp_v0 = func_00B2FBB0();
    if (temp_v0 != 0) {
        func_001F08B0(0x330035);
        func_001D7D80(NULL, 3);
        func_001D7C20(NULL, 0);
        M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        func_001D7D80(M2C_FIELD(temp_v0, void **, 0x10), 0);
        func_001D7C20(M2C_FIELD(temp_v0, void **, 0x10), 0);
        sp28 = (*(s32 *)D_00B7FDA8);
        sp2C = (*(s32 *)D_00B7FDAC);
        temp_v0_2 = func_00B2FBB0();
        if (temp_v0_2 != 0) {
            if (M2C_FIELD(temp_v0_2, s32 *, 0x50) != 0) {
                func_001F08B0(sp2C);
                var_v0 = 0;
            } else {
                func_001F08B0(sp28);
                var_v0 = 1;
            }
            func_001D7D80(M2C_FIELD(temp_v0_2, void **, 0x10), (s16) ((s64) (var_v0 << 0x30) >> 0x30));
        }
    }
}
