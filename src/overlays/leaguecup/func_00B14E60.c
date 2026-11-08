/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[4];
    void *p4;
    u8 pad8[0xC];
    s32 x14;
    u8 pad18[4];
    s32 x1C;
    u8 pad20[0xC];
    s32 x2C;
    u8 pad30[4];
    s32 x34;
} SB14;

extern void func_001D4E00(void *);
extern SB14 *func_00B155F0(void);
void func_00957070(s32);
void func_00973460(s32);

void func_00B14E60(void) {
    SB14 *p;

    p = func_00B155F0();
    if (p != NULL) {
        if (p->x14 != 0) {
            func_00957070(p->x14);
        }
        if (p->x2C != 0) {
            func_00957070(p->x2C);
        }
        if (p->x1C != 0) {
            func_00973460(p->x1C);
        }
        if (p->x34 != 0) {
            func_00973460(p->x34);
        }
        if (p->p4 != NULL) {
            func_001D4E00(p->p4);
            p->p4 = NULL;
        }
    }
}
