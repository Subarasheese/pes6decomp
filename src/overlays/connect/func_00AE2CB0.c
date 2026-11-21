/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00AE40D0(s32);
extern s8 *D_00B00C30[];

s32 func_00AE2CB0(void) {
    func_00AE40D0(((s32 *)(D_00B00C30[0]))[8]);
    ((s32 *)(D_00B00C30[0]))[8] = 0;
    return 1;
}
