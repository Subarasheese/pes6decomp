/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001DB710(void *);
void **func_001DB310(void *arg0, void *arg1) {
    void **value;
    void *entry;

    if (!((arg0 != NULL) && (arg1 != NULL))) {
        return NULL;
    }
    entry = M2C_FIELD(arg1, void **, 0);
    value = M2C_FIELD(arg1, void ***, 4);
    if (entry != NULL) {
        M2C_FIELD(entry, void ***, 4) = value;
    } else {
        M2C_FIELD(arg0, void ***, 0) = value;
    }
    if (value == NULL) {
        M2C_FIELD(arg0, void **, 4) = entry;
    } else {
        *value = entry;
    }
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8)(M2C_FIELD(arg0, u8 *, 0x2C) - 1);
    func_001DB710(arg1);
    return value;
    return NULL;
}
