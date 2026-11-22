/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_009E2CD0(void);
extern s32 D_00A7DD60[];

void func_009C63B0(void) {
    if (D_00A7DD60[0] != 0) {
        func_009E2CD0();
        *(u8 *)(D_00A7DD60[0] + 2) = 1;
    }
}
