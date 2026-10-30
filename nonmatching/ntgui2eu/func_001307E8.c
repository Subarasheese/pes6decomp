/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165AC0();                            /* extern */
extern char D_005B59E4[];
extern char D_005B59E8[];

void func_001307E8(s32 arg0, void *arg1) {
    if (arg0 != 0) {
        func_00165AC0();
    }
    M2C_FIELD(arg1, s32 *, 0x34) = (s32) ((*(s32 *)D_005B59E4) * 0x10);
    M2C_FIELD(arg1, s32 *, 0x38) = (s32) ((*(s32 *)D_005B59E8) * 0x10);
}
