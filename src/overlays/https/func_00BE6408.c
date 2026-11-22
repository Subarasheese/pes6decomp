/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BECBF8(void *);
void *func_00BF5D40(M2C_UNK);
extern char D_00C40B20[];

s32 func_00BE6408(void **arg0) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00BF5D40(0x38);
    var_v0 = 0x206;
    *arg0 = temp_v0;
    if (temp_v0 != NULL) {
        func_00BECBF8(temp_v0);
        M2C_FIELD(temp_v0, void **, 0x34) = temp_v0;
        M2C_FIELD(temp_v0, M2C_UNK **, 0x30) = ((void *)D_00C40B20);
        var_v0 = 0;
    }
    return var_v0;
}
