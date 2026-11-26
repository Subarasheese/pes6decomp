/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_config_request.h"
s32 func_00159008(s32 option) {
    NtguiConfigRequest *request = &D_011E3A00;
    if (option)
        request->option = option;
    return sendConfigRequest(5, request);
}
