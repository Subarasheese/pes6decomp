/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008F6950();                            /* extern */
M2C_UNK func_008F77A0();                            /* extern */
M2C_UNK func_008F7F10();                            /* extern */
M2C_UNK func_008F8490();                            /* extern */
M2C_UNK func_008FA2A0();                            /* extern */
M2C_UNK func_008FAA70();                            /* extern */
M2C_UNK func_008FB280();                            /* extern */
M2C_UNK func_008FC8D0();                            /* extern */
M2C_UNK func_008FCA30();                            /* extern */
M2C_UNK func_008FE790();                            /* extern */
M2C_UNK func_008FF080();                            /* extern */
extern char D_00921300[];
extern char D_00921308[];

s32 func_008F63D0(void) {
    (*(s32 *)D_00921300) = 0;
    func_008FAA70();
    func_008F7F10();
    func_008F77A0();
    func_008F6950();
    func_008F8490();
    func_008FA2A0();
    func_008FB280();
    func_008FC8D0();
    func_008FCA30();
    func_008FF080();
    func_008FE790();
    (*(s32 *)D_00921308) = 0;
    return 1;
}
