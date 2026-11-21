/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_009BFC30(s64);
extern s32 func_009BFBE0(s64);
extern s32 func_009BFB80(void);
extern s32 D_003EAD24;

u32 func_009BF4F0(void) {
    u32 value;

    value = 0;
    if ((D_003EAD24 == 4) || (D_003EAD24 - 6U < 3)) {
        func_009BFC30(1);
        func_009BFBE0(1);
        func_009BFB80();
        D_003EAD24 = 5;
    } else {
        value = 7;
    }
    return value;
}
