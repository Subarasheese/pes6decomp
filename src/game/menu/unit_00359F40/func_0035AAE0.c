/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    void *widgets, *labels;
    u8 reserved08[0x26c];
    unsigned char active : 1;
    unsigned char labelsOpen : 1;
} EntryScreen;
extern s32 D_003E9FC0;
extern EntryScreen *D_003E9FC4[2];
extern void func_002F9650(void *group, s32 index);
extern void func_002F97A0(void *group);
extern s32 func_002F9630(void *group);
extern void *func_002F96F0(void *group, s32 index);
extern void func_001D7F10(void *widget);
void func_0035AAE0(void) {
    s32 i, count;
    if (D_003E9FC4[D_003E9FC0]) {
        if (D_003E9FC4[D_003E9FC0]->active) {
            func_002F9650(D_003E9FC4[D_003E9FC0]->labels, 1);
            func_002F9650(D_003E9FC4[D_003E9FC0]->labels, 0);
            D_003E9FC4[D_003E9FC0]->labelsOpen = 0;
            func_002F97A0(D_003E9FC4[D_003E9FC0]->labels);
            D_003E9FC4[D_003E9FC0]->labels = 0;
            count = func_002F9630(D_003E9FC4[D_003E9FC0]->widgets);
            for (i = 0; i < count; ++i)
                func_001D7F10(func_002F96F0(D_003E9FC4[D_003E9FC0]->widgets, i));
            func_002F97A0(D_003E9FC4[D_003E9FC0]->widgets);
            D_003E9FC4[D_003E9FC0]->widgets = 0;
            D_003E9FC4[D_003E9FC0]->active = 0;
        }
        D_003E9FC4[D_003E9FC0] = 0;
    }
}
