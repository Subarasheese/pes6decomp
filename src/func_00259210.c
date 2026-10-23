/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00153FA0(s32);
extern s32 func_0025E0E0(s32);
extern void func_0025E100(s32, s32);
extern char D_0058CF40[];
extern char D_0058CF42[];
extern char D_0058CF44[];
extern char D_0058CF46[];
extern char D_0058CF60[];
extern char D_0058CF64[];
extern char D_0058CF68[];
extern char D_0058CF6D[];

void func_00259210(void) {
    if (func_0025E0E0(7) == 3) {
        if ((*(s32 *)D_0058CF60) != 0) {
            func_00153FA0((*(s32 *)D_0058CF60));
            (*(s32 *)D_0058CF60) = 0;
            (*(s32 *)D_0058CF64) = 0;
            (*(s32 *)D_0058CF68) = 0;
        }
        (*(s8 *)D_0058CF6D) = 0;
        (*(s16 *)D_0058CF40) = 0;
        (*(s16 *)D_0058CF42) = 0;
        (*(s16 *)D_0058CF44) = 0;
        (*(s16 *)D_0058CF46) = 0;
        func_0025E100(7, 0);
    }
}
