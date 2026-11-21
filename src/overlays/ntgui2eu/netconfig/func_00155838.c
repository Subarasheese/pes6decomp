/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_001558B0(void *);
extern s32 func_001586F0(void);
extern void func_00158A50(void);
extern s32 func_00158B68(void);
extern void func_00159058(void);

extern s32 D_011E0D8C[];

s32 func_00155838(void *arg0) {
    if ((func_001586F0() == 0) && (func_00158B68() == 0)) {
        if (D_011E0D8C[0] > 0) {
            D_011E0D8C[0] -= 1;
            return 0;
        }
        func_00158A50();
        func_00159058();
        M2C_FIELD(arg0, s32(**)(void *), 0x18) = func_001558B0;
        return 0;
    }
    return 0;
}
