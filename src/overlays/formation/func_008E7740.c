/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[4];
    void *group;
    u8 reserved08[12];
    void *left[10], *right[10];
} FormationRows;
extern void func_001F3D10(void *, s8), func_001D7D60(void *, s8);
void func_008E7740(FormationRows *rows, s8 visible) {
    s32 i;
    func_001F3D10(rows->group, visible);
    for (i = 0; i < 10; i++) {
        func_001D7D60(rows->left[i], visible);
        func_001D7D60(rows->right[i], visible);
    }
}
