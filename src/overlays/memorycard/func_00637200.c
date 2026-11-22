/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001C48E8(s32 *, s32, s32);

extern s32 D_003EA150;
extern char D_0065D070[];

void func_00637200(void) {
    func_001C48E8(((void *)D_0065D070), 0, 8);
    func_001C48E8(&D_003EA150, 0, 4);
}
