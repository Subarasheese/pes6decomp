/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CEBD0(int);
extern void func_001CEB90(void);
extern void func_001CEC70(void);
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CEBF0();                            /* extern */
M2C_UNK func_001CECC0(s32);                         /* extern */
s32 func_001D3090(M2C_UNK *);                       /* extern */
M2C_UNK func_001D3260(M2C_UNK *);                   /* extern */
extern char D_00CB63D0[];

void func_009A1EA0(void) {
    func_001CECC0(func_001D3090(((void *)D_00CB63D0)) + 0x60);
    func_001CEB90();
    func_001CEBF0();
    func_001CEBD0(2);
    func_001CEAB0();
    func_001D3260(((void *)D_00CB63D0));
    func_001CEC70();
}
