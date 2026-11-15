/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern s32 D_003EAA4C;

s32 func_00934400(void) {
    if ((Pes6File_AllChannelsIdle() == 1) && (D_003EAA4C == 0)) {
        return 1;
    }
    return 0;
}
