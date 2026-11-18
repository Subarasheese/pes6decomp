/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003EA820;
extern char D_00CCBD55[];

void func_00C72290(s32 arg0, s8 arg1) {
    D_003EA820 = arg0;
    *(((char *)D_00CCBD55) + (arg0 * 0x50)) = arg1;
}
