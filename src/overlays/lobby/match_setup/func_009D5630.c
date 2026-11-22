/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_009D63E0(void);
extern s32 D_00A7DE10[];

void func_009D5630(void) {
    if (D_00A7DE10[0] != 0) {
        func_009D63E0();
        *(u8 *)(D_00A7DE10[0] + 0) = 1;
    }
}
