/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 data[0x24];
} Rec24;

typedef struct {
    void *main;
    u8 pad4[0xC];
    void *a[24];
    u8 pad70[0xC60];
    void *b[24];
    u8 padD30[0xC00];
    Rec24 recs[24];
} Mgr;

extern Mgr D_00522980;
extern void func_001DEF30(void *p, u8 v);
extern void func_002E19B0(Rec24 *r, s32 v);
extern void func_001D7840(void *p, u8 v);

void func_001B77F0(s32 v) {
    s32 i;
    Mgr *m = &D_00522980;
    Mgr *m2 = m;

    for (i = 0; i < 24; i++) {
        if (m->a[0] != NULL) {
            func_001DEF30(m->a[0], v);
        }
        if (m->b[0] != NULL) {
            func_001DEF30(m->b[0], v);
        }
        func_002E19B0(&m2->recs[0], v);
        m = (Mgr *)((u8 *)m + 4);
        m2 = (Mgr *)((u8 *)m2 + 0x24);
    }
    func_001D7840(D_00522980.main, v);
}
