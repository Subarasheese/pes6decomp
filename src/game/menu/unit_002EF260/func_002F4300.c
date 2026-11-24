/* compiler: mwcc-3.0.1b210 */

#include "types.h"
typedef struct {
    f32 x, y;
} MenuPoint;
typedef struct {
    u8 active, reserved01, mode, reserved03[5];
    MenuPoint position;
    u8 reserved10[0x10];
    s32 handle;
} MenuEntry;
typedef struct {
    u8 reserved00, dirty, reserved02[6];
    s8 current;
    u8 reserved09[0xf3];
    MenuEntry banks[2][33];
} MenuEntryBanks;
extern s32 func_002F1490(MenuEntry *entry, MenuPoint *point);

void func_002F4300(MenuEntryBanks *entries, s32 index, MenuPoint *point) {
    if (!entries || !point)
        return;
    index = index > 7 ? 7 : (index < 0 ? 0 : index);
    if (func_002F1490(&entries->banks[(entries->current + 1) % 2][index], point))
        entries->dirty = 1;
}
