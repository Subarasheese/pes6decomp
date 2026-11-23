/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved[0xc];
    void *widget;
} LabelHandle;
typedef struct {
    s32 font;
    LabelHandle *labels[2];
    u8 color[4];
    u8 pad10[0x10];
    u8 layout[2][0x10];
    u8 pad40[0x10];
    s8 styles[2][2];
    s8 entry;
    u8 dirty;
} LabelPair;
extern void func_001DF820(void *, const void *), func_001DF2F0(void *), func_001DED10(void *, s8);
extern void *func_001C47E0(void *, const void *, u32);
extern void func_001D6D70(s32, s32, void *);
extern u16 D_008B2550[];
s32 func_008864F0(LabelPair *pair, const void *first, const void *second, const void *color) {
    if (first) {
        LabelHandle *label = pair->labels[0];
        if (label) {
            func_001DF820(label->widget, first);
            func_001D6D70(pair->font, pair->styles[0][0], pair->layout[0]);
            if (color)
                func_001C47E0(pair->color, color, 4);
            if (pair->styles[0][1])
                func_001DF2F0(pair->labels[0]->widget);
            func_001DED10(pair->labels[0]->widget, 1);
        }
    }
    if (second) {
        LabelHandle *label = pair->labels[1];
        if (label) {
            func_001DF820(label->widget, second);
            func_001D6D70(pair->font, pair->styles[1][0], pair->layout[1]);
            if (color)
                func_001C47E0(pair->color, color, 4);
            if (pair->styles[1][1])
                func_001DF2F0(pair->labels[1]->widget);
            func_001DED10(pair->labels[1]->widget, 1);
        }
    }
    D_008B2550[0] |= (u16)(1 << pair->entry);
    pair->dirty = 0;
    return 0;
}
