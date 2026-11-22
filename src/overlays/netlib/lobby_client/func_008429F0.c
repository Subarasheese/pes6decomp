/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s8 D_008A8388[];
extern s8 D_008A8389[];
extern s8 D_008A838A[];
extern s8 D_008A838B[];
extern s8 D_008A838C[];
extern s8 D_008A838D[];

s32 func_008429F0(s8 arg0) {
    D_008A8388[0] = arg0;
    if ((s8)arg0 == 1) {
        D_008A8389[0] = arg0;
        D_008A838A[0] = arg0;
        D_008A838B[0] = arg0;
        D_008A838C[0] = arg0;
        D_008A838D[0] = arg0;
    }
    return 1;
}
