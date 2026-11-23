/* compiler: mwcc-3.0.1b210 */

#include "types.h"

typedef struct {
    u8 reserved00[12];
    void *root;
    u8 reserved10[0xb04];
    s32 *list;
    u8 reservedB18[0xb8];
    void *children[2];
} MasterLeaguePanel;
extern MasterLeaguePanel *func_00B15370(void);
extern void func_001D7F10(void *);
extern void func_00972290(s32 *);
extern void func_001D4E00(void *);
void func_00B0EDF0(void) {
    s32 i;
    MasterLeaguePanel *menu;
    menu = func_00B15370();
    if (menu) {
        for (i = 0; i < 2; i++) {
            void *widget = menu->children[i];
            if (widget) {
                func_001D7F10(widget);
                menu->children[i] = 0;
            }
        }
        func_00972290(menu->list);
        func_001D4E00(menu->root);
    }
}
