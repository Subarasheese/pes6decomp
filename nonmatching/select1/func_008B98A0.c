/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s8 D_003E9AE0;
extern s8 D_003E9AE4;
extern char D_0053C981[];
extern char D_0053C982[];
extern char D_0053C983[];
extern char D_0053C984[];
extern char D_0053C985[];
extern char D_0053C988[];
extern char D_0053C989[];
extern char D_0053C98A[];
extern char D_0053C98B[];
extern char D_0053C98C[];
extern char D_0053C98D[];
extern char D_0053C990[];
extern char D_0053C9A0[];
extern char D_0053C9A1[];
extern char D_0053C9A3[];
extern char D_00591DB5[];
extern char D_00591DB6[];

void func_008B98A0(void) {
    (*(s8 *)D_0053C9A1) = 0xFF;
    (*(s8 *)D_0053C9A0) = 0xFF;
    (*(s8 *)D_0053C9A3) = 0;
    (*(s8 *)D_0053C981) = 0;
    (*(s8 *)D_0053C982) = 0;
    (*(s8 *)D_0053C983) = 0;
    (*(s8 *)D_0053C985) = 0;
    (*(s8 *)D_0053C988) = 0;
    (*(s8 *)D_0053C984) = 0;
    (*(s8 *)D_0053C989) = 4;
    (*(s8 *)D_0053C98A) = 1;
    (*(s8 *)D_0053C98B) = 1;
    (*(s8 *)D_0053C98D) = 1;
    (*(s8 *)D_0053C990) = 1;
    D_003E9AE4 = 0;
    (*(s8 *)D_0053C98C) = 3;
    D_003E9AE0 = 0;
    if ((*(s8 *)D_00591DB5) == 1) {
        D_003E9AE4 = (*(s8 *)D_00591DB6);
    }
}
