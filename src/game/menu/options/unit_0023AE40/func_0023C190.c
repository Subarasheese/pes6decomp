/* compiler: mwcc-3.0.1b210-inline-depth8 */
#include "types.h"
extern s32 func_0021E000(u32);
extern s32 Pes6File_AllChannelsIdle(void);
extern s32 func_0021DF90(s32);
extern s32 func_001E7140(s32);
extern s32 func_001F0210(s32);
extern s32 func_008223F0(void);
extern s32 func_008B33F0(s32);
extern void func_008B34C0(void);
extern s32 D_003E9A44;
s32 func_0023C190(void) {
    if (Pes6File_AllChannelsIdle() == 1) {
        D_003E9A44 = 0;
        func_008B34C0();
        if (func_008223F0() == 1) {
            func_001E7140(func_0021E000(0x15AU));
        } else {
            func_001E7140(func_0021E000(0x159U));
            func_008B33F0(0x1003F);
        }
        func_001F0210(func_0021DF90(0x15));
        func_008B33F0(0x1039A);
        return 1;
    }
    return 0;
}
