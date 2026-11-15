/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u32 Pes6File_Channels[];
u32 Pes6File_GetChannelBusy(s32 arg0) {
    return *(u32 *)((u8 *)Pes6File_Channels + arg0 * 8);
}
