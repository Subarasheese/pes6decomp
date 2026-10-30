/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B25D90(void);
extern int func_0029A0A0(void);
M2C_UNK func_002561A0(M2C_UNK);                     /* extern */
M2C_UNK func_002562B0(M2C_UNK);                     /* extern */
M2C_UNK func_009B5820();                            /* extern */
M2C_UNK func_00B27010(M2C_UNK);                     /* extern */
s32 func_00B29CB0();                                /* extern */
M2C_UNK func_00B79210();                            /* extern */
M2C_UNK func_00B7A180();                            /* extern */
extern char D_00591C09[];
extern char D_00591DB4[];
extern char D_00591E14[];
extern char D_00CB52C8[];

void func_009F2700(void) {
    (*(s8 *)D_00CB52C8) = 0;
    (*(s32 *)D_00591E14) = 0;
    func_00B7A180();
    func_00B25D90();
    func_00B25D90();
    func_009B5820();
    func_00B79210();
    if (((*(u8 *)D_00591C09) != 5) || (func_00B29CB0() == 0)) {
        func_002561A0(0);
        func_002562B0(0xC);
    }
    if (func_0029A0A0() != 4) {
        func_00B27010(1);
        (*(s8 *)D_00591DB4) = 1;
        return;
    }
    func_00B27010(0);
    (*(s8 *)D_00591DB4) = 0;
}
