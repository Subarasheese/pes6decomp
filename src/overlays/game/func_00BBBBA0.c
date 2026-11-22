/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void func_00297390(void);

extern char D_005E24B0[];

void func_00BBBBA0(void) {
    if ((*(u8 *)D_005E24B0) != 5) {
        if ((*(u8 *)D_005E24B0) == 4) {
            return;
        }
        if ((*(u8 *)D_005E24B0) != 3) {
            if ((*(u8 *)D_005E24B0) != 2) {
                if ((*(u8 *)D_005E24B0) == 1) {
                    return;
                }
            }
        }
    } else {
        func_00297390();
    }
}
