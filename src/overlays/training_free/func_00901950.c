/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 SD_call(s32);
extern s8 *D_003AE9D0[];
extern void func_00901ED0(s32);

s32 func_00901950(void) {
    SD_call(-0x7BFF07FD);
    func_00901ED0((1 - ((s32 *)(D_003AE9D0[0]))[0x10]));
    return 0;
}
