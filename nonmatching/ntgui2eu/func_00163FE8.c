/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(s32, s32);                        /* extern */
M2C_UNK func_00167C98(s32, void *);                 /* extern */
extern char D_005BFCA8[];

void func_00163FE8(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
        if (func_00163C30(arg1, (*(s32 *)D_005BFCA8)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0;
            func_00167C98(arg1, arg0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xB4) = 1;
    }
}
