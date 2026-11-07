/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s8 *D_003E74CC;
s32 func_00A9E050(u16 arg0, u16 arg1) {
    return ((s32) (arg1 * 0xB6) / ((s32 *)(D_003E74CC + 0x2FD8))[arg0]) & 0xFFFF;
}
