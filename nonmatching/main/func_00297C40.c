/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_0027B5C0(int);
extern void func_0027C230(s32, s32);
extern s32 (*D_003AAF60[])(s32);

void func_00297C40(s32 arg0, s32 arg1) {
    if (arg0 == 0x26) {
        arg0 += D_003AAF60[0](arg1) & 0xFF;
    }
    func_0027C230(func_0027B5C0(arg0), 0);
}
