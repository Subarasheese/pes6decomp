/* compiler: ee-gcc-2.9-as210-G0 */
/* SPDX-License-Identifier: GPL-3.0-or-later */
/* Adapted from OpenThievius/sly2-decomp, nonmatching/sdk/sceMpegInit.c. See THIRD_PARTY.md. */
extern int DIntr();
extern void EIntr();
extern void func_00104CD8();
int func_008FBAC0(void)
{
    int flag = DIntr();
    *(volatile unsigned *)0x1000F590 = *(volatile unsigned *)0x1000F520 | 0x10000;
    *(volatile unsigned *)0x1000B000 &= 0xFFFFFEFF;
    *(volatile unsigned *)0x1000B400 &= 0xFFFFFEFF;
    *(volatile unsigned *)0x1000F590 = *(volatile unsigned *)0x1000F520 & 0xFFFEFFFF;
    if (flag)
        EIntr();
    *(volatile unsigned *)0x1000B020 = 0;
    *(volatile unsigned *)0x1000B420 = 0;
    func_00104CD8();
    return 1;
}
