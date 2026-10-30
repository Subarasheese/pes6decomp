/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CE4210();                            /* extern */
M2C_UNK func_00CE9E40();                            /* extern */
M2C_UNK func_00CEAC80();                            /* extern */
M2C_UNK func_00CEC550(M2C_UNK);                     /* extern */
M2C_UNK func_00CECDE0();                            /* extern */
extern void *D_003E7E1C;
extern M2C_UNK func_00CDF000;

s32 func_00CDF5A0(void) {
    void *temp_s0;

    temp_s0 = D_003E7E1C;
    func_00CECDE0();
    func_00CEC550(0x26);
    M2C_FIELD(temp_s0, M2C_UNK **, 0x188) = &func_00CDF000;
    func_00CE9E40();
    func_00CE4210();
    func_00CEAC80();
    return 1;
}
