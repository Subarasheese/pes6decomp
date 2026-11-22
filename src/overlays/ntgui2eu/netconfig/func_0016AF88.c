/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00163C30(void *, s32);
s32 func_00164160(s32);
void *func_00165B00(s32);
s32 func_0016A340(void *);
extern char D_005BFCA8[];

s32 func_0016AF88(s32 arg0, s32 arg1) {
    s32 value;
    s32 value2;
    void *entry;

    entry = func_00165B00(arg1);
    if (!((entry != NULL) && (func_00163C30(entry, (*(s32 *)D_005BFCA8)) != 0))) {
        return 0;
    }
    value2 = 0;
    {
        s32 result;
        if ((entry + 0x9A8) != NULL) {
            value = M2C_FIELD(entry, s32 *, 0x9A8);
            if (value == 0) {
                return 0;
            }
            func_00164160(value);
            func_0016A340(entry + 0x9D0);
            M2C_FIELD(entry, s32 *, 0x9A8) = 0;
            value2 = 1;

            result = value2;
        } else {
            result = value2;
        }
        return result;
    }
}
