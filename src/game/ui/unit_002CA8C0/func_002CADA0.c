/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6HeapZone_Open(M2C_UNK);                     /* extern */
M2C_UNK Pes6HeapZone_Close(M2C_UNK);                     /* extern */
M2C_UNK Pes6HeapZone_SetRange(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern s8 D_003E9D58;
extern char D_00E07000[];

void func_002CADA0(void) {
    Pes6HeapZone_Close(5);
    Pes6HeapZone_SetRange(5, ((void *)D_00E07000), 0x1CE000);
    Pes6HeapZone_Open(5);
    D_003E9D58 = 1;
}
