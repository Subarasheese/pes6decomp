/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_00923FCC;

void func_009123B0(void) {
    func_00C75330(D_00923FCC + 4);
    func_00153FA0(D_00923FCC);
    D_00923FCC = NULL;
}
