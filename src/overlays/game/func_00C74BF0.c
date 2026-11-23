/* compiler: mwcc-3.0.1b210 */
#include "pes6/widget_color.h"

typedef struct {
    u8 reserved[12];
    ColorWidget *widget;
} WidgetHolder;
typedef struct {
    WidgetHolder *holder;
    u8 reserved[3];
    u8 colorIndex;
} Selection;
extern const WidgetColor D_003AB520[];
void func_00C74BF0(Selection *selection, s32 index) {
    if (selection && selection->holder) {
        func_001DF460(selection->holder->widget, &D_003AB520[index]);
        selection->colorIndex = index;
    }
}
