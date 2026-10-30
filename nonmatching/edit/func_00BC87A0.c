/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A6390(void);
M2C_UNK func_001B0B10();                            /* extern */
M2C_UNK func_008CBC90();                            /* extern */
extern char D_00CE4F30[];
extern char D_00CE4F34[];

void func_00BC87A0(void) {
    func_001A6390();
    func_001B0B10();
    func_008CBC90();
    (*(s32 *)D_00CE4F30) = 0;
    (*(s16 *)D_00CE4F34) = 0xFFFF;
}
