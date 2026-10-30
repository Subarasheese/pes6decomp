/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0();                            /* extern */
s32 func_0026DA40(M2C_UNK);                         /* extern */
s32 func_00CEBB40();                                /* extern */
M2C_UNK func_00CEC510();                            /* extern */
s32 func_00CED260();                                /* extern */
extern void *D_003E7E1C;
extern char D_00CFEF78[];

s32 func_00CE2050(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 2:
        if (func_0026DA40(1) == 0) {
            func_002646E0(arg0);
        }
        break;
    case 0:
        if (func_00CEBB40() != 0) {
            func_002646E0(arg0);
        }
        break;
    case 1:
        func_00CEC510();
        func_002646E0(arg0);
        break;
    case 3:
        if (func_00CED260() != 0) {
            var_s0 = 1;
            M2C_FIELD(D_003E7E1C, s32 *, 4) = 1;
            (*(s32 *)D_00CFEF78) = 0;
            M2C_FIELD(D_003E7E1C, s32 *, 0) = 0;
            func_002646E0(arg0);
        }
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
