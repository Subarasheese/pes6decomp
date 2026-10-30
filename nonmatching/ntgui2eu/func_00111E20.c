/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F86F0[];
extern M2C_UNK func_00111F18;
extern M2C_UNK func_00112344;
extern M2C_UNK func_00112450;
extern M2C_UNK func_00112908;
extern M2C_UNK func_00112BC4;
extern M2C_UNK func_00112CB0;
extern M2C_UNK func_00112CCC;
extern M2C_UNK func_0011421C;
extern M2C_UNK func_001142E0;
extern M2C_UNK func_00114344;
extern M2C_UNK func_00114410;
extern M2C_UNK func_00114A5C;
extern M2C_UNK func_00114A98;
extern M2C_UNK func_00114BB0;
extern M2C_UNK func_00114BB8;

void func_00111E20(void *arg0) {
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x6D, ((void *)D_005F86F0));
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &func_0011421C;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_00114BB8;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_00111F18;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &func_00112344;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &func_00112450;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_00112908;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_00112CCC;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &func_001142E0;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_00114344;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &func_00114410;
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &func_00112BC4;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &func_00112CB0;
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = &func_00114A5C;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &func_00114A98;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_00114BB0;
}
