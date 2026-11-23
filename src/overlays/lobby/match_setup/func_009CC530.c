/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 mode;
    u8 reserved01[0x6];
    s8 option;
} LobbyMode;
extern s32 func_009E4560(void);
extern s32 func_009E5AE0(void);
extern LobbyMode *D_00A7DDA8;
void func_009CC530(s8 value) {
    if (D_00A7DDA8 != 0) {
        D_00A7DDA8->option = value;
        if (D_00A7DDA8->mode == 2) {
            func_009E5AE0();
            return;
        }
        func_009E4560();
    }
}
