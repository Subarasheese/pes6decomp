/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_002F96F0(s32, s32);
s32 func_002F9F20(s32, s32, s32, s32, s32, s32);
extern s32 D_003EA548;
extern s32 *D_003EA54C[2];

void func_0091B050(s32 arg0, s32 unused1, s32 arg2, s32 arg3) {
    func_002F9F20(arg0, M2C_FIELD(D_003EA54C[D_003EA548], s32 *, 0x28), 0,
                  func_002F96F0(*D_003EA54C[D_003EA548], 0), arg2, arg3);
}
