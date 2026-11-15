/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0017F900();                                /* extern */
M2C_UNK func_001A17A0();                            /* extern */
M2C_UNK func_001A1820();                            /* extern */
s32 func_001A1B00();                                /* extern */
s32 func_001A31D0();                                /* extern */
s32 func_002CB060();                                /* extern */
M2C_UNK func_002CB0E0();                            /* extern */
extern char D_0058D7A4[];
extern char Pes6MatchSelect_LoadSequenceState[];

s32 Pes6MatchSelect_LoadSequence(s32 arg0) {
    s32 var_s0;

    var_s0 = 0;
    switch ((*(s32 *)Pes6MatchSelect_LoadSequenceState)) {                           /* irregular */
    case 0:
        func_002CB0E0();
        (*(s32 *)Pes6MatchSelect_LoadSequenceState) += 1;
        /* fallthrough */
    case 1:
        if (func_001A1B00() != 0) {
            (*(s32 *)Pes6MatchSelect_LoadSequenceState) += 1;
        }
        break;
    case 2:
        if (func_0017F900() != 0) {
            (*(s32 *)Pes6MatchSelect_LoadSequenceState) += 1;
        case 3:
            func_001A1820();
            func_001A17A0();
            (*(s32 *)Pes6MatchSelect_LoadSequenceState) += 1;
            if (arg0 == 0) {
            case 4:
                if ((func_001A31D0() != 0) && (func_002CB060() != 0)) {
                    (*(s8 *)D_0058D7A4) = 1;
                    (*(s32 *)Pes6MatchSelect_LoadSequenceState) += 1;
                default:
                    var_s0 = 1;
                }
            }
        }
        break;
    }
    return var_s0;
}
