/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00BB1E40(void);
extern void func_00BB2580(void);
extern s32 *func_00BB2690(void);
extern s32 *func_00BB2808(void);
extern s32 *func_00BB2878(void);
extern s32 *func_00BB2A60(void);
M2C_UNK func_00BB4980(s32);
M2C_UNK func_00BB49E8(s32);
M2C_UNK func_00BB4B58(M2C_UNK *, M2C_UNK *);
extern s32 *func_00BB68E8(void);
extern s32 *func_00BB68F8(void);
extern s32 *func_00BB6908(void);
extern s32 *func_00BB6938(void);
extern void func_00BC65C0(void);
M2C_UNK func_00BCF2B0(M2C_UNK);
extern char D_00C4CA50[];
extern char D_00C4CA58[];
extern char D_00C4CA68[];
extern char D_00C4CA78[];
extern char D_00C4CA80[];

s32 func_00BCD1C8(void) {
    func_00BB4980(func_00BB2808());
    func_00BB4980(func_00BB2690());
    func_00BB4980(func_00BB2A60());
    func_00BB4980(func_00BB2878());
    func_00BB49E8(func_00BB68F8());
    func_00BB49E8(func_00BB6908());
    func_00BB4B58(((void *)D_00C4CA50), ((void *)D_00C4CA58));
    func_00BB4B58(((void *)D_00C4CA50), ((void *)D_00C4CA68));
    func_00BB49E8(func_00BB6938());
    func_00BB4B58(((void *)D_00C4CA78), ((void *)D_00C4CA80));
    func_00BB49E8(func_00BB68E8());
    func_00BB2580();
    func_00BCF2B0(2);
    func_00BB1E40();
    func_00BCF2B0(1);
    func_00BC65C0();
    return 1;
}
