/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00341440(s32 *obj) {
    s32 kind;

    if (obj == NULL) {
        return 0;
    }
    kind = obj[0];
    switch (kind) {
    case 5:
    case 4:
        return 1;
    }
    return 0;
}
