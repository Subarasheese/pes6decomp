/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F1EA0(void *);
M2C_UNK func_001C48E8(void **, M2C_UNK, M2C_UNK);   /* extern */
extern void *D_00CCD500;
extern void *D_00CCD510;

void func_00C8C190(void) {
    func_001F1EA0(D_00CCD510);
    func_001C48E8(&D_00CCD510, 0, 0x3C);
    func_001C48E8(&D_00CCD500, 0, 8);
}
