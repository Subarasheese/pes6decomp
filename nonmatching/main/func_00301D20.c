/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, void *);
extern s32 func_009E1C90(s32);
extern s32 func_00BD9DF0(void);
extern void func_00301E70(void);

s32 func_00301D20(void *arg0) {
    if ((func_009E1C90(0) & 0xFF) == 4 && func_00BD9DF0() != 0) {
        return 0;
    }
    func_00305E60(arg0, (void *) func_00301E70);
    return 1;
}
