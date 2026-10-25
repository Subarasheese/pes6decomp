/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void (*func_00251C30(void))(s32, s32, s32, s32, s32 *);
extern s32 D_003E9C00;
extern s32 D_0058C680[];
extern s32 D_0058C684[];
extern s32 D_0058C688[];
extern s32 D_0058C68C[];
extern s32 D_0058C690[];
extern void func_001092A8(s32 *a, s32 b, s32 c, s32 *d, s32 e, s32 f, s32 g, s32 h, s32 i);

void func_00255CF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    func_00251C30()(a0, a1, a2, a3, &D_003E9C00);
    if (D_003E9C00 == 1) {
        return;
    }
    {
        D_0058C684[0] = a1;
        D_0058C680[0] = a0;
        D_0058C688[0] = a2;
        D_0058C68C[0] = a3;
        func_001092A8(D_0058C690, a0 | 0x200000, 1, D_0058C680, 0x10, 0, 0, 0, 0);
    }
}
