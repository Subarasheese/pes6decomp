/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_008B4680(M2C_UNK);                     /* extern */
M2C_UNK func_008C5D70(void *);                      /* extern */
M2C_UNK func_008D80C0(void *);                      /* extern */

void func_008D81C0(void *arg0) {
    func_001F1EA0(M2C_FIELD(arg0, void **, 0x44));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x114));
    func_008C5D70(arg0);
    func_008D80C0(arg0);
    func_008B4680(0);
}
