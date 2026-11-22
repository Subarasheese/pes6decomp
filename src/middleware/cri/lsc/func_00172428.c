/* compiler: ee-gcc-2.96-G0 */
/* CRI stream cache, LSC_GetStmId. See THIRD_PARTY.md. */

#include "pes6/cri_stream_cache.h"

int func_00172428(LscObj *lsc, int no) {
    int slot;
    if (lsc == 0) {
        LSC_CallErrFunc("E2005012811: Illigal parameter lsc=NULL\n");
        return -1;
    }
    if ((no < 0) || (no >= lsc->nstm)) {
        LSC_CallErrFunc("E2005012812: Illigal parameter no=%d\n", no);
        return -1;
    }
    slot = (lsc->rpos + no) % 16;
    return lsc->stms[slot].id;
}
