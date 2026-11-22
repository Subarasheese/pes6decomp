/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x1C];
    s32 group;
    u8 mode;
} TrainingSelection;

u8 func_00CD01F0(s32, s32, u8);
extern u8 *func_00CDCB90(void);
s8 func_00CE8B20(s32);

void func_00CEDC90(TrainingSelection *selection) {
    s32 side;
    s32 index;
    u8 *entries;

    entries = func_00CDCB90();
    side = 0;
    do {
        entries[side] = func_00CD01F0(side, selection->group, selection->mode);
        side += 1;
    } while (side < 2);
    index = 0;
    if ((s32)*entries > 0) {
        do {
            entries[2 + index] = func_00CE8B20(index);
            index += 1;
        } while (index < (s32)*entries);
    }
}
