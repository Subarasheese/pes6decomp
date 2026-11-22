/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_00124860(void);
extern void func_00138140(void);
extern void func_00138288(void);

extern char D_005BC6C4[];
extern char D_005BC6C8[];
extern char D_011D78A4[];
extern char D_011D78A8[];
extern char D_011D78AC[];
extern char D_011D78B0[];

void func_00138330(void) {
    (*(s32 *)D_011D78A8) = 0;
    (*(s32 *)D_011D78A4) = 0;
    func_00138288();
    (*(s32 *)D_005BC6C4) = 0;
    (*(s32 *)D_011D78AC) = 0;
    (*(s32 *)D_011D78B0) = 0;
    (*(s32 *)D_005BC6C8) = 0;
    func_00138140();
    func_00124860();
}
