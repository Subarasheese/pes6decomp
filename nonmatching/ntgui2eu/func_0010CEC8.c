/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005A9580[];
extern char D_005F7F48[];
extern char D_005F7F58[];
extern void *D_011B5D30;
extern char D_011B5D38[];

void func_0010CEC8(void *arg0) {
    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F7F48), 0x95, ((void *)D_005F7F58));
    }
    D_011B5D30 = arg0;
    M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK *, M2C_UNK *), 0x110)(((void *)D_011B5D38), ((void *)D_005A9580));
}
