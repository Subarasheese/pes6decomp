/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 reserved[0x33e68];
    u8 marked[72];
} LeagueSave;
extern LeagueSave *Pes6SaveData_GetBlockE970(void);
void func_00994B40(s32 team) {
    LeagueSave *save = Pes6SaveData_GetBlockE970();
    if (save) {
        s32 index = team & 255;
        if (index < 72)
            save->marked[index] = 0;
    }
}
