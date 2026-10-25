/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 D_003E99EC;
extern s32 D_003E99F0;

s32 func_0020E290(void) {
    D_003E99EC = D_003E99EC + 1.0f;
    if (D_003E99EC > 120.0f) {
        D_003E99EC = D_003E99EC - 120.0f;
        D_003E99F0 = (D_003E99F0 + 1) % 65536;
    }
    return 0;
}
