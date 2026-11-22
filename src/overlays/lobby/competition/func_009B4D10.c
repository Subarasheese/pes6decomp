/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00213800(s32, s32);
extern s8 *D_003EAD20;

s32 func_009B4D10(s32 arg0) {
    return func_00213800(*(s32 *)(D_003EAD20), (arg0 & 0xFF));
}
