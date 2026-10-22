/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_0061C700[];

s32 func_00351EF0(s32 arg0) {
    return *(u8 *)(*(s32 *)D_0061C700 + arg0 * 5);
}
