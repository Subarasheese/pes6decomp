/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_0061C730[];
extern s32 D_0061C738[];
extern s32 D_0061C73C[];
void func_001C48E8(u8 *, s32, s32);
s32 func_001B4D80(f32, f32);
void func_001B4B90(s32, s32);
void func_00366490(void);

void func_0035A370(void) {
    s32 r;
    func_001C48E8(D_0061C730, 0, 0x10);
    D_0061C738[0] = 0;
    r = func_001B4D80(65536.0f, 0.0f);
    D_0061C73C[0] = r;
    func_001B4B90(r, 3);
    func_00366490();
}
