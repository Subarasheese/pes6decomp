/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0014AAA0(void);
extern char D_004FDC11[];
extern char D_004FDC12[];
extern char D_004FDC14[];

void func_0013EA20(void) {
    s32 temp_s0;

    switch ((*(u8 *)D_004FDC12)) {                           /* irregular */
    case 3:
        break;
    case 1:
        temp_s0 = func_0014AAA0();
        do {

        } while (temp_s0 == func_0014AAA0());
        do {

        } while ((u32) (func_0014AAA0() - (*(s32 *)D_004FDC14)) < (u8) (*(u8 *)D_004FDC11));
        break;
        do {
        case 2:
        } while ((u32) (func_0014AAA0() - (*(s32 *)D_004FDC14)) < (u8) (*(u8 *)D_004FDC11));
        break;
    }
    (*(s32 *)D_004FDC14) = func_0014AAA0();
}
