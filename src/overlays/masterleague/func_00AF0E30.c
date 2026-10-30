/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00AEF320(void);
extern void func_00AF03A0(void);
extern s32 D_003EADC8;

void func_00AF0E30(void) {
    if (D_003EADC8 != 0) {
        func_00AEF320();
        func_00AF03A0();
    }
}
