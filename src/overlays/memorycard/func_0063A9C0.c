/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00182B30(int);
extern void Pes6World_SetActive(int);
extern char D_00591DCF[];

void func_0063A9C0(void) {
    (*(s8 *)D_00591DCF) = 0;
    Pes6World_SetActive(0);
    func_00182B30(0);
}
