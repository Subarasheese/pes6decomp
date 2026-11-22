/* compiler: ee-gcc-2.96-G0 */
/* CRI stream cache, LSC_GetStmStat. See THIRD_PARTY.md. */

#include "pes6/cri_stream_cache.h"

int func_00172550(LscObj *lsc, int id) {
    int i;
    if (lsc == 0) {
        LSC_CallErrFunc("E2005012815: Illigal parameter lsc=NULL\n");
        return -1;
    }
    for (i = 0; i < 16; i++) {
        if (lsc->stms[i].id == id) {
            break;
        }
    }

    if (i == 16) {
        LSC_CallErrFunc("E2005012816: Can not find stream ID =%d\n", id);
        return -1;
    }
    return lsc->stms[i].stat;
}
