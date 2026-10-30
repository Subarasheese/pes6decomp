/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0010A310(void *, s32, s32);            /* extern */
M2C_UNK func_00199DE0(void *);                      /* extern */
M2C_UNK func_00199DF0(void *);                      /* extern */
M2C_UNK func_00199EA0(void *, M2C_UNK);             /* extern */
extern char D_002B9F04[];
extern char D_011B1C30[];

s32 func_0010A408(s32 arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = ((void *)D_011B1C30) + ((*(s32 *)D_002B9F04) << 5);
    (*(s32 *)D_002B9F04) ^= 1;
    func_00199DE0(temp_s0);
    func_0010A310(temp_s0, arg0, arg1);
    func_00199EA0(temp_s0, 0);
    func_00199DF0(temp_s0);
    return M2C_FIELD(temp_s0, s32 *, 4);
}
