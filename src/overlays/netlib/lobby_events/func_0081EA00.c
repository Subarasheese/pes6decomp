/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00154490(s32, s32);
extern s32 D_008A4250[];
extern u8 D_008A4260[];

s32 func_0081EA00(void) {
    if (D_008A4250[0] != 1) {
        return (func_00154490(1, 8) != 0) ? 1 : D_008A4260[0] == 1;
    }
    return 0;
}
