/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef struct S {
    u8 pad0[0xBD8];
    void *f0;
    void *f1;
    void *f2;
    u8 pad1[4];
    s32 f3;
    void *f4;
    void *f5;
} S;
extern void func_001F2810(void *);
extern void func_001D7F10(void *);
extern S *func_00B15370(void);
extern void func_001B9C60(void *);
M2C_UNK func_00972290(s32);
void func_00B0ED30(void) {
    S *p = func_00B15370();
    if (p != NULL) {
        if (p->f5 != NULL) { func_001B9C60(p->f5); p->f5 = NULL; }
        if (p->f4 != NULL) { func_001F2810(p->f4); p->f4 = NULL; }
        if (p->f3 != 0) { func_00972290(p->f3); p->f3 = 0; }
        if (p->f0 != NULL) { func_001D7F10(p->f0); p->f0 = NULL; }
        if (p->f1 != NULL) { func_001D7F10(p->f1); p->f1 = NULL; }
        if (p->f2 != NULL) { func_001D7F10(p->f2); p->f2 = NULL; }
    }
}
