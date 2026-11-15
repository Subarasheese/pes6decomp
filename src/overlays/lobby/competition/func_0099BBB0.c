/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6File_AllChannelsIdle(void);
s32 func_0099BBB0(void) {
    return Pes6File_AllChannelsIdle() != 0;
}
