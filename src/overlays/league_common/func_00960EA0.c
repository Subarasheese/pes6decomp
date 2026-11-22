/* compiler: mwcc-3.0.1b198 */
#include "pes6/m2c.h"

extern int func_00363C30(void);
extern void Pes6Keyboard_Acquire(void);
extern char D_00A79C80[];

void func_00960EA0(void) {
    if (func_00363C30() == 0) {
        if ((*(u8 *)D_00A79C80) == 0) {
            Pes6Keyboard_Acquire();
            (*(u8 *)D_00A79C80) = 1;
        }
    } else {
        (*(u8 *)D_00A79C80) = 0;
    }
}
