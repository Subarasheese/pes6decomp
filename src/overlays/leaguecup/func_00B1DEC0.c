/* compiler: mwcc-3.0.1b210-inline-depth8 */
#include "types.h"
typedef struct {
    u8 reserved00[0x30];
    s32 selection;
} CupSession;
extern s32 func_008C9E80(s32);
extern s32 func_00B1C260(void);
extern s32 func_00B1D9F0(void);
extern CupSession *D_003EAD88;
s32 func_00B1DEC0(void) {
    {
        s32 result;
        if (D_003EAD88 == 0) {
            result = 0;
        } else {
            func_008C9E80(D_003EAD88->selection);
            func_00B1C260();
            result = func_00B1D9F0();
        }
        return result;
    }
}
