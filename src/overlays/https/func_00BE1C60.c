/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00B9F690(s32);
s32 func_00BC0778(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK func_00BC0A88(void *);
M2C_UNK func_00BE0280(s32);
M2C_UNK func_00BE1BD0(s32);
extern char D_00C4E608[];

void func_00BE1C60(void *arg0) {
    if (arg0 != NULL) {
        if (func_00BC0778(arg0 + 0xC, -1, 6, ((void *)D_00C4E608), 0x115) <= 0) {
            func_00BE1BD0(M2C_FIELD(arg0, s32 *, 0));
            func_00BE0280(M2C_FIELD(arg0, s32 *, 4));
            func_00B9F690(M2C_FIELD(arg0, s32 *, 8));
            func_00BC0A88(arg0);
        }
    }
}
