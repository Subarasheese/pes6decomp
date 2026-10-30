/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D60(s32, u8);                     /* extern */
extern char D_008A4328[];
extern char D_008A4330[];
extern char D_008A4338[];
extern char D_008A4340[];
extern char D_008A4348[];

s32 func_00820F10(u8 arg0) {
    (*(u8 *)D_008A4330) = arg0;
    if (((s64) ((s64) arg0 << 0x38) >> 0x38) != 1) {
        func_001D7D60((*(s32 *)D_008A4338), arg0 & 0xFF);
        func_001D7D60((*(s32 *)D_008A4340), (*(u8 *)D_008A4330));
        func_001D7D60((*(s32 *)D_008A4348), (*(u8 *)D_008A4330));
    } else {
        switch ((*(s8 *)D_008A4328)) {                       /* irregular */
        case 0:
            func_001D7D60((*(s32 *)D_008A4338), 1U);
            func_001D7D60((*(s32 *)D_008A4340), 0U);
            func_001D7D60((*(s32 *)D_008A4348), 0U);
            break;
        case 1:
            func_001D7D60((*(s32 *)D_008A4338), 0U);
            func_001D7D60((*(s32 *)D_008A4340), 1U);
            func_001D7D60((*(s32 *)D_008A4348), 0U);
            break;
        case 2:
            func_001D7D60((*(s32 *)D_008A4338), 0U);
            func_001D7D60((*(s32 *)D_008A4340), 0U);
            func_001D7D60((*(s32 *)D_008A4348), 1U);
            break;
        default:
            func_001D7D60(*(s32 *)0x8A4338, 0U);
            func_001D7D60((*(s32 *)D_008A4340), 0U);
            func_001D7D60((*(s32 *)D_008A4348), 0U);
            break;
        }
    }
    return 1;
}
