/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001554C0(void);
void func_001551D0(s32 i, u8 *p);
void func_00154640(s32 i);
extern u8 D_0050D4B0[];

void func_00154550(void) {
    s32 i;
    u8 *p;

    func_001554C0();
    p = D_0050D4B0;
    for (i = 0; i < 8; i++) {
        func_001551D0(i, p);
        func_00154640(i);
        p += 0x58;
    }
}
