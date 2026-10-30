/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0023B360(M2C_UNK, M2C_UNK);            /* extern */
extern s8 D_003EA420;
extern char D_008DC2C2[];
extern char D_008DC2C4[];
extern char D_008DC2C8[];
extern char D_008DC2E2[];
extern char D_008DC2E4[];
extern char D_008DC2E8[];
extern char D_008DC2F2[];
extern char D_008DC2F4[];
extern char D_008DC2F8[];
extern char D_008DC302[];
extern char D_008DC304[];
extern char D_008DC308[];

void func_008B3B80(void) {
    func_0023B360(0, 1);
    func_0023B360(1, 1);
    switch (D_003EA420) {                           /* irregular */
    case 0:
        func_0023B360(0, 0);
        func_0023B360(1, 0);
        return;
    case 2:
        if ((*(s16 *)D_008DC2C2) == (*(s16 *)D_008DC2C4)) {
            func_0023B360(0, 0);
        }
        if ((*(s16 *)D_008DC2C2) == (*(s16 *)D_008DC2C8)) {
            func_0023B360(1, 0);
            return;
        }
        break;
    case 4:
        if ((*(s16 *)D_008DC2E2) == (*(s16 *)D_008DC2E4)) {
            func_0023B360(0, 0);
        }
        if ((*(s16 *)D_008DC2E2) == (*(s16 *)D_008DC2E8)) {
            func_0023B360(1, 0);
            return;
        }
        break;
    case 5:
        if ((*(s16 *)D_008DC2F2) == (*(s16 *)D_008DC2F4)) {
            func_0023B360(0, 0);
        }
        if ((*(s16 *)D_008DC2F2) == (*(s16 *)D_008DC2F8)) {
            func_0023B360(1, 0);
            return;
        }
        break;
    case 6:
        if ((*(s16 *)D_008DC302) == (*(s16 *)D_008DC304)) {
            func_0023B360(0, 0);
        }
        if ((*(s16 *)D_008DC302) == (*(s16 *)D_008DC308)) {
            func_0023B360(1, 0);
            return;
        }
        break;
    }
}
