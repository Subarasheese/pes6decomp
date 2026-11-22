/* compiler: ee-gcc-2.96 */
#include "types.h"

extern void func_001AB108(void);

extern char D_01208848[];

void func_001AB1C8(void) {
    if ((*(s32 *)D_01208848) == 0) {
        (*(s32 *)D_01208848) = 1;
        func_001AB108();
    }
}
