/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern char D_00C9F240[];

s32 func_00C22960(void) {
    if (Pes6File_AllChannelsIdle() == 0) {
        return 0;
    }
    (*(s32 *)D_00C9F240) = 0;
    return 1;
}
