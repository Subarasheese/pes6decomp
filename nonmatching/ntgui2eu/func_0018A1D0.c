/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018A268(s32 *, M2C_UNK *, M2C_UNK);   /* extern */
extern char D_005C5990[];
extern char D_005C5994[];
extern char D_005C5998[];

void *func_0018A1D0(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;
    u16 *temp_v1;

    var_s0 = arg0;
    if (var_s0 & 0x80) {
        var_s0 = (var_s0 & 0xFFFFFF7F) + (*(s32 *)D_005C5994);
    }
    temp_v0 = (*(s32 *)D_005C5990);
    if (temp_v0 == 0) {
        func_0018A268(((void *)D_005C5990), ((void *)D_005C5998), 0x63);
    }
    temp_v1 = (var_s0 * 2) + temp_v0;
    if (*temp_v1 != 0) {
        return *temp_v1 + ((void *)D_005C5998);
    }
    return NULL;
}
