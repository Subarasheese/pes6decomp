/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_005BEDA8;
extern s32 D_005BEDAC;
extern s32 D_005BEDB0;
extern void func_00134FB0(s32);

void func_00157B20(void) {
    if (D_005BEDA8 != 0) {
        func_00134FB0(D_005BEDA8);
        D_005BEDA8 = 0;
    }
    if (D_005BEDAC != 0) {
        func_00134FB0(D_005BEDAC);
        D_005BEDAC = 0;
    }
    if (D_005BEDB0 != 0) {
        func_00134FB0(D_005BEDB0);
        D_005BEDB0 = 0;
    }
}
