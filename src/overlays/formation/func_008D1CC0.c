/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 before[11], active, hidden, reserved0D[0x1d8 - 13];
    void *item;
} FormationEntry;
extern void func_008B9A90(void *, s32);
void func_008D1CC0(FormationEntry *entry, s32 visible) {
    entry->hidden = (visible != 0) ^ 1;
    if (entry->active == 1) {
        if (entry->hidden != 0)
            func_008B9A90(entry->item, 0);
        else
            func_008B9A90(entry->item, 1);
    }
}
