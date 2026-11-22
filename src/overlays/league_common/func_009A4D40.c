/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 count;
    u8 pad_1[0x7];
    s32 selection;
    s32 table;
} LeagueSelection;

s32 func_009A48B0(s32, s32);
s32 func_009A79E0(s32, s32);
extern LeagueSelection *func_009A84E0(void);

void func_009A4D40(s32 selection) {
    s32 entry;
    LeagueSelection *view;

    view = func_009A84E0();
    if (view != 0) {
        entry = func_009A48B0(view->table, selection);
        if (entry != 0) {
            view->selection = func_009A79E0(view->selection, entry);
            view->count = (u8)(view->count + 1);
        }
    }
}
