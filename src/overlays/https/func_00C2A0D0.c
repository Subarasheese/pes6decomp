/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 func_00C0D198(void);
extern void func_00C07330(void);
extern s16 func_00C29400(void);
extern s32 printf(const char *, ...);
extern void func_00C01BB0(void);
extern char D_00C58098[];
extern char D_00C580A8[];
u64 func_00C2A0D0(void) {
    short status;
    func_00C0D198();
    func_00C07330();
    status = func_00C29400();
    printf((char *)D_00C58098, status);
    func_00C01BB0();
    printf((char *)D_00C580A8);
    return 0;
}
