/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[12];
    void *label;
} EntryWidget;
typedef struct {
    void *widgets, *labels;
    u8 transition[8];
    u8 reserved10[0x2c - 0x10];
    unsigned char active : 1, labelsOpen : 1;
} EntryScreen;
extern void func_001D7D60(void *, s8), func_001DF4F0(void *, s8), func_001EDAE0(void *, s8);
extern void func_001D76B0(void *, u32), func_001DF420(void *, u8), func_001ED8F0(void *, s32);
extern void func_002D5930(void *, s16, s16);
extern s32 func_002F9630(void *group);
extern EntryWidget *func_002F96F0(void *group, s32 index);
static inline void *entryLabel(void *group, s32 index) {
    void *label = 0;
    EntryWidget *widget = func_002F96F0(group, index);
    if (widget)
        label = widget->label;
    return label;
}
extern s32 D_003EA5E4;
extern EntryScreen *D_003EA5E8[2];
s32 func_00923F70(void) {
    s32 count, widgetIndex;
    if (D_003EA5E8[D_003EA5E4]->active) {
        count = func_002F9630(D_003EA5E8[D_003EA5E4]->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D7D60(func_002F96F0(D_003EA5E8[D_003EA5E4]->widgets, widgetIndex), 1);
        if (D_003EA5E8[D_003EA5E4]->labelsOpen) {
            func_001EDAE0(entryLabel(D_003EA5E8[D_003EA5E4]->labels, 0), 1);
        }
        {
            func_001DF4F0(entryLabel(D_003EA5E8[D_003EA5E4]->labels, 1), 1);
        }
    }
    if (D_003EA5E8[D_003EA5E4]->active) {
        count = func_002F9630(D_003EA5E8[D_003EA5E4]->widgets);
        for (widgetIndex = 0; widgetIndex < count; ++widgetIndex)
            func_001D76B0(func_002F96F0(D_003EA5E8[D_003EA5E4]->widgets, widgetIndex), 0);
        {
            func_001ED8F0(entryLabel(D_003EA5E8[D_003EA5E4]->labels, 0), 0);
        }
        {
            func_001DF420(entryLabel(D_003EA5E8[D_003EA5E4]->labels, 1), 0);
        }
    }
    func_002D5930(D_003EA5E8[D_003EA5E4]->transition, 255, 15);
    return 1;
}
