/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern int func_002D5410(void);
extern void func_001C48E8(void *, s32, s32);
extern void func_00C88DD0(s32, void *, void *);
extern void func_00C88EC0(s32, void *, void *);
extern void *D_003EA86C;
extern char D_00CCC040[];
extern void func_00C7EC70(void);
extern void func_00C7ED40(void);
extern void func_00C7ED50(void);
extern void func_00C7ED70(void);

void func_00C7EDA0(void) {
    func_002D5410();
    func_001C48E8(D_00CCC040, 0, 0x30);
    D_003EA86C = D_00CCC040;
    func_00C88EC0(0x12, (void *)func_00C7ED70, (void *)func_00C7ED50);
    func_00C88DD0(0x12, (void *)func_00C7EC70, (void *)func_00C7ED40);
}
