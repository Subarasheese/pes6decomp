/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
M2C_UNK func_0084F010();                            /* extern */
extern char D_008B13EA[];

void func_0084ED60(s32 arg0, s32 arg1) {
    if (func_002DCA50() == 0) {
        if (arg0 != 5) {
            switch (arg1) {                         /* irregular */
            case 4:
                (*(s8 *)D_008B13EA) = 1;
                break;
            case 2:
                (*(s8 *)D_008B13EA) = 2;
                break;
            case 3:
                (*(s8 *)D_008B13EA) = 3;
                break;
            case 5:
                (*(s8 *)D_008B13EA) = 4;
                break;
            default:
                (*(s8 *)D_008B13EA) = 0;
                break;
            }
        } else {
            (*(s8 *)D_008B13EA) = 5;
        }
        func_0084F010();
    }
}
