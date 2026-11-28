/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[12];
    void *label;
} EntryWidget;
typedef struct {
    void *widgets, *labels;
    u8 transition[8];
    u8 reserved10[0x120 - 0x10];
    unsigned char active : 1, labelsOpen : 1;
} EntryScreen;
extern void func_001D7D60(void *, s8), func_001DF4F0(void *, s8), func_001EDAE0(void *, s8);
extern void func_001D76B0(void *, u32), func_001DF420(void *, u8), func_001ED8F0(void *, s32);
extern void func_002D5930(void *, s16, s16);
extern s32 func_002F9630(void *group);
extern EntryWidget *func_002F96F0(void *group, s32 index);
extern s32 D_003EA5CC;
extern EntryScreen *D_003EA5D0[2];
s32 func_0091D6F0(void) {
    s32 count, i, j, k, l, count2;
    if (D_003EA5D0[D_003EA5CC]->active) {
        count = func_002F9630(D_003EA5D0[D_003EA5CC]->widgets);
        for (i = 0; i < count; ++i)
            func_001D7D60(func_002F96F0(D_003EA5D0[D_003EA5CC]->widgets, i), 1);
        if (D_003EA5D0[D_003EA5CC]->labelsOpen) {
            {
                void *label = 0;
                EntryWidget *widget = func_002F96F0(D_003EA5D0[D_003EA5CC]->labels, 0);
                if (widget)
                    label = widget->label;
                func_001EDAE0(label, 1);
            }
        }
        for (j = 1; j <= 52; ++j) {
            void *label = 0;
            EntryWidget *widget = func_002F96F0(D_003EA5D0[D_003EA5CC]->labels, j);
            if (widget)
                label = widget->label;
            func_001DF4F0(label, 1);
        }
    }
    if (D_003EA5D0[D_003EA5CC]->active) {
        count = func_002F9630(D_003EA5D0[D_003EA5CC]->widgets);
        for (i = 0; i < count; ++i)
            func_001D76B0(func_002F96F0(D_003EA5D0[D_003EA5CC]->widgets, i), 255);
        {
            void *label = 0;
            EntryWidget *widget = func_002F96F0(D_003EA5D0[D_003EA5CC]->labels, 0);
            if (widget)
                label = widget->label;
            func_001ED8F0(label, 255);
        }
        for (k = 1; k <= 52; ++k) {
            void *label = 0;
            EntryWidget *widget = func_002F96F0(D_003EA5D0[D_003EA5CC]->labels, k);
            if (widget)
                label = widget->label;
            func_001DF420(label, 255);
        }
    }
    return 1;
}
