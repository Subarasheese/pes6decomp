/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u32 D_0050D4C4[];
s32 func_00154490(s32 arg0, s32 arg1) {
    return (D_0050D4C4[arg0 * 22] & arg1) == arg1;
}
