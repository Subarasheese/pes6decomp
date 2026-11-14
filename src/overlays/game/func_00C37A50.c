/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
extern void func_00208610(void *);
extern void func_00B2ACF0();
extern void func_00BD4040(void *, s32);
extern s32 func_00C37850(u8);
extern void func_00C37900(u8);

typedef struct S { u8 *a; u8 *b; } S;

void func_00C37A50(S *arg0) {
    func_00B2ACF0();
    if (func_00207D10(*(void **)(arg0->a + 4)) != 0) {
        func_00208610(*(void **)(arg0->a + 4));
        func_00BD4040(arg0, 1);
        if (arg0->b[0x54] != 0) {
            if (arg0->a[0] == func_00C37850(arg0->b[0x54])) {
                func_00C37900(arg0->b[0x54]);
            }
        }
        *(s16 *)(arg0->a + 0x18) = 1;
    }
}
