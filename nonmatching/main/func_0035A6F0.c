/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0035A410();                            /* extern */
extern M2C_UNK *D_003E9FBC;
extern char D_00591BD1[];
extern char D_0061C740[];

void func_0035A6F0(u8 arg0) {
    u8 var_s0;

    if ((D_003E9FBC == NULL) && (D_003E9FBC == NULL)) {
        var_s0 = arg0;
        if (arg0 == 0) {
            var_s0 = (*(u8 *)D_00591BD1);
        }
        D_003E9FBC = ((void *)D_0061C740);
        func_001C48E8(((void *)D_0061C740), 0, 0x24);
        M2C_FIELD(D_003E9FBC, s32 *, 4) = (s32) var_s0;
        func_0035A410();
    }
}
