/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBBECC[];
extern char D_00CBBED8[];
extern char D_00CBBEDA[];
extern char D_00CBBEDC[];
extern char D_00CBBEDD[];

typedef struct { u8 a : 4; u8 f : 1; u8 b : 3; } BF;

void func_00B25ED0(s16 arg0, s16 arg1, s8 arg2, s8 arg3) {
    (*(s16 *)D_00CBBED8) = arg0;
    (*(s16 *)D_00CBBEDA) = arg1;
    (*(s8 *)D_00CBBEDC) = arg2;
    (*(s8 *)D_00CBBEDD) = arg3;
    ((BF *)D_00CBBECC)->f = 1;
}
