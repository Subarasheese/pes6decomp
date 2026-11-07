/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00255EF0(void);
extern s32 func_0024ED10(void);
M2C_UNK func_00271BA0();                            /* extern */
M2C_UNK func_009B6810();                            /* extern */
M2C_UNK func_00B25BD0();                            /* extern */
M2C_UNK func_00BCBFA0();                            /* extern */
extern char D_00591DB5[];
extern char D_00591DD9[];
extern char D_008B1568[];

void func_00270590(void *arg0) {
    if (((*(s8 *)D_00591DB5) == 0) && ((*(u8 *)D_008B1568) == 0)) {
        (*(s8 *)D_00591DD9) = 0;
        func_00271BA0();
    } else {
        func_00B25BD0();
    }
    M2C_FIELD(arg0, M2C_UNK (**)(), 0xA4)();
    M2C_FIELD(arg0, M2C_UNK (**)(), 0xA8)();
    M2C_FIELD(arg0, M2C_UNK (**)(), 0xAC)();
    func_00255EF0();
    func_0024ED10();
    func_00BCBFA0();
    func_009B6810();
}
