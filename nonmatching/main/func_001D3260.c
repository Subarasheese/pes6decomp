/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_00103790(void *);
extern void func_001036F0(void *, int);
extern int func_00103748(int);
M2C_UNK func_00103778(M2C_UNK *, s128);             /* extern */
M2C_UNK func_001CF3F0(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001CF7D0(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001CFBB0(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001CFEC0(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D01C0(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D04D0(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D07E0(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D0A30(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D0C40(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D0E80(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D1080(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D13D0(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D1670(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D1870(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D1CB0(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D2030(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D2470(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D27E0(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D2B20(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D2DB0(u16 *, M2C_UNK *);            /* extern */
M2C_UNK func_001D3560(u16 *);                       /* extern */
M2C_UNK func_001D47E0();                            /* extern */
extern char D_003992E0[];
extern char D_0052AB10[];
extern char D_0052AB38[];

void func_001D3260(u16 *arg0) {
    u16 temp_v0;

    if (!(*arg0 & 0x20) || ((*(s64 *)D_0052AB38) != 0)) {
        func_001D47E0();
        func_001036F0(((void *)D_0052AB10), 0);
        func_001D3560(arg0);
        func_00103778(((void *)D_0052AB10), (*(s128 *)D_003992E0));
        temp_v0 = *arg0;
        switch (temp_v0) {                          /* irregular */
        case 0x73:
            func_001D01C0(arg0, ((void *)D_0052AB10));
            break;
        case 0x63:
            func_001D04D0(arg0, ((void *)D_0052AB10));
            break;
        case 0x53:
            func_001D07E0(arg0, ((void *)D_0052AB10));
            break;
        case 0x52:
            func_001D0A30(arg0, ((void *)D_0052AB10));
            break;
        case 0x43:
            func_001D0C40(arg0, ((void *)D_0052AB10));
            break;
        case 0x42:
            func_001D0E80(arg0, ((void *)D_0052AB10));
            break;
        case 0x34:
            func_001D1870(arg0, ((void *)D_0052AB10));
            break;
        case 0x33:
            func_001D1CB0(arg0, ((void *)D_0052AB10));
            break;
        case 0x24:
            func_001D2030(arg0, ((void *)D_0052AB10));
            break;
        case 0x23:
            func_001D2470(arg0, ((void *)D_0052AB10));
            break;
        case 0x14:
            func_001D1080(arg0, ((void *)D_0052AB10));
            break;
        case 0x13:
            func_001D13D0(arg0, ((void *)D_0052AB10));
            break;
        case 0x12:
            func_001D1670(arg0, ((void *)D_0052AB10));
            break;
        case 0x4:
            func_001D27E0(arg0, ((void *)D_0052AB10));
            break;
        case 0x3:
            func_001D2B20(arg0, ((void *)D_0052AB10));
            break;
        case 0x2:
            func_001D2DB0(arg0, ((void *)D_0052AB10));
            break;
        case 0x183:
        case 0x83:
            func_001CFEC0(arg0, ((void *)D_0052AB10));
            break;
        case 0x193:
        case 0x93:
            func_001CFBB0(arg0, ((void *)D_0052AB10));
            break;
        case 0x1A3:
        case 0xA3:
            func_001CF7D0(arg0, ((void *)D_0052AB10));
            break;
        case 0x1B3:
        case 0xB3:
            func_001CF3F0(arg0, ((void *)D_0052AB10));
            break;
        }
        func_00103790(((void *)D_0052AB10));
        func_00103748((s32) ((void *)D_0052AB10));
    }
}
