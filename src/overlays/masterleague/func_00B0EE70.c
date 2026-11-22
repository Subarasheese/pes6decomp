/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x8];
    void *owner;
    u8 pad_C[0x894];
    void *resource8A0;
    void *resource8A4;
    void *resource8A8;
    void *resource8AC;
    u8 pad_8B0[0xC];
    void *resource8BC;
    void *resource8C0;
    u8 pad_8C4[0x84];
    void *resource948;
    void *resource94C;
    u8 pad_950[0xAC];
    void *resource9FC;
} LeagueMenuResources;

extern void func_001D4E00(void *);
extern s32 func_00957070(void *);
extern void func_009718C0(s32 *);
extern void func_00971E30(void *);
extern void func_00972290(s32 *);
extern s32 func_00973460(void *);
extern LeagueMenuResources *func_00B15370(void);

void func_00B0EE70(void) {
    LeagueMenuResources *menu;

    menu = func_00B15370();
    if ((menu != 0) && (menu->owner != 0)) {
        if (menu->resource8A0) {
            func_00973460(menu->resource8A0);
            menu->resource8A0 = 0;
        }
        if (menu->resource9FC) {
            func_00973460(menu->resource9FC);
            menu->resource9FC = 0;
        }
        if (menu->resource8C0) {
            func_00971E30(menu->resource8C0);
            menu->resource8C0 = 0;
        }
        if (menu->resource8A4) {
            func_00957070(menu->resource8A4);
            menu->resource8A4 = 0;
        }
        if (menu->resource8A8) {
            func_00957070(menu->resource8A8);
            menu->resource8A8 = 0;
        }
        if (menu->resource8AC) {
            func_00957070(menu->resource8AC);
            menu->resource8AC = 0;
        }
        if (menu->resource948) {
            func_00972290(menu->resource948);
            menu->resource948 = 0;
        }
        if (menu->resource94C) {
            func_00972290(menu->resource94C);
            menu->resource94C = 0;
        }
        if (menu->resource8BC) {
            func_009718C0(menu->resource8BC);
            menu->resource8BC = 0;
        }
        func_001D4E00(menu->owner);
        menu->owner = 0;
    }
}
