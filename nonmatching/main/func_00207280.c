/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001A5670(f32);
s32 func_00205960();
M2C_UNK func_00205BC0(s8);
M2C_UNK func_00205EE0();
M2C_UNK func_00206930(s8);
M2C_UNK func_00206BA0(s8);
M2C_UNK func_00206F80(s8);
extern char D_00533044[];
extern char D_00533048[];
extern char D_0053304A[];

void func_00207280(void) {
    s8 st = *(s8 *)D_0053304A;
    if (st == 3) {
        func_00206BA0(st);
    } else if (st == 2) {
        func_00206F80(st);
    } else if (st == 1) {
        func_00205BC0(st);
        *(s8 *)D_0053304A = 2;
    } else if (st == 0) {
        *(s32 *)D_00533044 = 0;
        *(s8 *)D_00533048 = 0xFF;
        func_001A5670(1430.0f);
        func_00205EE0();
        func_00206930((s8)func_00205960());
        *(s8 *)D_0053304A = 1;
    }
}
