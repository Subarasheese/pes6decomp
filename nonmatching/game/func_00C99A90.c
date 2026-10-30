/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
extern void func_001BC2B0(void);
extern void func_00153FA0(void *);
void func_00C99A90(void *arg0) {
    func_001BC2B0();
    func_002F4E10(M2C_FIELD(arg0, void **, 0x18));
    M2C_FIELD(arg0, void **, 0x18) = NULL;
    func_00153FA0(arg0);
}
