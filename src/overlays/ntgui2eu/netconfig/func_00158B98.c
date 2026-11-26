/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_config_request.h"
s32 func_00158B98(u8 *out) {
    NtguiConfigRequest *request = &D_011E3A00;
    s32 i;
    for (i = 0; i < 6; i++)
        out[i] = request->address[i];
    return request->status;
}
