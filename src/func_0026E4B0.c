/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00251740(s32, s32);                    /* extern */
M2C_UNK func_002FC700(s32, s32, s32);               /* extern */
s32 func_00306170(s32);                             /* extern */
extern s32 D_003E9C78;

void func_0026E4B0(s32 arg0, s32 arg1) {
    func_002FC700(D_003E9C78, arg0, arg1);
    func_00251740(arg0, func_00306170(arg1));
}
