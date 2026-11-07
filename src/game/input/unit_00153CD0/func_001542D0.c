/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u32 D_0050D4DC[];
s32 func_001542D0(s32 arg0, s32 arg1) {
    return (D_0050D4DC[arg0 * 22] & (1 << arg1)) != 0;
}
