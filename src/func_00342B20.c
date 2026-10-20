/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_003388F0(M2C_UNK);                     /* extern */
M2C_UNK func_00338EE0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_008FE560(f32 *);                       /* extern */
extern f32 D_003E7688;
extern char D_005F3038[];

s32 func_00342B20(void) {
    f32 sp1C;

    sp1C = D_003E7688;
    func_00338EE0(((void *)D_005F3038), 0x30);
    func_008FE560(&sp1C);
    func_003388F0(0x25);
    return 1;
}
