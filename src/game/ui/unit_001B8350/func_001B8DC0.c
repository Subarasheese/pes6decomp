/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_001BBC20(s32);
extern void func_001D7F10(void *);
extern void func_001C48E8(void *, s32, s32);
typedef struct { void *a[4]; s32 p10; void *p14; void *p18; s32 p1c; s32 pad[4]; void *p30; s32 pad2[3]; } S;
extern S D_00398400;
extern s32 D_00398434[];

s32 func_001B8DC0(void) {
    S *b = &D_00398400;
    s32 i;
    void **p;
    if (D_00398434[0] == 0) {
        return 1;
    } else {
    i = 0;
    p = b->a;
    do {
        func_001D7F10(*p);
        i += 1;
        *p = NULL;
        p += 1;
    } while (i < 4);
    if (b->p14 != NULL) {
        func_001D7F10(b->p14);
        b->p14 = NULL;
    }
    if (b->p18 != NULL) {
        func_001D7F10(b->p18);
        b->p18 = NULL;
    }
    if (b->p30 != NULL) {
        func_001D7F10(b->p30);
        b->p30 = NULL;
    }
    func_001BBC20(b->p1c);
    func_001C48E8(b, 0, 0x40);
    }
    return 1;
}
