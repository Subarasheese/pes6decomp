/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
typedef struct { char pad[0xC]; s32 f; char pad2[4]; } E;
extern char D_005BC238[];
extern char D_005BC640[];
s32 func_001378E8(void) {
    E *e = (E *)D_005BC640 + (*(s32 *)D_005BC238);
    return e->f == 0;
}
