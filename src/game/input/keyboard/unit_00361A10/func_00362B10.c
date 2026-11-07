/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0012E160();                            /* extern */
s32 func_0012EF60(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_0061EC50[];
extern char D_0061EC60[];
extern char D_0061EC61[];
extern char D_0061EC62[];
extern char D_0061ED50[];

s32 func_00362B10(void) {
    u8 temp_s0;
    u8 temp_s1;
    u8 temp_s2;

    temp_s1 = (*(u8 *)D_0061EC60);
    temp_s0 = (*(u8 *)D_0061EC62);
    temp_s2 = (*(u8 *)D_0061EC61);
    func_001C48E8(((void *)D_0061EC50), 0, 0x100);
    (*(u8 *)D_0061EC60) = temp_s1;
    (*(u8 *)D_0061EC61) = temp_s2;
    (*(u8 *)D_0061EC62) = temp_s0;
    func_0012E160();
    do {

    } while (func_0012EF60(0, ((void *)D_0061ED50)) != 0);
    return 0;
}
