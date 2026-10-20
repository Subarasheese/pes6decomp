/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00209C60(s32, M2C_UNK);                /* extern */
s32 func_0020A550(M2C_UNK);                         /* extern */
s32 func_002307F0();                                /* extern */
extern char D_00591BBA[];
extern char D_0061ED60[];

void func_00366680(void) {
    s32 temp_v0;

    func_001C48E8(((void *)D_0061ED60), 0, 0x144);
    if (((*(u8 *)D_00591BBA) != 0) && !(func_002307F0() & 0xFF)) {
        temp_v0 = func_0020A550(0x14);
        func_00209C60(temp_v0, 2);
        (*(s32 *)D_0061ED60) = temp_v0;
    }
}
