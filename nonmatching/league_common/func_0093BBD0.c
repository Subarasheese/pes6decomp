/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0021FE80(s32, s32);
extern void func_0021FE50(s32);
s32 func_00210DF0();                                /* extern */
M2C_UNK func_0021FEB0(M2C_UNK);                     /* extern */
s32 func_00994760();                                /* extern */
extern char D_009C9700[];
extern char D_00A60CE0[];
extern char D_00A61370[];
extern char D_00A62090[];

void func_0093BBD0(void) {
    s32 temp_s0;

    temp_s0 = func_00994760();
    func_0021FE80((s32) ((void *)D_00A62090), 2);
    func_0021FE80((s32) ((void *)D_00A61370), 1);
    func_0021FE80((s32) ((void *)D_00A60CE0), 3);
    func_0021FE80((s32) ((void *)D_009C9700), 0);
    if (func_00210DF0() == 2) {
        func_0021FE80(temp_s0 + 0x61B88, 6);
    }
    func_0021FE50(5);
    func_0021FEB0(0);
}
