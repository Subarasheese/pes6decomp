/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
void *func_0019F650();                              /* extern */
M2C_UNK func_0019FC48(M2C_UNK);                     /* extern */
M2C_UNK func_0019FC78();                            /* extern */
M2C_UNK func_0019FD70();                            /* extern */
s32 func_001A1358(s32, M2C_UNK);                    /* extern */
extern char D_005CABE4[];
extern char D_005CABF0[];
extern char D_01204840[];

s32 func_001A1AD0(s32 arg0) {
    s32 var_a0;
    s32 var_s1;
    void *temp_v0;

    func_0019FC48(9);
    if ((*(s32 *)D_005CABE4) == 0) {
        func_0019FD70();
    }
    func_0019FC78();
    temp_v0 = func_0019F650();
    if (temp_v0 == NULL) {
        return -0x13;
    }
    var_s1 = func_001A1358(arg0, 9);
    if (var_s1 < 0) {
        func_0019B160(M2C_FIELD(((void *)D_005CABF0), s32 *, 0));
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        var_a0 = M2C_FIELD(((void *)D_005CABF0), s32 *, 0);
    } else {
        func_0019B160(M2C_FIELD(((void *)D_005CABF0), s32 *, -0x5410));
        M2C_FIELD(temp_v0, s32 *, 0) = var_s1;
        var_a0 = M2C_FIELD(((void *)D_005CABF0), s32 *, -0x5410);
        var_s1 = (s32) (temp_v0 - ((void *)D_01204840)) >> 4;
    }
    func_0019B140(var_a0);
    return var_s1;
}
