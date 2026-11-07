/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0058C5F8[];
extern char D_0058C5FC[];
extern char D_0058C604[];

void func_00254BE0(s32 arg0) {
    if ((*(s32 *)D_0058C5FC) == 0) {
        (*(s32 *)D_0058C5F8) = arg0;
        (*(s32 *)D_0058C604) = 0;
        (*(s32 *)D_0058C5FC) = 1;
    }
}
