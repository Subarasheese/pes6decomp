/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern int D_0050D480[];
extern int D_0050D484[];

u32 func_00152030(void) {
    if (D_0050D480[0] == 1) {
        if ((D_0050D484[0] == 1) || (D_0050D484[0] == 2)) {
            return 0;
        }
    } else if ((D_0050D480[0] == 0) && ((D_0050D484[0] == 0 || (D_0050D484[0] == 1)))) {
        return 0;
    }
    return 1;
}
