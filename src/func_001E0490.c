/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern u8 *D_003E9960;
extern s32 D_003E995C;
void func_00153FA0(void *p);
u8 *func_001540C0(void);
u8 *func_00153FD0(void *a, s32 b, s32 c);
s32 func_001DD520(s32 i);
void func_001E0490(s32 arg0) {
    s32 i;
    u8 *p;
    if (D_003E9960 != 0) {
        func_00153FA0(D_003E9960);
        D_003E9960 = 0;
    }
    D_003E995C = arg0;
    p = func_001540C0();
    D_003E9960 = func_00153FD0(p, arg0, 0x30);
    for (i = 0; i < arg0; i++) {
        *(s32 *)(D_003E9960 + i * 0x30) = func_001DD520(i);
    }
}
