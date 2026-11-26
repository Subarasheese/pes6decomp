#ifndef PES6_LOBBY_CHANNEL_TASK_H
#define PES6_LOBBY_CHANNEL_TASK_H

#include "pes6/lobby_request.h"

static inline void lobby_apply_request_result(s32 request, s32 result, s32 failure, s32 interrupted) {
    switch (result) {
    case 0:
        break;
    case 1:
        func_0082CA50(request, failure);
        break;
    case 4:
        func_0082C980(request);
        break;
    case 3:
        func_0082CA50(request, interrupted);
        break;
    case 2:
    default:
        func_0082CA50(request, -1);
        break;
    }
}

static inline void lobby_clear_request(s32 request, s32 event) {
    func_0082CA50(request, 0);
    func_0082C690(event, 0);
}

#endif
