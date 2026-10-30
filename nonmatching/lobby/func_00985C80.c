/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D80(s32, s16);                    /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern char D_00A7D728[];
extern char D_00A7D730[];
extern char D_00A7D738[];
extern char D_00A7D740[];
extern char D_00A7D748[];
extern char D_00A7D750[];

void func_00985C80(void) {
    s32 temp_a0;

    if (((*(s32 *)D_00A7D750) == 1) && ((*(s32 *)D_00A7D730) == 1)) {
        if (((*(s32 *)D_00A7D738) == 0) || ((*(s32 *)D_00A7D738) == 0x5C) || ((*(s32 *)D_00A7D738) == 0xB8)) {
            func_0026E840(0x8404880D);
        }
        if ((*(s32 *)D_00A7D738) < 0x115) {
            (*(s32 *)D_00A7D748) = 1;
            func_001D7D80((*(s32 *)D_00A7D728), (*(s16 *)D_00A7D740));
            temp_a0 = (s32) (*(s16 *)D_00A7D740) + 1;
            (*(s16 *)D_00A7D740) = temp_a0;
            if (temp_a0 >= 0x2E) {
                (*(s16 *)D_00A7D740) = 0;
            }
            (*(s32 *)D_00A7D738) += 1;
            return;
        }
        func_001D7D80((*(s32 *)D_00A7D728), 0);
        (*(s16 *)D_00A7D740) = 0;
        (*(s32 *)D_00A7D748) = 0;
    }
}
