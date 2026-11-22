/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_008A3A20[];
extern char D_008A3A28[];
extern char D_008A3A50[];

s32 func_00816E10(void) {
    char *new_var;
    new_var = D_008A3A50;
    if ((*((s32 *)D_008A3A20)) == 0) {
        return 1;
    }
    if ((((void *)new_var) == 0) && ((*((s32 *)D_008A3A28)) != 0)) {
        *((s32 *)D_008A3A20) = 0;
    }
    return 0;
}
