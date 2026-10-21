/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001A2C10(s32);                         /* extern */
extern char D_00520384[];

void func_001A2BD0(void *arg0) {
    (*(s32 *)D_00520384) = M2C_FIELD(arg0, s32 *, 0x44);
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_001A2C10((s32)arg0);
    }
}
