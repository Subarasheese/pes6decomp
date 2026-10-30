/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00658A30[];
extern char D_00658A50[];

M2C_UNK *func_0063A050(s32 arg0) {
    if (arg0 == 0) {
        return ((void *)D_00658A30);
    }
    return ((void *)D_00658A50);
}
