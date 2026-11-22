/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001BC360(s32);
extern void func_0026B580(s32 *, s32, s32);

extern s32 *D_003EA6C0;

void func_008FAD70(s32 arg0) {
    func_001BC360(M2C_FIELD(D_003EA6C0, s32 *, 0x14));
    func_0026B580(D_003EA6C0, 5, arg0);
}
