/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DA550(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_002CA910(M2C_UNK, M2C_UNK);            /* extern */
extern char D_008DA450[];

void func_008C9990(void) {
    func_002CA910(2, 0xC);
    func_002CA910(1, 0xC);
    func_001DA550(2, ((void *)D_008DA450));
    func_001DA550(1, ((void *)D_008DA450));
}
