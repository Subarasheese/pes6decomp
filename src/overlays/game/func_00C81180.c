/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_001B97B0(void);
extern s32 func_002F9370(void *);
extern int func_001B97A0(void);
extern void func_001B98D0(s32, s8);
extern void func_002FA280(s32, s32, s32, s32, f32 *);
extern void *D_00CCC130[];
extern s8 D_00CCC1B8[];

void func_00C81180(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    f32 v[2];

    func_001B98D0(arg0, D_00CCC1B8[0]);
    v[0] = (f32) func_001B97B0();
    v[1] = (f32) func_001B97A0();
    func_002FA280(arg0, func_002F9370(D_00CCC130[0]), arg2, arg3, v);
}
