/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00161038(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_0038DBD0[];
extern char D_0038DBD8[];
extern char D_003CBFD8[];

void func_00175E90(void *arg0, s32 arg1) {
    if (((*(s32 *)D_0038DBD8) != 1) || ((*(s32 *)D_0038DBD0) > 0)) {
        if ((0xBB80 % arg1) != 0) {
            func_00161038(((void *)D_003CBFD8), 1);
        }
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    }
}
