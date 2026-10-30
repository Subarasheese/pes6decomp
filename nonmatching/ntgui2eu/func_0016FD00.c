/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(void *, s32);                     /* extern */
void *func_00165B00();                              /* extern */
extern char D_005BFCA8[];

void func_0016FD00(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00165B00();
    if ((temp_v0 != NULL) && (func_00163C30(temp_v0, (*(s32 *)D_005BFCA8)) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x830) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x5A0) + M2C_FIELD(temp_v0, s32 *, 0x5D4));
        M2C_FIELD(arg0, s32 *, 0x834) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x5A4) + M2C_FIELD(temp_v0, s32 *, 0x5D4));
        M2C_FIELD(arg0, s32 *, 0x838) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x5A0) + M2C_FIELD(temp_v0, s32 *, 0x5D4) + M2C_FIELD(temp_v0, s32 *, 0x5AC));
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        M2C_FIELD(arg0, s32 *, 0x83C) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x5A4) + M2C_FIELD(temp_v0, s32 *, 0x5D4) + M2C_FIELD(temp_v0, s32 *, 0x5B0));
    }
}
