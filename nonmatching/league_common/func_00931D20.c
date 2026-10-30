/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002276D0(void);
extern u8 func_002275C0(void);
extern char D_00591BB9[];
extern char D_00591BCB[];
extern char D_00591C09[];

void func_00931D20(void) {
    (*(u8 *)D_00591BCB) = func_002276D0();
    switch ((*(u8 *)D_00591C09)) {                           /* irregular */
    case 4:
        (*(u8 *)D_00591BB9) = 1;
        return;
    case 2:
    case 1:
        (*(u8 *)D_00591BB9) = func_002275C0();
        return;
    case 14:
        (*(u8 *)D_00591BB9) = 0;
        return;
    }
}
