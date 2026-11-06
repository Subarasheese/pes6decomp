/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_00151EA0(s32);
extern void func_002209A0(void *);
extern u8 *func_00221180(void);
extern void func_002D9C38(void *);
extern s32 func_00114E20(void *);
extern s32 D_003EAC6C;
extern char D_009CA828[];

typedef struct { u8 a, n, c, d, e, f, g, h; s32 w; } Rec;

s32 func_00931220(void) {
    Rec *p = (Rec *)func_00221180();
    s32 i;
    p->a = 5;
    p->n = 7;
    p->c = 6;
    p->d = 5;
    p->f = 4;
    p->g = 3;
    p->h = 0;
    func_00151EA0(0xFFFF);
    if (func_00114E20(p) == 0) {
        D_003EAC6C = D_003EAC6C + 1;
        if (D_003EAC6C < 0x14) return 0;
        D_003EAC6C = 0;
    }
    func_002D9C38(p);
    for (i = 0; i < p->n; i++) func_00151EA0(0x10);
    p->w = func_00151EA0(0xFFFF) & 0xFFFF;
    func_002209A0(D_009CA828);
    return 1;
}
