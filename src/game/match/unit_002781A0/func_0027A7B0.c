/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_0059FBD0[];
extern char D_0059FBD4[];
extern char D_0059FBD8[];
extern char D_0059FBDC[];
extern char D_0059FBE0[];

void func_0027A7B0(s32 value) {
    (*(s32 *)D_0059FBD0) = value;
    if (value != 0) {
        (*(s32 *)D_0059FBD4) = 1;
        (*(s32 *)D_0059FBD8) = 1;
        (*(s32 *)D_0059FBDC) = 8;
    }
    (*(s32 *)D_0059FBE0) = 0;
}
