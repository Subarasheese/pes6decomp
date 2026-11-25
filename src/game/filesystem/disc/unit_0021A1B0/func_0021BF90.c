/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(16)
#include "pes6/memory_card_request.h"

s32 func_0021BF90(CardDirectoryPathRequest *request) {
    s32 port, slot, mode, limit, status, result;
    const char *path;
    struct Metadata *records;
    slot = request->header.slot;
    port = request->header.port;
    path = request->path;
    mode = 0;
    limit = 24;
    records = D_00537C00;
    status = card_start_directory(port, slot, path, mode, limit, records);
    D_00538224[0] = 0;
    result = 0;
    if (status == 0) {
        request->header.state = 0;
        result = -127;
    }
    request->submittedCount = limit;
    return result;
}
