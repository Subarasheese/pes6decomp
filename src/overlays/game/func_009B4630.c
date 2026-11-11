/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00CBAA07[];

void func_009B4630(u8 arg0) {
    if (arg0 >= 0xC) {
        arg0 = 0;
    }
    *D_00CBAA07 = arg0;
}
