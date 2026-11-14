/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char func_00C13AA0[];

void func_00C13B10(void *arg0, void *arg1, char *arg2) {
    if (arg2 == NULL) {
        arg2 = func_00C13AA0;
    }
    if ((arg0 != NULL) && (arg1 != NULL)) {
        M2C_FIELD(arg1, char **, 4) = arg2;
        M2C_FIELD(arg1, void **, 0) = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(arg0, void **, 8) = arg1;
    }
}
