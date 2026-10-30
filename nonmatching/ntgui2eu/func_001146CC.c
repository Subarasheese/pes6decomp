/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00111798(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_001118B8(M2C_UNK *);                   /* extern */
M2C_UNK func_00114780(s32);                         /* extern */
M2C_UNK func_0019AF60();                            /* extern */
M2C_UNK func_0019AFD0(s32);                         /* extern */
M2C_UNK func_0019B130(s32);                         /* extern */
M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F8658[];
extern s32 D_00602470;
extern s32 D_00602474;
extern s32 D_00602478;
extern s32 D_006024AC;
extern char D_011C5D90[];

void func_001146CC(void) {
    s32 temp_v0;

    if (D_00602478 == 0) {
        temp_v0 = D_006024AC;
        do {
            if (temp_v0 != 0) {
                func_0019B160(temp_v0);
            }
            func_0019B160(D_00602470);
            if (M2C_FIELD(((void *)D_011C5D90), s32 *, 0xC) != 0) {
                if (M2C_FIELD(((void *)D_011C5D90), s32 *, 0xC) <= 0) {
                    func_001AD620(((void *)D_005F8648), 0x55, ((void *)D_005F8658));
                }
                func_00114780(M2C_FIELD(((void *)D_011C5D90), s32 *, 0));
                func_00111798(((void *)D_011C5D90), 0);
            }
            func_0019B140(D_00602470);
            func_0019AFD0(D_00602474);
        } while (D_00602478 == 0);
    }
    func_0019B130(D_00602470);
    func_001118B8(((void *)D_011C5D90));
    func_0019AF60();
}
