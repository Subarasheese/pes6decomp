/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00174908(void *);
s32 func_00163C30(void *, s32);                     /* extern */
M2C_UNK func_0016D9E0(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001748B0(void *, M2C_UNK);             /* extern */
extern M2C_UNK (*D_005BFDB0)();
extern char D_005C2570[];

void func_0016DE98(void *arg0, void *arg1) {
    D_005BFDB0();
    if (func_00163C30(arg1, (*(s32 *)D_005C2570)) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x874) != 0) {
            func_001748B0(arg1, 0);
            if (func_00174908(arg1) != 0) {
                func_0016D9E0(arg0, arg1, 0);
            }
        } else {
            func_001748B0(arg1, 1);
        }
    }
}
