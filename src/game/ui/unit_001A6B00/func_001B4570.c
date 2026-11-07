/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00151FF0(s32);                         /* extern */
s32 func_0017F900();                                /* extern */
M2C_UNK func_00182AB0(M2C_UNK);                     /* extern */
M2C_UNK func_00182AC0(M2C_UNK);                     /* extern */
M2C_UNK func_001A89C0();                            /* extern */
M2C_UNK func_001BD040();                            /* extern */
M2C_UNK func_001BD090();                            /* extern */
M2C_UNK func_001DD910(M2C_UNK);                     /* extern */
M2C_UNK func_001FC780(M2C_UNK);                     /* extern */
M2C_UNK func_0026D4B0(M2C_UNK);                     /* extern */
M2C_UNK func_0027CD00(M2C_UNK);                     /* extern */
M2C_UNK func_0027CD10(M2C_UNK);                     /* extern */
M2C_UNK func_002CA8C0();                            /* extern */
s32 func_002D32A0();                                /* extern */
M2C_UNK func_002D3740();                            /* extern */
M2C_UNK func_00351FB0();                            /* extern */
M2C_UNK func_003521E0();                            /* extern */
extern char D_00510FD4[];
extern char D_00522890[];

s32 func_001B4570(void) {
    s32 var_s0;

    var_s0 = 0;
    switch ((*(s32 *)D_00522890)) {                           /* irregular */
    case 0:
        func_001DD910(0x19);
        func_0026D4B0(2);
        func_001A89C0();
        func_001BD090();
        func_00182AC0(5);
        func_00182AB0(1);
        func_0027CD10(1);
        func_0027CD00(0xC);
        func_002D3740();
        func_003521E0();
        func_00351FB0();
        (*(s32 *)D_00522890) += 1;
        /* fallthrough */
    case 1:
        if ((func_0017F900() != 0) && (func_002D32A0() == 0)) {
            func_001FC780(3);
            func_002CA8C0();
            (*(s32 *)D_00522890) += 1;
        case 2:
            if (func_0017F900() != 0) {
                (*(s32 *)D_00522890) += 1;
            case 3:
                func_001BD040();
                func_00151FF0((s32) func_001B4570 * (*(s32 *)D_00510FD4));
                (*(s32 *)D_00522890) += 1;
            default:
                var_s0 = 1;
            }
        }
        break;
    }
    return var_s0;
}
