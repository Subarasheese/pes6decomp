/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/ntgui_list_methods.h"

extern s32 D_011E6B00, D_011E6B2C, D_011E6B38, D_011E6B3C, D_011E6B40;
extern NtguiListWidget *D_011E6B0C;
extern void func_0015AC08(void);

void func_001598A8(const void *items, s32 count) {
    func_00162230(D_011E6B0C, items, count);
    D_011E6B2C = count;
    D_011E6B00 = 1;
    D_011E6B38 = 0;
    D_011E6B3C = 0;
    D_011E6B40 = 0;
    func_0015AC08();
}
