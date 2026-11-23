/* compiler: mwcc-3.0.1b210-inline-depth8 */
#include "types.h"
typedef struct {
    u8 reserved00[0x24];
    s32 state;
} CupRecord;
extern s32 func_00B03D30(void);
extern CupRecord *D_003EAD58;
s32 func_00B03BC0(void) {
    if (D_003EAD58 == 0) {
        return 1;
    }
    {
        s32 result;
        if (D_003EAD58->state == 1) {
            result = 1;
        } else {
            result = func_00B03D30();
        }
        return result;
    }
}
