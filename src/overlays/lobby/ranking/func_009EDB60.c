/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_009EEC00(char *);
s32 func_009EEEC0(char *);
s32 func_009EF0C0(char *);
s32 func_009EF7B0(char *);
s32 func_009EF9A0(char *);
s32 func_009EFB80(char *);
s32 func_009EFEA0(char *);
s32 func_009F0110(char *);
s32 func_009F0410(char *);

void func_009EDB60(char **arg0) {
    char *temp_s0;
    char *temp_s1;

    temp_s0 = *arg0;
    M2C_FIELD(temp_s0, s8 *, 0x38) = 1;
    func_009EEC00(temp_s0);
    func_009EEEC0(temp_s0 + 0x1A0);
    func_009EF0C0(temp_s0 + 0xE0);
    func_009EF7B0(temp_s0 + 0xB0);
    func_009EF9A0(temp_s0 + 0x9C);
    func_009EFB80(temp_s0 + 0x78);
    temp_s1 = temp_s0 + 0x54;
    func_009EFEA0(temp_s1);
    func_009F0110(temp_s1);
    func_009F0410(temp_s0 + 0x3C);
}
