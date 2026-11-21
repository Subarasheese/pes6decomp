/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 func_00B35E30(s32);
extern s32 func_00B36300(void);
extern u8 D_003EAE58;
extern s32 D_003EAE54;

int func_00B36480(void) {
    int value;

    if (D_003EAE58 == 0) {
        if (100 < D_003EAE54) {
            D_003EAE58 = func_00B35E30(D_003EAE54 + -100);
        }
        D_003EAE54 = D_003EAE54 + 1;
    } else {
        D_003EAE54 = 0;
    }
    value = func_00B36300();
    return value;
}
