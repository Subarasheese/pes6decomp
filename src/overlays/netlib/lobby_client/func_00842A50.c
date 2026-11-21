/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s8 D_008A8385[];
extern s8 D_008A8386[];

s32 func_00842A50(s8 arg0) {
    D_008A8385[0] = arg0;
    if ((s8)arg0 == 1) {
        D_008A8386[0] = arg0;
    }
    return 1;
}
