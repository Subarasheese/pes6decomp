/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_008B1618[];
extern char D_008B1638[];
extern char D_008B1658[];
extern char D_008B1A58[];
extern M2C_UNK func_00853530;

void func_00853380(void) {
    func_001C48E8(((void *)D_008B1618), 0, 0x540);
    M2C_FIELD(((void *)D_008B1638), M2C_UNK **, 0x14) = ((void *)D_008B1A58);
    M2C_FIELD(((void *)D_008B1638), s32 *, 0x18) = 0x100;
    M2C_FIELD(((void *)D_008B1638), M2C_UNK **, 0x10) = &func_00853530;
    M2C_FIELD(((void *)D_008B1638), s32 *, 0xC) = 0;
    M2C_FIELD(((void *)D_008B1638), s32 *, 4) = 0;
    M2C_FIELD(((void *)D_008B1638), s8 *, 9) = 0;
    M2C_FIELD(((void *)D_008B1638), s8 *, 8) = 0;
    func_001C48E8(((void *)D_008B1A58), 0, 0x100);
    M2C_FIELD(((void *)D_008B1618), M2C_UNK **, 0x14) = ((void *)D_008B1658);
    M2C_FIELD(((void *)D_008B1618), s32 *, 0x18) = 0x400;
    M2C_FIELD(((void *)D_008B1618), M2C_UNK **, 0x10) = &func_00853530;
    M2C_FIELD(((void *)D_008B1618), s32 *, 0xC) = 0;
    M2C_FIELD(((void *)D_008B1618), s32 *, 4) = 0;
    M2C_FIELD(((void *)D_008B1618), s8 *, 9) = 0;
    M2C_FIELD(((void *)D_008B1618), s8 *, 8) = 0;
    func_001C48E8(((void *)D_008B1658), 0, 0x400);
}
