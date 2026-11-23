/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
extern void func_00105370(s32);
extern s32 D_00CDBC60;
u64 func_00C0B970(void) {
    if (D_00CDBC60 != (-1)) {
        func_00105370(D_00CDBC60);
    }
    D_00CDBC60 = -1;
    return 0;
}
