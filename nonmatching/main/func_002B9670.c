/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002A7D00(M2C_UNK, u8);                 /* extern */
M2C_UNK func_002A9470(u8);                          /* extern */
M2C_UNK func_002A9570(M2C_UNK);                     /* extern */
M2C_UNK func_002A96D0();                            /* extern */
extern M2C_UNK *D_005E2F60;
extern char D_005E2F64[];
extern char D_005E2F69[];
extern char D_005E2F6B[];
extern M2C_UNK func_002B9620;

void func_002B9670(void) {
    func_002A96D0();
    func_002A9470((*(u8 *)D_005E2F69));
    func_002A7D00(0xA, (*(u8 *)D_005E2F64));
    if ((*(u8 *)D_005E2F6B) != 1) {
        func_002A9570(0);
    } else {
        func_002A9570(2);
    }
    D_005E2F60 = &func_002B9620;
}
