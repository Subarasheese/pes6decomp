#include "pes6/m2c.h"
s32 iSignalSema(s32);                             /* extern */
M2C_UNK printf(M2C_UNK *);                   /* extern */
extern char D_003DCB48[];
extern char D_005E99A0[];

void func_002FADB8(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0xC);
    if (iSignalSema((*(s32 *)D_005E99A0)) < 0) {
        printf(((void *)D_003DCB48));
    }
}
