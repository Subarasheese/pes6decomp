/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_002D5410();                                /* extern */
M2C_UNK func_002D5440();                            /* extern */
M2C_UNK func_0035A410();                            /* extern */
extern M2C_UNK *D_003E9FBC;
extern char D_00591BD1[];
extern char D_0061C740[];

void func_0035A760(void) {
    s32 var_s0;

    func_002D5440();
    var_s0 = func_002D5410();
    if ((D_003E9FBC == NULL) && (D_003E9FBC == NULL)) {
        if (var_s0 == 0) {
            var_s0 = (s32) (*(u8 *)D_00591BD1);
        }
        D_003E9FBC = ((void *)D_0061C740);
        func_001C48E8(((void *)D_0061C740), 0, 0x24);
        M2C_FIELD(D_003E9FBC, s32 *, 4) = var_s0;
        func_0035A410();
    }
}
