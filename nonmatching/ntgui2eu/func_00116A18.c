/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8CE8[];
extern char D_005F8CF8[];
extern M2C_UNK func_00116AD8;
extern M2C_UNK func_00116C70;
extern M2C_UNK func_001175DC;
extern M2C_UNK func_00117A50;
extern M2C_UNK func_00118290;
extern M2C_UNK func_00118298;
extern M2C_UNK func_001185D4;
extern M2C_UNK func_00118758;
extern M2C_UNK func_00118890;
extern M2C_UNK func_001189EC;
extern M2C_UNK func_00118AAC;

void func_00116A18(void *arg0) {
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8CE8), 0x83, ((void *)D_005F8CF8));
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_00118AAC;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00116AD8;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &func_00116C70;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_00117A50;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_001175DC;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &func_00118298;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_001185D4;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &func_00118758;
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = &func_00118290;
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &func_00118890;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_001189EC;
}
