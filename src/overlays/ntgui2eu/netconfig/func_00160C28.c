/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_005B3744;
extern s32 D_011E6BC8;
extern s32 D_011E6BCC;
extern s32 D_011E6BF8;
extern void func_001514E8(s32);

void func_00160C28(void) {
    if (D_011E6BF8 != 0) {
        D_005B3744 = D_011E6BCC;
    } else {
        D_005B3744 = D_011E6BC8;
    }
    func_001514E8(D_005B3744);
}
