/* compiler: ee-gcc-2.96-G0 */
/* CRI stream cache, LSC_GetStmRdSct. See THIRD_PARTY.md. */

#include "pes6/cri_stream_cache.h"

int func_001725E8(LscObj *lsc, int id) {
    int i;
    if (lsc == 0) {
        LSC_CallErrFunc("E2005012817: Illigal parameter lsc=NULL\n");
        return 0;
    }
    for (i = 0; i < 16; i++) {
        if (lsc->stms[i].id == id) {
            break;
        }
    }

    if (i == 16) {
        LSC_CallErrFunc("E2005012818: Can not find stream ID =%d\n", id);
        return 0;
    }
    return lsc->stms[i].rdsct;
}
