/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    void *widgets, *labels;
    u8 reserved08[0x18];
    unsigned char active : 1;
    unsigned char labelsOpen : 1;
} EntryScreen;
extern s32 D_003EA5DC;
extern EntryScreen *D_003EA5E0[2];
extern void func_002F9650(void *group, s32 index);
extern void func_002F97A0(void *group);
extern s32 func_002F9630(void *group);
extern void *func_002F96F0(void *group, s32 index);
extern void func_001D7F10(void *widget);
void func_00921E00(void) {
    s32 i;
    s32 count;
    if (D_003EA5E0[D_003EA5DC]->active) {
        for (i = 1; i <= 3; ++i)
            func_002F9650(D_003EA5E0[D_003EA5DC]->labels, i);
        func_002F9650(D_003EA5E0[D_003EA5DC]->labels, 0);
        D_003EA5E0[D_003EA5DC]->labelsOpen = 0;
        func_002F97A0(D_003EA5E0[D_003EA5DC]->labels);
        D_003EA5E0[D_003EA5DC]->labels = 0;
        count = func_002F9630(D_003EA5E0[D_003EA5DC]->widgets);
        for (i = 0; i < count; ++i)
            func_001D7F10(func_002F96F0(D_003EA5E0[D_003EA5DC]->widgets, i));
        func_002F97A0(D_003EA5E0[D_003EA5DC]->widgets);
        D_003EA5E0[D_003EA5DC]->widgets = 0;
        D_003EA5E0[D_003EA5DC]->active = 0;
    }
    D_003EA5E0[D_003EA5DC] = 0;
}
