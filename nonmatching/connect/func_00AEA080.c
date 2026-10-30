/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
extern char D_00B02AA4[];

void func_00AEA080(void *arg0) {
    func_001C48E8(0, 4);
    M2C_FIELD(arg0, u16 *, 0) = (u16) M2C_FIELD(((void *)D_00B02AA4), u16 *, 0);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(((void *)D_00B02AA4), u8 *, 2);
}
