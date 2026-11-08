/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C48E8(void *, s32, s32);
extern char D_00B007D0[];
extern s32 *D_00B007E0[];

void func_00AE2740(s32 *arg0) {
    s32 **p;

    func_001C48E8(D_00B007D0, 0, 0x14);
    p = D_00B007E0;
    if (p != NULL) {
        *p = arg0;
        if (arg0 != NULL) {
            *arg0 = 0;
        }
    }
}
