/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9B34;
extern s32 D_00583330[];
void func_00155A10(void);
void func_00165338(s32);
void func_00155A00(void);

s32 func_0024F3E0(void) {
    s32 i;
    s32 *slot;

    for (i = 0, slot = D_00583330; i < 4; i++, slot++) {
        func_00155A10();
        func_00165338(*slot);
        func_00155A00();
    }
    D_003E9B34 = 0;
    return 0;
}
