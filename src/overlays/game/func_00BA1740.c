/* compiler: mwcc-3.0.1b151 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
void func_001CDAD0(s32 *);
extern char D_00CBCEC4[];
extern char D_00CBD000[];
extern char D_00CBD004[];
extern char D_00CBD008[];

void func_00BA1740(char *arg0) {
    s32 *temp_a0;

    temp_a0 = *(s32 **)(arg0 + 0x44);
    if (*temp_a0 != 3) {
        Pes6Heap_Free(temp_a0);
        return;
    }
    func_001CDAD0(temp_a0);
    *(s32 *)D_00CBD000 = (*(s32 ***)(arg0 + 0x44))[1][0];
    *(s32 *)D_00CBD004 = (*(s32 ***)(arg0 + 0x44))[1][1];
    *(s32 *)D_00CBD008 = (*(s32 ***)(arg0 + 0x44))[1][2];
    *(s32 **)D_00CBCEC4 = *(s32 **)(arg0 + 0x44);
}
