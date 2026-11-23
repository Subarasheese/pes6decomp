/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


extern char Pes6Camera_Work[];
extern char D_00520574[];

void func_001A56D0(f32 fparg0, f32 fparg1) {
    if (!(fparg0 < 1.0f)) {
        (*(f32 *)Pes6Camera_Work) = fparg0;
    } else {
        (*(f32 *)Pes6Camera_Work) = 1.0f;
    }
    if ((fparg1 - (*(f32 *)Pes6Camera_Work)) < 100.0f) {
        (*(f32 *)D_00520574) = 100.0f + (*(f32 *)Pes6Camera_Work);
    } else {
        (*(f32 *)D_00520574) = fparg1;
    }
}
