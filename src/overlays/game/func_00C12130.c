/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_00CBFA8C[];

s32 func_00C12130(s32 arg0) {
    return D_00CBFA8C[arg0 & 0xFF];
}
