/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00163C30(void *, s32);
void *func_00165B00(s32);
extern char D_005BFCA8[];

s32 func_0016AD68(s32 arg0, s32 arg1) {
    void *entry;

    entry = func_00165B00(arg1);
    if (!((entry != NULL) && (func_00163C30(entry, (*(s32 *)D_005BFCA8)) != 0))) {
        return 0;
    }
    if ((entry + 0x9A8) == NULL) {
        return 0;
    }
    return M2C_FIELD(entry, s32 *, 0x9A8) != 0;
}
