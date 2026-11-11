/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00BF9A40(void);
s32 func_00C22CA0();
s32 func_00C22D80();
extern char D_00C9A710[];
extern char D_00C9A91C[];
extern char D_00C9A91D[];
extern void func_00B80050(void);

void func_00B803B0(void) {
    switch ((*(u8 *)D_00C9A91C)) {
    case 0:
        if (func_00BF9A40() == 0) {
            (*(s8 *)D_00C9A91D) = 0;
            (*(u8 *)D_00C9A91C) += 1;
        case 1:
            if (func_00C22D80() != 0) {
                (*(s8 *)D_00C9A91D) = 0;
                (*(u8 *)D_00C9A91C) += 1;
            case 2:
                if (func_00C22CA0() != 0) {
                    (*(u8 *)D_00C9A91C) = 0;
                    *(void **)D_00C9A710 = (void *)func_00B80050;
                }
            }
        }
        return;
    }
}
