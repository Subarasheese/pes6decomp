/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_config_request.h"
s32 func_001590A0(s32 second) {
    NtguiConfigRequest *request = &D_011E3A00;
    request->second = second;
    return sendConfigRequest(8, request);
}
