/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002FB010(int);
s32 func_0010AFA0(s32, s32, u32);                   /* extern */
s32 func_0010B260(s32, M2C_UNK, s32 *);             /* extern */
extern char D_005EAAD0[];
extern char D_005EAADC[];
extern char D_005EAAE0[];

s32 func_002FB970(void) {
    s32 sp2C;
    s32 temp_v0;
    u32 var_a2;

    var_a2 = 0x1000;
    if ((u32) (*(u32 *)D_005EAADC) < 0x1001U) {
        sp2C = 0;
        func_002FB010(func_0010B260((*(s32 *)D_005EAAE0), 0x55504305, &sp2C));
        var_a2 = (*(u32 *)D_005EAADC);
    }
    temp_v0 = func_0010AFA0((*(s32 *)D_005EAAE0), (*(s32 *)D_005EAAD0), var_a2);
    func_002FB010(temp_v0);
    return temp_v0;
}
