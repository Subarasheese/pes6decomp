/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
f32 func_002AC490(s32, M2C_UNK *);                  /* extern */
extern char D_005E30E0[];
extern char D_005E30E4[];

s32 func_002BAD70(void *arg0) {
    (*(f32 *)D_005E30E4) = func_002AC490(M2C_FIELD(arg0, s32 *, 4), ((void *)D_005E30E0));
    return 0;
}
