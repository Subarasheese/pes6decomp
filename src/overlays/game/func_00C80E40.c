/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002F9370(void *);
void func_002F9F20(s32, s32, s32, s32, s32, s32);
extern void *D_00CCC130[];
extern s32 D_00CCC1A8[];

void func_00C80E40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 t;

    t = D_00CCC1A8[0];
    func_002F9F20(arg0, t, 0, func_002F9370(D_00CCC130[0]), arg2, arg3);
}
