/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6HeapZone_SetRange(s8, s32, s32);
M2C_UNK Pes6HeapZone_Open(M2C_UNK);                     /* extern */
M2C_UNK Pes6HeapZone_Close(M2C_UNK);                     /* extern */
extern s8 D_003E9D58;
extern char D_00D07000[];

void func_002CAD40(void) {
    Pes6HeapZone_Close(5);
    Pes6HeapZone_SetRange(5, ((s32) (((void *)D_00D07000) + 0x7FF) & ~0x7FF) | 0x800, 0x2CE000);
    Pes6HeapZone_Open(5);
    D_003E9D58 = 0;
}
