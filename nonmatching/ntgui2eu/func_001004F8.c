/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00C02700[];
extern M2C_UNK func_00100000;
extern M2C_UNK func_00100030;
extern M2C_UNK func_00100090;
extern M2C_UNK func_00100098;
extern M2C_UNK func_001000A0;
extern M2C_UNK func_001000A8;
extern M2C_UNK func_00100118;
extern M2C_UNK func_001001D0;
extern M2C_UNK func_001002A0;
extern M2C_UNK func_001002E8;
extern M2C_UNK func_00100308;
extern M2C_UNK func_00100330;
extern M2C_UNK func_00100358;
extern M2C_UNK func_00100388;

M2C_UNK *func_001004F8(void) {
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0x34) = &func_00100388;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0) = &func_00100000;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 4) = &func_00100030;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 8) = &func_00100090;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0xC) = &func_00100098;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0x10) = &func_001000A0;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0x14) = &func_001000A8;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0x18) = &func_00100118;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0x1C) = &func_001001D0;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0x20) = &func_001002A0;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0x24) = &func_001002E8;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0x28) = &func_00100308;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0x2C) = &func_00100330;
    M2C_FIELD(((void *)D_00C02700), M2C_UNK **, 0x30) = &func_00100358;
    return ((void *)D_00C02700);
}
