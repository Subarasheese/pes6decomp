/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


void func_001560B8(M2C_UNK *);                   /* extern */
void func_001586C8();                            /* extern */
extern char D_011E2444[];
extern char D_011E2450[];
extern char D_011E2480[];

void func_00156BF8(void) {
    (*(s32 *)D_011E2450) = 3;
    func_001560B8(((void *)D_011E2480));
    func_001586C8();
    (*(s32 *)D_011E2444) = 3;
}
