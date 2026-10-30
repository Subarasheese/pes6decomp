/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00145590(void *, void *);              /* extern */

void func_001E1A60(void *arg0) {
    void **temp_v0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0);
    temp_a1 = M2C_FIELD(arg0, void **, 8);
    temp_v0 = M2C_FIELD(arg0, void ***, 4);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, void ***, 4) = temp_v0;
    } else {
        M2C_FIELD(temp_a1, void ***, 0) = temp_v0;
    }
    if (temp_v0 == NULL) {
        M2C_FIELD(temp_a1, void **, 4) = temp_v1;
    } else {
        *temp_v0 = temp_v1;
    }
    func_00145590(M2C_FIELD(arg0, void **, 0x10), temp_a1);
    func_00153FA0(M2C_FIELD(arg0, void **, 0x10));
    func_00153FA0(arg0);
}
