/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

M2C_UNK func_00207390(void *, M2C_UNK);
M2C_UNK func_00209A00(void *, u16, M2C_UNK);

void func_009E0200(void *arg0) {
    u8 t;
    u16 a;

    t = M2C_FIELD(arg0, u8 *, 0x16);
    if (t == 0x89) {
        a = M2C_FIELD(arg0, u16 *, 0x18);
        if ((a != 8) && (a != 0x30) && (a != 0x20)) {
            return;
        }
    } else if (t == 0x96) {
        a = M2C_FIELD(arg0, u16 *, 0x18);
        if ((a != 0xD0) && (a != 0xC0)) {
            return;
        }
    } else if ((t == 0x9D) || (t == 0x82)) {
        return;
    }
    func_00209A00(M2C_FIELD(arg0, void **, 4), M2C_FIELD(arg0, u16 *, 0xA4), 0);
    func_00207390(M2C_FIELD(arg0, void **, 4), 8);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) = M2C_FIELD(arg0, u8 *, 0x50);
}
