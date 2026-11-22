/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern void func_00BCA020(void);

extern char D_00C3F6A0[];

s32 func_00BCA060(void) {
    func_00BCA020();
    return (s32)((void *)D_00C3F6A0);
}
