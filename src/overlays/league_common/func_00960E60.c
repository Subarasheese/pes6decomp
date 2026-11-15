/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Keyboard_Release(void);
extern char D_00A79C80[];

void func_00960E60(void) {
    if ((*(u8 *)D_00A79C80) == 1) {
        Pes6Keyboard_Release();
        (*(u8 *)D_00A79C80) = 0;
    }
}
