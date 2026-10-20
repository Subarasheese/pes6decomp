/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_002CB9B0(M2C_UNK);                     /* extern */
M2C_UNK func_002CBA60(M2C_UNK);                     /* extern */
M2C_UNK func_002CBD20(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern s8 D_003E9D58;
extern char D_00E07000[];

void func_002CADA0(void) {
    func_002CBA60(5);
    func_002CBD20(5, ((void *)D_00E07000), 0x1CE000);
    func_002CB9B0(5);
    D_003E9D58 = 1;
}
