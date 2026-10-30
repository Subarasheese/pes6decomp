/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_001D7F10(void *);
extern void func_002E4570(void *);
M2C_UNK func_002E4F00(s32);                         /* extern */
M2C_UNK func_00CE3F00(M2C_UNK *);                   /* extern */
M2C_UNK func_00CECD70(M2C_UNK *);                   /* extern */
M2C_UNK func_00CED470(M2C_UNK *);                   /* extern */
M2C_UNK func_00CED660(M2C_UNK *);                   /* extern */
extern char D_00CFF7D0[];
extern void *D_00CFF7E4;
extern char D_00CFF7F8[];
extern char D_00CFF80C[];
extern char D_00CFF82C[];
extern char D_00CFF848[];
extern char D_00CFF864[];
extern char D_00CFF880[];
extern void *D_00CFF89C;
extern void *D_00CFF8A0;
extern char D_00CFF8A4[];
extern void *D_00CFF8AC;
extern char D_00CFF8B0[];

s32 func_00CE84C0(void) {
    func_00CE3F00(((void *)D_00CFF880));
    func_00CECD70(((void *)D_00CFF7D0));
    func_00CECD70(((void *)D_00CFF7F8));
    func_00CED660(((void *)D_00CFF82C));
    func_00CED660(((void *)D_00CFF848));
    func_00CED470(((void *)D_00CFF82C));
    func_00CED470(((void *)D_00CFF848));
    func_00CED470(((void *)D_00CFF80C));
    func_00CED470(((void *)D_00CFF864));
    func_001D7F10(D_00CFF89C);
    func_001D7F10(D_00CFF8A0);
    func_00153FA0(D_00CFF7E4);
    (*(s32 *)D_00CFF8B0) = 0;
    func_002E4F00((*(s32 *)D_00CFF8A4));
    (*(s32 *)D_00CFF8A4) = 0;
    if (D_00CFF8AC != NULL) {
        func_002E4570(D_00CFF8AC);
        D_00CFF8AC = NULL;
    }
    return 1;
}
