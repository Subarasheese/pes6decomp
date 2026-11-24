/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

extern s32 func_00226710(void);
extern u8 func_00229D70(void);

u8 func_0022B890(void) {
    u8 kind, result;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    kind = func_00226710();
    switch (kind) {
    case 38:
        result = 6;
        break;
    case 39:
        result = 5;
        break;
    case 29:
        result = (u8)func_00229D70();
        break;
    case 33:
        result = 4;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
