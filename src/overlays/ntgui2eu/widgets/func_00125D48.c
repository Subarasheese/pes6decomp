/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_00125D20(s32, s32, s32, s32);
extern s32 func_0012FC78(void);

extern char D_011D40F8[];
extern char D_011D40FC[];
extern char D_011D4100[];
extern char D_011D4104[];

void func_00125D48(void) {
    if (func_0012FC78() == 2) {
        func_00125D20((*(s32 *)D_011D4104), (*(s32 *)D_011D40F8), (*(s32 *)D_011D40FC), (*(s32 *)D_011D4100));
    }
}
