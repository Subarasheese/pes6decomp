/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00226710(void);
extern s32 Pes6SaveData_IsUnavailable(void);

s32 func_00237B20(void) {
    s32 result;
    u8 kind;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    kind = func_00226710();
    switch (kind) {
    case 9:
    case 10:
    case 8:
    case 17:
    case 38:
    case 45:
    case 57:
        result = 1;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
