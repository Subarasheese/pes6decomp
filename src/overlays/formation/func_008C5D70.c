/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 active;
    u8 pad01[3];
    void *resource;
    s32 field08, field0c;
    void *children[4];
} FormationGroup;
extern void func_002E4570(void *), func_001D7F10(void *);
void func_008C5D70(FormationGroup *g) {
    s32 i;
    func_002E4570(g->resource);
    for (i = 0; i < 4; ++i)
        func_001D7F10(g->children[i]);
    g->active = 0;
    g->resource = 0;
    g->field08 = 0;
    g->field0c = 0;
    g->children[0] = 0;
    g->children[1] = 0;
    g->children[2] = 0;
    g->children[3] = 0;
}
