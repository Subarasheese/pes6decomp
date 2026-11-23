/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_0013E2A0(int);
extern void func_0013E2D0(int);
extern char Pes6Enter_Flags[];

void func_0090B4D0(void) {
    func_0013E2A0(2);
    func_0013E2D0(1);
    (*(s32 *)Pes6Enter_Flags) &= ~0x2000;
}
