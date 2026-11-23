/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
extern s32 D_00C47970[], D_00C47974[];
extern s32 func_001112D0(s32 alarm);
void func_00C0B5B8(void) {
    if (D_00C47970[0] != -1)
        func_001112D0(D_00C47970[0]);
    D_00C47970[0] = -1;
    D_00C47974[0] = 1;
}
