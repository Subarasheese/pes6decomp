/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_config_request.h"
s32 func_00158D88(s32 first, s32 second, s32 device, s32 profile) {
    NtguiConfigRequest *request = &D_011E3A00;
    request->first = first;
    request->second = second;
    request->device = device;
    func_00158BD8(request->profilePath, &request->profileValue, profile);
    return sendConfigRequest(1, request);
}
