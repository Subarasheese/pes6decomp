/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0xc];
    void *widget;
} MenuWidgetItem;
typedef struct {
    MenuWidgetItem **items;
    u32 count;
} MenuWidgetList;
extern s32 func_002F9630(MenuWidgetList *list);
extern MenuWidgetItem *func_002F96F0(MenuWidgetList *list, u32 index);
extern void func_001DF420(void *widget, u8 value);
void func_002FA560(MenuWidgetList *list, s32 value) {
    s32 count = func_002F9630(list);
    s32 index;
    for (index = 0; index < count; index++) {
        MenuWidgetItem *item = func_002F96F0(list, index);
        if (item)
            func_001DF420(item->widget, (u8)value);
    }
}
