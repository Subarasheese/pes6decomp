/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001B97B0(void);
extern s32 func_002F9370(void *);
extern int func_001B97A0(void);
M2C_UNK func_001B98D0(s8);                          /* extern */
M2C_UNK func_002FA280(s32, s32, s32, s32, f32 *);   /* extern */
extern void *D_00CCC130;
extern char D_00CCC1B8[];

void func_00C81180(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    f32 sp48;
    f32 sp4C;

    func_001B98D0((*(s8 *)D_00CCC1B8));
    sp48 = (f32) func_001B97B0();
    sp4C = (f32) func_001B97A0();
    func_002FA280(arg0, func_002F9370(D_00CCC130), arg2, arg3, &sp48);
}
