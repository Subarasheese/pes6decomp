/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u32 D_003EC258[];
u32 func_00108490(u32 arg0, u32 arg1) {
    u32 old = D_003EC258[3];
    D_003EC258[4] = arg1;
    D_003EC258[3] = arg0;
    return old;
}
