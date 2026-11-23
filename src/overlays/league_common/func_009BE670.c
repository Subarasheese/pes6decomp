/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "types.h"
typedef struct {
    u8 reserved[0x50];
    void *widget;
    u8 reserved54[0x28];
    s32 state;
} LeagueWidget;
extern LeagueWidget *D_003EA9CC;
extern void func_009737C0(void *, s32), func_009737E0(void *, s32, s32);
void func_009BE670(s32 value) {
    LeagueWidget *page = D_003EA9CC;
    if (page && page->state != 1) {
        func_009737C0(page->widget, 1);
        func_009737E0(page->widget, 0, value);
    }
}
