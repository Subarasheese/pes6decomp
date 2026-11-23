/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 reserved[0xce22];
    u8 entries[256];
} MasterLeagueSave;
extern void *Pes6SaveData_GetBlockE970(void);
u8 func_00B01300(s32 id) {
    MasterLeagueSave *save = Pes6SaveData_GetBlockE970();
    if ((u32)save == 0)
        return 255;
    return save->entries[id & 255];
}
