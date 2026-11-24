/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6SceneStack[], D_008DC270[];
extern s8 D_003E9ADC, D_003E9AE4;
extern s32 Pes6SaveData_GetUnavailableFlag(void);
extern void func_008BA360(void), SD_call(u32), func_008BA6C0(void), func_008BB690(void),
    func_008BB210(void), func_008BAC70(void);
extern s32 func_008BB9C0(void);

s32 func_002459D0(void) {
    s8 result = 0;
    if (Pes6SaveData_GetUnavailableFlag()) {
        if (D_003E9ADC != 3)
            func_008BA360();
    } else
        func_008BA360();
    if (Pes6SceneStack[0] != 15 && D_008DC270[D_003E9AE4] == 4) {
        SD_call(0x84028400);
        func_008BA6C0();
        return 11;
    }
    switch (D_003E9ADC) {
    case 0:
        result = func_008BB9C0();
        break;
    case 1:
        func_008BB690();
        break;
    case 2:
        func_008BB210();
        break;
    case 3:
        func_008BAC70();
        break;
    }
    return result;
}
