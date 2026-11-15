/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6HeapZone_SetRange(s8, s32, s32);
extern s32 func_00240C40(void);
M2C_UNK Pes6HeapZone_Open(M2C_UNK);                     /* extern */
M2C_UNK Pes6HeapZone_Close(M2C_UNK);                     /* extern */
extern s8 D_003E9D58;
extern char D_00D07000[];

void Pes6Menu_ResetHeapZones(void) {
    Pes6HeapZone_Close(0x17);
    Pes6HeapZone_Close(9);
    if (func_00240C40() == 1) {
        Pes6HeapZone_Close(0xA);
    }
    Pes6HeapZone_Close(0xB);
    Pes6HeapZone_Close(5);
    Pes6HeapZone_SetRange(5, ((s32) (((void *)D_00D07000) + 0x7FF) & ~0x7FF) | 0x800, 0x2CE000);
    Pes6HeapZone_Open(5);
    D_003E9D58 = 0;
}
