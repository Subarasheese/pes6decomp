/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_config_request.h"
extern NtguiConfigRequest D_011E4A00;
extern char D_011E6A00[256];
extern void func_001AD7F0(void *, u32);
s32 func_00158A90(void) {
    NtguiConfigRequest *reply = &D_011E4A00;
    func_001AD7F0(D_011E6A00, sizeof(D_011E6A00));
    func_001B02B0(D_011E6A00, D_011E4A00.path);
    return reply->status;
}
