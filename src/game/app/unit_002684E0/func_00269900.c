/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_002211C0();                              /* extern */
extern char D_003AE97A[];
extern char D_003AE97B[];
extern char D_003AE97C[];
extern char D_003AE97D[];

void func_00269900(s8 arg0) {
    void *temp_v0;

    temp_v0 = func_002211C0();
    (*(s8 *)D_003AE97A) = arg0;
    M2C_FIELD(temp_v0, s8 *, 5) = arg0;
    M2C_FIELD(temp_v0, s8 *, 6) = (s8) (*(s8 *)D_003AE97C);
    M2C_FIELD(temp_v0, s8 *, 7) = (s8) (*(s8 *)D_003AE97B);
    (*(s8 *)D_003AE97D) = 1;
}
