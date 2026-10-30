/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
extern void func_001BC360(void);
extern void func_00363BD0(void);
extern void func_002F4E10(void *);
void func_00CE33E0(void *arg0) {
    s32 temp_a0;

    func_002F4E10(M2C_FIELD(arg0, void **, 0));
    M2C_FIELD(arg0, void **, 0) = NULL;
    func_001BC360();
    func_001BC360();
    func_001BC360();
    func_001BC360();
    func_00363BD0();
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x114);
    switch (temp_a0) {                              /* irregular */
    case 1:
        if (M2C_FIELD(arg0, s32 *, 0x110) == 0) {
            M2C_FIELD(arg0, s32 *, 0x118) = 1;
        } else {
        case -1:
            M2C_FIELD(arg0, s32 *, 0x118) = 0;
        }
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    func_001BC2B0();
}
