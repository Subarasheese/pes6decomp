/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00220240(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_002CB9B0(M2C_UNK);                     /* extern */
M2C_UNK func_002CBA60(M2C_UNK);                     /* extern */
extern void *D_008E78D0;
extern void *D_008E78D4;
extern void *D_008E78D8;
extern void *D_008E78DC;
extern void *D_008E78E0;

void func_008C9760(void) {
    func_00220240(0, 2);
    func_00220240(0, 6);
    func_00220240(0, 7);
    func_00220240(0, 4);
    func_00220240(0, 5);
    func_00153FA0(D_008E78D0);
    D_008E78D0 = NULL;
    func_00153FA0(D_008E78D4);
    D_008E78D4 = NULL;
    func_00153FA0(D_008E78D8);
    D_008E78D8 = NULL;
    func_00153FA0(D_008E78DC);
    D_008E78DC = NULL;
    func_00153FA0(D_008E78E0);
    D_008E78E0 = NULL;
    func_002CBA60(5);
    func_002CB9B0(5);
}
