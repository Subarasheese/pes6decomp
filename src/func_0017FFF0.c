/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9870;
void func_0017FC60(s32, void (*)(void));
void func_0014A960(void (*)(void), s32);
void func_0017FEF0(void);
void func_001800E0(void);

void func_0017FFF0(void) {
    func_0017FC60(1, func_0017FEF0);
    D_003E9870 = 0;
    func_0014A960(func_001800E0, 0);
}
