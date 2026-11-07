/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00101190(s32, s32);
extern void func_00100410(void);
extern void func_00100270(s32, s32, s32, s32);
extern u8 *D_003E97A0;
extern s32 D_003E97A4;

void func_00134610(void) {
    if (func_00101190(0, 0) != 0) {
        func_00100410();
        func_00100270(1, 0, 0, 0);
    }
    D_003E97A4 = 0;
    *(s32 *)(D_003E97A0 + 0x53CEA0) = 0;
}
