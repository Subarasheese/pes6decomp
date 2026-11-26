/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
enum { CHILD_COUNT = 40 };
typedef struct {
    u8 reserved00[0x914];
    s32 count;
    u8 reserved918[0x99c - 0x918];
    void *children[CHILD_COUNT];
} ChildList;
extern void (*D_005C1450)(ChildList *list);
extern void func_00165358(void *child);
void func_0016EA40(ChildList *list) {
    s32 i;
    D_005C1450(list);
    for (i = 0; i < CHILD_COUNT; ++i) {
        if (list->children[i])
            func_00165358(list->children[i]);
    }
}
