/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x44];
    void *previous, *next;
    u8 reserved4C[0xf4];
    void *list;
    u8 reserved144[0x40], first, reserved185[0x3c37];
    s32 selected;
    u8 reserved3DC0[4], count;
} LeagueScrollMenu;
extern LeagueScrollMenu *func_00AE3240(void);
extern s32 func_00972040(void *, s32, s32);
extern void func_001D7D60(void *, s8);
void func_00AE7830(void) {
    LeagueScrollMenu *menu;
    LeagueScrollMenu *arrows;

    menu = func_00AE3240();
    if (menu != 0) {
        func_00972040(menu->list, menu->selected - menu->first, 0);
        arrows = func_00AE3240();
        if (arrows != 0) {
            func_001D7D60(arrows->previous, 1);
            func_001D7D60(arrows->next, 1);
            if (arrows->selected == 0) {
                func_001D7D60(arrows->previous, 0);
            }
            if (arrows->selected == (arrows->count - 1)) {
                func_001D7D60(arrows->next, 0);
            }
        }
    }
}
