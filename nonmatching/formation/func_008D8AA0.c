/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_008D8A70(void *);                      /* extern */

void func_008D8AA0(void *arg0) {
    func_001D7F10(M2C_FIELD(arg0, void **, 8));
    func_001D7F10(M2C_FIELD(arg0, void **, 0xC));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x10));
    func_001F1EA0(M2C_FIELD(arg0, void **, 4));
    func_008D8A70(arg0);
}
