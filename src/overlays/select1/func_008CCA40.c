/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00154070(s32);
extern void *func_001C48E8(void *, int, unsigned int);
extern void func_008CC840(void);

extern s32 D_003EA4D0;

void func_008CCA40(void) {
    s32 temp_v0;

    if (D_003EA4D0 == 0) {
        if (D_003EA4D0 == 0) {
            temp_v0 = func_00154070(0x210);
            D_003EA4D0 = temp_v0;
            func_001C48E8((s32 *) temp_v0, 0, 0x210);
        }
        func_008CC840();
    }
}
