/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK func_001A5E00(M2C_UNK);                     /* extern */

typedef struct { char pad[0x30]; s32 f; } S30;
s32 func_00CCE460(S30 *arg0) {
    if (arg0->f == 0) {
        func_001A5E00(2);
        func_001A5E00(1);
        M2C_FIELD(arg0, s32 *, 0x30) = 1;
    }
    return 1;
}
