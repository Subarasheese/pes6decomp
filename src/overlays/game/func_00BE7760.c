/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00BD3BA0(void **, s32, s32);
extern void func_00BD4040(void **, s32);

void func_00BE7760(void **arg0) {
    func_00BD4040(arg0, 4);
    func_00BD3BA0(arg0, 4, 1);
    M2C_FIELD(*arg0, s16 *, 0x18) = 0x88;
}
