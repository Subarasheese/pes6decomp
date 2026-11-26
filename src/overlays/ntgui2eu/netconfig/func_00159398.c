/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_config_request.h"
s32 func_00159398(s32 device, const char *path, s32 profile) {
    NtguiConfigRequest *request = &D_011E3A00;
    func_00158BD8(request->profilePath, &request->profileValue, profile);
    request->device = device;
    func_001B02B0(request->path, path);
    return sendConfigRequest(17, request);
}
