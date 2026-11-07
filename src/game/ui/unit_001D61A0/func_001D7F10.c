/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_001D4E50(s32, void *);
extern void func_001D6370();
extern void func_001D8340(void *);
extern void func_001D9380(void *);
extern void func_001EB170(s32);
extern void func_001EC520(s32);

void func_001D7F10(void *object) {
    if (object != NULL) {
        func_001D6370();
        func_001D4E50(M2C_FIELD(object, s32 *, 0x2C), object);
        func_001D9380(object);
        func_001EC520(M2C_FIELD(object, s32 *, 0x34));
        func_001EB170(M2C_FIELD(object, s32 *, 0x30));
        func_001D8340(object);
        func_00153FA0(object);
    }
}
