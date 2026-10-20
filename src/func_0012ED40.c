/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0012A7C0(M2C_UNK);                     /* extern */
s32 func_0012AF40(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0012E0B0(s32);                         /* extern */
M2C_UNK func_0012F080(s32);                         /* extern */
extern char D_003FB778[];

void func_0012ED40(s32 arg0) {
    func_0012A7C0(2);
    func_0012F080(arg0);
    (*(s32 *)D_003FB778) = func_0012AF40(1, 1, 0);
    func_0012E0B0(arg0);
}
