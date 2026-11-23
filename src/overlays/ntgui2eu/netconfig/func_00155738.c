/* compiler: ee-gcc-2.9-as210-G0 */
#include "types.h"
extern s32 func_001557A0(void);
extern void func_00158A50(void);
extern s32 func_00158B68(void);
extern void func_00159008(s32);
extern s32 func_001596E8(s32);
extern s32 D_011E0D80[];
extern s32 D_011E0D84[];
typedef struct {
    u8 reserved00[0x18];
    s32 (*next)(void);
} GuiTask;
s32 func_00155738(GuiTask *data) {
    if (func_00158B68() != 0 || func_001596E8(D_011E0D84[0]) >= 0) {
        return 0;
    }
    func_00158A50();
    func_00159008(D_011E0D80[0]);
    data->next = func_001557A0;
    return 0;
}
