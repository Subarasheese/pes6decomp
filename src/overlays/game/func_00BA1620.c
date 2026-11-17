/* compiler: mwcc-3.0.1b151 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
extern char D_00CBCEC4[];

void func_00BA1620(void) {
    if (*(void **)D_00CBCEC4 != NULL) {
        Pes6Heap_Free(*(void **)D_00CBCEC4);
        *(void **)D_00CBCEC4 = NULL;
    }
}
