/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B29C50();                                /* extern */
M2C_UNK func_00BFBB00();                            /* extern */
M2C_UNK func_00BFBFE0();                            /* extern */
M2C_UNK func_00BFC1B0();                            /* extern */
M2C_UNK func_00BFC440(M2C_UNK);                     /* extern */
M2C_UNK func_00BFD1F0();                            /* extern */
M2C_UNK func_00C01540(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_00591C09[];

void func_00BFEC60(void) {
    if ((*(u8 *)D_00591C09) != 5) {
        goto block_1;
    }
    if (func_00B29C50() != 0) {
block_1:
        if (7 < 0x2E) {
            func_00C01540(7, 0x17, 0x17, 1, 6);
        }
    }
    func_00BFD1F0();
    func_00BFC440(5);
    func_00BFC1B0();
    func_00BFBFE0();
    func_00BFBB00();
}
