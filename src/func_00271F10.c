/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern u8 *Pes6Ball_Current;
extern u8 *D_003E9C90;
void func_0017B070(s32 a);
void func_0017C3B0(s32 a);
u8 *func_001454C0(s32 sz);
void func_00145590(void *p);
void func_00153FA0(void *p);
void func_00271F10(void) {
    u8 *r;
    func_0017B070(*(s32 *)Pes6Ball_Current);
    func_0017C3B0(*(s32 *)Pes6Ball_Current);
    *(s32 *)Pes6Ball_Current = 0;
    func_0017B070(*(s32 *)(Pes6Ball_Current + 8));
    func_0017C3B0(*(s32 *)(Pes6Ball_Current + 8));
    *(s32 *)(Pes6Ball_Current + 8) = 0;
    r = func_001454C0(0x8C);
    if (D_003E9C90 != 0) {
        func_00153FA0(D_003E9C90);
        D_003E9C90 = 0;
    }
    if (r != 0) {
        func_00145590(r);
        func_00153FA0(r);
    }
}
