/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 func_00154160(s32, s32);
extern s32 D_008A4250[];

u8 func_0081E4D0(void) {
    if (D_008A4250[0] != 1) {
        return 0U;
    }
    return func_00154160(0, 0x13);
}
