/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0021FE50(s32);
extern void func_0021FE80(s32, s32);
M2C_UNK func_0021FEB0(M2C_UNK);                     /* extern */
extern char D_0052D160[];
extern char D_0052FF80[];
extern char D_00B34380[];
extern char D_00B400F0[];
extern char D_00B40400[];
extern char D_00B40590[];

void func_00AF72D0(void) {
    func_0021FE50(5);
    func_0021FE80((s32) ((void *)D_00B40590), 0x15);
    func_0021FEB0(3);
    func_0021FE80((s32) ((void *)D_00B34380), 0x10);
    func_0021FE80((s32) ((void *)D_00B400F0), 0x11);
    func_0021FE80((s32) ((void *)D_00B40400), 0x12);
    func_0021FEB0(2);
    func_0021FE80((s32) ((void *)D_0052FF80), 9);
    func_0021FE80((s32) ((void *)D_0052D160), 0xE);
    func_0021FEB0(1);
}
