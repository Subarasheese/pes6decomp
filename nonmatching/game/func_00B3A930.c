/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B3A990();                            /* extern */
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

void func_00B3A930(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x51) == 0) {
        func_00B3A990();
        (*(f32 *)D_00CBCAD8) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x6C);
        (*(f32 *)D_00CBCADC) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x70);
    }
}
