/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002727C0(s32);
M2C_UNK func_002B57C0();                            /* extern */
M2C_UNK func_009B4630(M2C_UNK);                     /* extern */
M2C_UNK func_009B6420(u16);                         /* extern */
extern char D_00CBAA04[];

void func_00BCE260(void) {
    func_002727C0(0xA);
    func_009B4630(5);
    func_002B57C0();
    func_009B6420((*(u16 *)D_00CBAA04));
}
