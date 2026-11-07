/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001A55F0(float, float, float);
extern void func_001A5670(f32);
extern void func_001A5520(float, float, float);
void func_001A56D0(f32, f32);            /* extern */
M2C_UNK func_001A5750();                            /* extern */
M2C_UNK func_002A99D0();                            /* extern */
extern M2C_UNK (*D_003E9C9C)(M2C_UNK);
extern char D_00592730[];
extern char D_00592731[];
extern char D_00592732[];
extern char D_00592734[];
extern char D_00592740[];
extern char D_00592741[];
extern char D_0059274E[];
extern char D_00592754[];

void func_002726D0(void) {
    func_001A5750();
    (*(s8 *)D_00592732) = 0;
    (*(s8 *)D_00592731) = 0;
    (*(s8 *)D_00592730) = 0;
    if (D_003E9C9C != NULL) {
        D_003E9C9C(0);
    }
    func_002A99D0();
    func_001A56D0(50.0f, 16000.0f);
    func_001A5670(1430.0f);
    func_001A55F0(0.0f, -10000.0f, 5000.0f);
    func_001A5520(0.0f, 0.0f, 0.0f);
    (*(s8 *)D_00592741) = 0;
    (*(s8 *)D_00592740) = 0;
    (*(s8 *)D_0059274E) = 0;
    (*(s8 *)D_00592734) = 1;
    (*(s8 *)D_00592754) = 0;
}
