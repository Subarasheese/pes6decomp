/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern void func_001B0B10(void);
extern void func_00266A30(s32);
extern void func_001A5900(void);
extern void func_001AC410(void);
extern void func_00271EB0(void);
extern void Pes6World_SetActive(s32);
extern void func_0017E150(s32);
extern void func_001A5BE0(s32);
extern void Pes6HeapZone_Open(s32);
s32 func_00B648E0(void) {
    func_001B0B10();
    func_00266A30(0);
    func_001A5900();
    func_001AC410();
    func_00271EB0();
    Pes6World_SetActive(0);
    func_0017E150(0);
    func_001A5BE0(5);
    Pes6HeapZone_Open(11);
    return 1;
}
