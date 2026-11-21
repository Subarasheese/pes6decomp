/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_009D6E20(void);
extern s32 D_00A7DEA8[];

void func_009D8DE0(void) {
    if (D_00A7DEA8[0] != 0) {
        func_009D6E20();
        *(u8 *)(D_00A7DEA8[0] + 1) = 1;
    }
}
