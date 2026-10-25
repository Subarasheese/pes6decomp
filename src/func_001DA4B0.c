/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Rec {
    void *data;
    u8 pad[0x48];
} Rec;

extern Rec *D_0052ABAC[];
extern s32 D_0052AB90[];
extern void func_00153FA0(void *);

static inline Rec *get_rec(s32 idx) {
    Rec *r = NULL;
    if (D_0052ABAC[0] != NULL && idx >= 0 && idx < D_0052AB90[0]) {
        r = &D_0052ABAC[0][idx];
    }
    return r;
}

static inline Rec *get_live(s32 idx) {
    Rec *r = get_rec(idx);
    if (r == NULL || r->data == NULL) r = NULL;
    return r;
}

void func_001DA4B0(s32 idx) {
    Rec *r = get_live(idx);
    if (r == NULL) return;
    func_00153FA0(r->data);
    r->data = NULL;
}
