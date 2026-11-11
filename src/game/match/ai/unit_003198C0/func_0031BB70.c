/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_003421E0(s32);
extern s32 func_0030DBA0(void);
extern s32 func_00338570(void);
extern void Pes6Job_SetDone(int);
extern s32 Pes6Job_GetArg(s32, s32);
void func_003387E0(s32);
extern s8 D_003E9F54;

s32 func_0031BB70(s32 arg0) {
    if (func_0030DBA0() != 0) {
        return 0;
    }
    func_00338570();
    D_003E9F54 = 0;
    func_003387E0(4);
    func_003421E0(Pes6Job_GetArg(arg0, 0));
    Pes6Job_SetDone(arg0);
    return 0;
}
