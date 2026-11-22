/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00CD7A00(s32);

extern s32 D_003E7E38;

void func_00CEC550(s32 arg0) {
    if (D_003E7E38 == 0x2B) {
        D_003E7E38 = arg0;
        func_00CD7A00(arg0);
    }
}
