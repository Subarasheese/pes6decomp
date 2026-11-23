/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 active;
    u8 reserved04[0x148];
    s32 index;
    u8 reserved150[4];
    s32 entries[1];
} TrainingList;
extern TrainingList *D_003E7E1C;
extern s32 func_00CE4310(void);
extern void func_00CD7A00(s32);
void func_00CE9A00(void) {
    TrainingList *list = D_003E7E1C;
    s32 i = list->index;
    if (func_00CE4310() && list->entries[i]) {
        D_003E7E1C->active = 1;
        func_00CD7A00(3);
    }
}
