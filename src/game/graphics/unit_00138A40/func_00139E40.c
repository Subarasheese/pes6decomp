/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0043C880[];
extern char D_004FC880[];
extern void *D_004FD08C[];
extern void *D_004FD090[];
extern s32 D_004FD080[];
extern s32 D_004FD084[];
extern s32 D_004FC884[];
extern s32 D_004FD088[];

void func_00139E40(void) {
    D_004FD08C[0] = D_0043C880;
    D_004FD090[0] = D_004FC880;
    D_004FD080[0] = 0;
    D_004FD084[0] = 0;
    *(void **)D_004FC880 = D_0043C880;
    D_004FC884[0] = 1;
    D_004FD088[0] = 1;
    *(volatile u32 *)0x10003C30 = 0;
}
