/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6Task_Remove(void *);
extern char D_00CCE080[];

void func_00CCE350(void) {
    Pes6Task_Remove(((void *)D_00CCE080));
}
