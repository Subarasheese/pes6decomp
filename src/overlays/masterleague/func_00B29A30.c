/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void SD_call(u32);
extern void func_00B274C0(s32);
extern void func_00B29060(void);
typedef struct {
    u8 reserved[0xd0];
    u8 selection;
} LeagueMenu;
extern LeagueMenu *func_00B2A1C0(void);

s32 func_00B29A30(void) {
    u8 selection;
    LeagueMenu *menu;

    menu = func_00B2A1C0();
    if (!menu) {
        return 0;
    }
    selection = menu->selection;
    switch (selection) {
    case 1:
        func_00B274C0(0);
        break;
    case 2:
        func_00B274C0(1);
        break;
    case 3:
        func_00B274C0(2);
        break;
    case 4:
        func_00B274C0(3);
        break;
    case 5:
        func_00B274C0(4);
        break;
    case 6:
        func_00B274C0(5);
        break;
    case 7:
        func_00B274C0(6);
        break;
    case 8:
        func_00B274C0(7);
        break;
    case 9:
        func_00B274C0(8);
        break;
    }
    func_00B29060();
    SD_call(0x84008401);
    return 0;
}
