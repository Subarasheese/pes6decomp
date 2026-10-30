/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0();                            /* extern */
s32 func_00CDCCB0();                                /* extern */
M2C_UNK func_00CE4210();                            /* extern */
M2C_UNK func_00CE9B20();                            /* extern */
M2C_UNK func_00CE9E40();                            /* extern */
M2C_UNK func_00CEC550(M2C_UNK);                     /* extern */
M2C_UNK func_00CECDE0();                            /* extern */
extern void *D_003E7E1C;
extern M2C_UNK func_00CDD320;
extern M2C_UNK func_00CEC060;

s32 func_00CDD730(s32 arg0) {
    M2C_UNK *var_v0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;
    void *temp_s0;

    var_s1 = 0;
    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_s1 = 1;
        break;
    case 0:                                         /* switch 1 */
        func_00CEC550(0x26);
        temp_s0 = D_003E7E1C;
        temp_v0 = func_00CDCCB0();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
        case 2:                                     /* switch 2 */
        case 0:                                     /* switch 2 */
            var_v0 = &func_00CDD320;
            break;
        default:                                    /* switch 2 */
        case 3:                                     /* switch 2 */
            var_v0 = &func_00CEC060;
            break;
        }
        M2C_FIELD(temp_s0, M2C_UNK **, 0x188) = var_v0;
        func_00CE9E40();
        func_00CE9B20();
        func_00CECDE0();
        func_002646E0(arg0);
        func_00CE4210();
        break;
    default:                                        /* switch 1 */
        var_s1 = 1;
        break;
    }
    func_002648E0(arg0);
    return var_s1;
}
