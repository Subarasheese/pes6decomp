/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 x0;
    void *x4;
    void *x8;
    void *xC;
} SB;

extern void func_001D7D60(void *, u8);
void func_009BE0B0(void);
extern SB *D_003EA9CC;

void func_009BEC00(u8 arg0) {
    SB *p;

    p = D_003EA9CC;
    if (p != NULL) {
        func_001D7D60(p->x4, arg0);
        func_001D7D60(p->x8, arg0);
        func_001D7D60(p->xC, arg0);
        if (arg0 == 0) {
            func_009BE0B0();
        }
    }
}
