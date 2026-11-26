/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(16)
#include "pes6/memory_card_request.h"

s32 func_00215F20(CardDirectoryRequestC0 *request) {
    s32 port, slot, mode, limit, status, result;
    const char *path;
    struct Metadata *records;
    slot = request->directory.header.slot;
    port = request->directory.header.port;
    limit = request->limit;
    records = request->records;
    mode = request->directory.mode;
    path = request->directory.path;
    status = card_start_directory(port, slot, path, mode, limit, records);
    D_00538224[0] = 0;
    result = 0;
    if (status == 0) {
        request->directory.header.state = 0;
        result = -127;
    }
    request->directory.submittedCount = limit;
    return result;
}
