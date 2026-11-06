/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern u8 *func_002211E0(void);
extern void func_001C48E8(void *, s32, s32);
extern void func_002464C0(s32, s32);
typedef struct { u8 pad[0x2C]; s32 a,b,c,d,e,f,g,h; } R;
void func_00931650(void) {
    s32 i;
    R *p = (R *)func_002211E0();
    func_001C48E8(p, 0, 0x5C);
    for (i = 0; i < 0xCF; i++) func_002464C0(i, 0);
    p->a = 0; p->f = 0; p->b = 0; p->c = 0; p->d = 0; p->e = 0;
    p->g = 1; p->h = 1;
}
