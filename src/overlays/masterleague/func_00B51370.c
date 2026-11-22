/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0xbd8];
    void *previous, *next;
    u8 reservedBE0[0x131];
    u8 mode, reservedD12[3], count, reservedD16, first;
    u8 reservedD18[0x5c];
    void *list;
} LeagueScrollMenu;
extern LeagueScrollMenu *func_00B526C0(void);
extern s32 func_00972040(void *, s32, s32);
extern void func_001D7D60(void *, s8);
void func_00B51370(s32 selection) {
    s32 position;
    s32 last;
    s32 selected;
    u8 count;
    LeagueScrollMenu *menu;
    LeagueScrollMenu *arrows;

    menu = func_00B526C0();
    if (menu != 0) {
        count = menu->count;
        if ((s32)count > 0) {
            selected = selection & 0xFF;
            if (selected < (s32)count) {
                func_00972040(menu->list, 0, selected - menu->first);
            }
        }
        if ((u32)(menu->mode - 1) < 2U) {
            arrows = func_00B526C0();
            if (arrows != 0) {
                last = (arrows->count - 1) & 0xFF;
                func_001D7D60(arrows->previous, 1);
                func_001D7D60(arrows->next, 1);
                position = selection & 0xFF;
                if (position <= 0) {
                    func_001D7D60(arrows->previous, 0);
                }
                if (position >= (last & 0xFF)) {
                    func_001D7D60(arrows->next, 0);
                }
            }
        }
    }
}
