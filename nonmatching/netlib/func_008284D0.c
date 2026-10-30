/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A64CC[];

M2C_UNK *func_008284D0(void) {
    if ((*(s32 *)D_008A4398) == 0) {
        return NULL;
    }
    return ((void *)D_008A64CC);
}
