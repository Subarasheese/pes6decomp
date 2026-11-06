/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern s32 D_003E74CC;

s32 func_00208330(s32 arg0) {
    s32 *p = (s32 *)D_003E74CC;
    return p[(arg0 & 0xFFFF) + 1];
}
