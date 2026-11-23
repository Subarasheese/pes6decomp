/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 reserved[0x1541];
    u8 flags[2];
} LeagueSaveHeader;
extern void *Pes6SaveData_GetHeaderBlock(void);
u8 func_009846F0(s32 index) {
    LeagueSaveHeader *header = Pes6SaveData_GetHeaderBlock();
    if ((u32)header == 0U) {
        return 0;
    } else {
        return header->flags[(s32)(index & 255) % 2];
    }
}
