/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s32 id;
    u8 levels[2], reserved6[6];
} NetMatchSlot;
extern void *func_001C47E0(void *, const void *, u32);
typedef struct {
    s32 active;
    NetMatchSlot slots[];
} NetMatchState;
extern NetMatchState D_008B1E80;
void func_00855120(const u8 *levels) {
    func_001C47E0(D_008B1E80.slots[D_008B1E80.active].levels, levels, 2);
}
