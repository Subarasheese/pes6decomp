/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A6390(void);
M2C_UNK func_001B0B10();                            /* extern */
M2C_UNK func_008CBC90();                            /* extern */
extern char D_00CE4F30[];
extern char D_00CE4F34[];
extern char D_00CE4F38[];

void func_00BC87E0(u16 arg0) {
    func_001A6390();
    func_001B0B10();
    func_008CBC90();
    (*(s32 *)D_00CE4F30) = 0;
    (*(u16 *)D_00CE4F34) = 0xFFFF;
    if ((arg0 & 0xFFFF) != (*(u16 *)D_00CE4F34)) {
        (*(s32 *)D_00CE4F30) = 1;
        (*(u16 *)D_00CE4F34) = arg0;
        (*(s32 *)D_00CE4F38) = 0;
    }
}
