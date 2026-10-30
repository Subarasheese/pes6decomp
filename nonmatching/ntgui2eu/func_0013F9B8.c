/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001566A8(void);
M2C_UNK func_0013F968();                            /* extern */
M2C_UNK func_001564B8(M2C_UNK *);                   /* extern */
extern char D_005BDA80[];

void func_0013F9B8(void) {
    func_0013F968();
    func_001564B8(((void *)D_005BDA80));
    func_001566A8();
}
