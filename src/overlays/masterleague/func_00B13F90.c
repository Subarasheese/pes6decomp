/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s8 D_003EADFC;

void func_00B13F90(u8 arg0) {
    if ((arg0 & 0xFF) < 0x20) {
        D_003EADFC = arg0;
    }
}
