/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_00A7E258[];
extern s32 D_00A7E25C[];

s32 func_009F49B0(void) {
    if ((D_00A7E258[0] & 1) == 1) {
        return D_00A7E25C[0];
    }
    return -1;
}
