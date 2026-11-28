/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
enum { CHILD_COUNT = 40 };
typedef struct {
    u8 reserved00[0x914];
    s32 count;
    u8 reserved918[0x99c - 0x918];
    void *children[CHILD_COUNT];
} ChildList;
extern void (*D_005C1458)(ChildList *list);
extern void func_00165428(void *child);
extern void func_0016E4F0(ChildList *list), func_0016E7D0(ChildList *list);
void func_0016EAA8(ChildList *list) {
    s32 i;
    D_005C1458(list);
    for (i = 0; i < list->count; ++i) {
        func_00165428(list->children[i]);
    }
    func_0016E4F0(list);
    func_0016E7D0(list);
}
