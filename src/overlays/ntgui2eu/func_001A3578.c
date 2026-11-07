/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32 *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_005CABFC[];
extern char D_01204B40[];
extern char D_01204B80[];

u32 func_001A3578(void) {
    if ((*(s32 *)D_005CABFC) < 0) {
        return 0;
    }
    if (func_0019EE30(((void *)D_01204B40), 7, 0, 0, 0, ((void *)D_01204B80), 4, 0, 0) < 0) {
        return 0xFFFFFFFFU;
    }
    return (*(s32 *)D_01204B80);
}
