/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00240720();                            /* extern */
M2C_UNK func_002407D0(M2C_UNK);                     /* extern */
M2C_UNK func_002472F0(M2C_UNK *);                   /* extern */
M2C_UNK func_0024DA90();                            /* extern */
extern char D_003AA1F0[];
extern char D_003AA1F1[];
extern char D_003AA200[];
extern char D_003AA201[];
extern char D_003AA235[];
extern char D_003AA269[];
extern char D_003AA29D[];
extern char D_003AA2D1[];
extern char D_003AA305[];
extern char D_003AA339[];
extern char D_003AA36D[];
extern s8 D_003E7504;
extern s8 D_003E7505;

void func_0024DFE0(void) {
    (*(s8 *)D_003AA1F0) = 1;
    (*(s8 *)D_003AA1F1) = 1;
    (*(s8 *)D_003AA201) = 0;
    (*(s8 *)D_003AA235) = 0;
    (*(s8 *)D_003AA269) = 0;
    (*(s8 *)D_003AA29D) = 0;
    (*(s8 *)D_003AA2D1) = 0;
    (*(s8 *)D_003AA305) = 0;
    (*(s8 *)D_003AA339) = 0;
    (*(s8 *)D_003AA36D) = 0;
    func_002407D0(1);
    (*(s8 *)D_003AA201) = -1;
    (*(s8 *)D_003AA235) = 1;
    func_0024DA90();
    func_002472F0(((void *)D_003AA200));
    func_00240720();
    D_003E7504 = 0;
    D_003E7505 = 1;
}
