/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9B34;
extern s32 D_00583330[];
extern void func_00155A10(void);
extern void func_00155A00(void);
extern void func_00165968(s32 a);

s32 func_0024EFC0(s32 idx) {
    if ((D_003E9B34 != 0) ^ 1) {
        return 0;
    }
    func_00155A10();
    func_00165968(D_00583330[idx]);
    func_00155A00();
    return 0;
}
