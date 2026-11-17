/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001A5F20(s64);
s64 func_00208210(s64);
void func_00BC1A30(s64);
void func_00BC1B10(s64);
void func_00BC1BE0(s64);
void func_00BC1CB0(s64);
void func_00BC1D80(s64);
void func_00BC1E40(s64);
void func_00BC1F10(s64);
void func_00BC1FF0(s64);
void func_00BC20B0(s64);
void func_00BC2190(s64);
void func_00BC2260(s64);
void func_00BC2340(s64);

s64 func_00BC13A0(s64 a0) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    a0 = 4; v0 = func_001A5F20(a0);
    a0 = v0; v0 = func_00208210(a0);
    v0 = (s32) ((u32) v0 + 0xffffff95U);
    at = (u64) v0 < (u64) (s64) 24;
    if (at == 0) goto L_00BC1A18;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x2230U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc13ecU) goto L_00BC13EC; if (t_ == 0xbc1468U) goto L_00BC1468; if (t_ == 0xbc14f4U) goto L_00BC14F4; if (t_ == 0xbc1580U) goto L_00BC1580; if (t_ == 0xbc1608U) goto L_00BC1608; if (t_ == 0xbc1694U) goto L_00BC1694; if (t_ == 0xbc1728U) goto L_00BC1728; if (t_ == 0xbc17c4U) goto L_00BC17C4; if (t_ == 0xbc1828U) goto L_00BC1828; if (t_ == 0xbc188cU) goto L_00BC188C; if (t_ == 0xbc189cU) goto L_00BC189C; if (t_ == 0xbc18acU) goto L_00BC18AC; if (t_ == 0xbc18bcU) goto L_00BC18BC; if (t_ == 0xbc18ccU) goto L_00BC18CC; if (t_ == 0xbc18dcU) goto L_00BC18DC; if (t_ == 0xbc18ecU) goto L_00BC18EC; if (t_ == 0xbc18fcU) goto L_00BC18FC; if (t_ == 0xbc190cU) goto L_00BC190C; if (t_ == 0xbc191cU) goto L_00BC191C; if (t_ == 0xbc192cU) goto L_00BC192C; if (t_ == 0xbc193cU) goto L_00BC193C; if (t_ == 0xbc194cU) goto L_00BC194C; if (t_ == 0xbc19b0U) goto L_00BC19B0; if (t_ == 0xbc19fcU) goto L_00BC19FC; }
L_00BC13EC:;
    v0 = (s32) ((u32) s0 + 0xffffffa8U);
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_00BC1458;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x2210U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc13ecU) goto L_00BC13EC; if (t_ == 0xbc1418U) goto L_00BC1418; if (t_ == 0xbc1420U) goto L_00BC1420; if (t_ == 0xbc1428U) goto L_00BC1428; if (t_ == 0xbc1430U) goto L_00BC1430; if (t_ == 0xbc1438U) goto L_00BC1438; if (t_ == 0xbc1440U) goto L_00BC1440; if (t_ == 0xbc1448U) goto L_00BC1448; if (t_ == 0xbc1450U) goto L_00BC1450; if (t_ == 0xbc1468U) goto L_00BC1468; if (t_ == 0xbc14f4U) goto L_00BC14F4; if (t_ == 0xbc1580U) goto L_00BC1580; if (t_ == 0xbc1608U) goto L_00BC1608; if (t_ == 0xbc1694U) goto L_00BC1694; if (t_ == 0xbc1728U) goto L_00BC1728; if (t_ == 0xbc17c4U) goto L_00BC17C4; if (t_ == 0xbc1828U) goto L_00BC1828; if (t_ == 0xbc188cU) goto L_00BC188C; if (t_ == 0xbc189cU) goto L_00BC189C; if (t_ == 0xbc18acU) goto L_00BC18AC; if (t_ == 0xbc18bcU) goto L_00BC18BC; if (t_ == 0xbc18ccU) goto L_00BC18CC; if (t_ == 0xbc18dcU) goto L_00BC18DC; if (t_ == 0xbc18ecU) goto L_00BC18EC; if (t_ == 0xbc18fcU) goto L_00BC18FC; if (t_ == 0xbc190cU) goto L_00BC190C; if (t_ == 0xbc191cU) goto L_00BC191C; if (t_ == 0xbc192cU) goto L_00BC192C; if (t_ == 0xbc193cU) goto L_00BC193C; if (t_ == 0xbc194cU) goto L_00BC194C; if (t_ == 0xbc19b0U) goto L_00BC19B0; if (t_ == 0xbc19fcU) goto L_00BC19FC; }
L_00BC1418:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC1460;
L_00BC1420:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1483); goto L_00BC1460;
L_00BC1428:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1484); goto L_00BC1460;
L_00BC1430:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1485); goto L_00BC1460;
L_00BC1438:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1486); goto L_00BC1460;
L_00BC1440:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1487); goto L_00BC1460;
L_00BC1448:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1488); goto L_00BC1460;
L_00BC1450:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1489); goto L_00BC1460;
L_00BC1458:;
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC1460:;
    goto L_00BC1A20;
L_00BC1468:;
    v0 = (s32) ((u32) s0 + 0xffffffc2U);
    at = (u64) v0 < (u64) (s64) 11;
    if (at == 0) goto L_00BC14E4;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x21e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc1494U) goto L_00BC1494; if (t_ == 0xbc149cU) goto L_00BC149C; if (t_ == 0xbc14a4U) goto L_00BC14A4; if (t_ == 0xbc14acU) goto L_00BC14AC; if (t_ == 0xbc14b4U) goto L_00BC14B4; if (t_ == 0xbc14bcU) goto L_00BC14BC; if (t_ == 0xbc14c4U) goto L_00BC14C4; if (t_ == 0xbc14ccU) goto L_00BC14CC; if (t_ == 0xbc14d4U) goto L_00BC14D4; if (t_ == 0xbc14dcU) goto L_00BC14DC; if (t_ == 0xbc14e4U) goto L_00BC14E4; }
L_00BC1494:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC14EC;
L_00BC149C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1483); goto L_00BC14EC;
L_00BC14A4:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1484); goto L_00BC14EC;
L_00BC14AC:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1485); goto L_00BC14EC;
L_00BC14B4:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1486); goto L_00BC14EC;
L_00BC14BC:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1487); goto L_00BC14EC;
L_00BC14C4:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1488); goto L_00BC14EC;
L_00BC14CC:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1489); goto L_00BC14EC;
L_00BC14D4:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1490); goto L_00BC14EC;
L_00BC14DC:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1491); goto L_00BC14EC;
L_00BC14E4:;
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC14EC:;
    goto L_00BC1A1C;
L_00BC14F4:;
    v0 = (s32) ((u32) s0 + 0xffffffc2U);
    at = (u64) v0 < (u64) (s64) 15;
    if (at == 0) goto L_00BC1570;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x21a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc1520U) goto L_00BC1520; if (t_ == 0xbc1528U) goto L_00BC1528; if (t_ == 0xbc1530U) goto L_00BC1530; if (t_ == 0xbc1538U) goto L_00BC1538; if (t_ == 0xbc1540U) goto L_00BC1540; if (t_ == 0xbc1548U) goto L_00BC1548; if (t_ == 0xbc1550U) goto L_00BC1550; if (t_ == 0xbc1558U) goto L_00BC1558; if (t_ == 0xbc1560U) goto L_00BC1560; if (t_ == 0xbc1568U) goto L_00BC1568; if (t_ == 0xbc1570U) goto L_00BC1570; }
L_00BC1520:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC1578;
L_00BC1528:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1483); goto L_00BC1578;
L_00BC1530:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1484); goto L_00BC1578;
L_00BC1538:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1485); goto L_00BC1578;
L_00BC1540:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1486); goto L_00BC1578;
L_00BC1548:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1487); goto L_00BC1578;
L_00BC1550:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1488); goto L_00BC1578;
L_00BC1558:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1489); goto L_00BC1578;
L_00BC1560:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1490); goto L_00BC1578;
L_00BC1568:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1491); goto L_00BC1578;
L_00BC1570:;
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC1578:;
    goto L_00BC1A1C;
L_00BC1580:;
    v0 = 70;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1491); goto L_00BC1600; }
    v0 = 63;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1490); goto L_00BC1600; }
    v0 = 64;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1489); goto L_00BC1600; }
    v0 = 65;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1488); goto L_00BC1600; }
    v0 = 69;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1487); goto L_00BC1600; }
    v0 = 17;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1486); goto L_00BC1600; }
    v0 = 67;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1485); goto L_00BC1600; }
    v0 = 68;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1484); goto L_00BC1600; }
    v0 = 62;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1483); goto L_00BC1600; }
    v0 = 66;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC1600; }
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC1600:;
    goto L_00BC1A1C;
L_00BC1608:;
    v0 = (s32) ((u32) s0 + 0xffffffc2U);
    at = (u64) v0 < (u64) (s64) 13;
    if (at == 0) goto L_00BC1684;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x2160U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc1634U) goto L_00BC1634; if (t_ == 0xbc163cU) goto L_00BC163C; if (t_ == 0xbc1644U) goto L_00BC1644; if (t_ == 0xbc164cU) goto L_00BC164C; if (t_ == 0xbc1654U) goto L_00BC1654; if (t_ == 0xbc165cU) goto L_00BC165C; if (t_ == 0xbc1664U) goto L_00BC1664; if (t_ == 0xbc166cU) goto L_00BC166C; if (t_ == 0xbc1674U) goto L_00BC1674; if (t_ == 0xbc167cU) goto L_00BC167C; if (t_ == 0xbc1684U) goto L_00BC1684; }
L_00BC1634:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC168C;
L_00BC163C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1483); goto L_00BC168C;
L_00BC1644:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1484); goto L_00BC168C;
L_00BC164C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1485); goto L_00BC168C;
L_00BC1654:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1486); goto L_00BC168C;
L_00BC165C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1487); goto L_00BC168C;
L_00BC1664:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1488); goto L_00BC168C;
L_00BC166C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1489); goto L_00BC168C;
L_00BC1674:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1490); goto L_00BC168C;
L_00BC167C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1491); goto L_00BC168C;
L_00BC1684:;
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC168C:;
    goto L_00BC1A1C;
L_00BC1694:;
    v0 = 70;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1492); goto L_00BC1720; }
    v0 = 63;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1491); goto L_00BC1720; }
    v0 = 64;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1490); goto L_00BC1720; }
    v0 = 65;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1489); goto L_00BC1720; }
    v0 = 37;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1488); goto L_00BC1720; }
    v0 = 36;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1487); goto L_00BC1720; }
    v0 = 16;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1486); goto L_00BC1720; }
    v0 = 67;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1485); goto L_00BC1720; }
    v0 = 68;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1484); goto L_00BC1720; }
    v0 = 62;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1483); goto L_00BC1720; }
    v0 = 66;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC1720; }
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC1720:;
    goto L_00BC1A1C;
L_00BC1728:;
    v0 = (s32) ((u32) s0 + 0xffffffceU);
    at = (u64) v0 < (u64) (s64) 12;
    if (at == 0) goto L_00BC17B4;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x2130U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc1634U) goto L_00BC1634; if (t_ == 0xbc163cU) goto L_00BC163C; if (t_ == 0xbc1644U) goto L_00BC1644; if (t_ == 0xbc164cU) goto L_00BC164C; if (t_ == 0xbc1654U) goto L_00BC1654; if (t_ == 0xbc165cU) goto L_00BC165C; if (t_ == 0xbc1664U) goto L_00BC1664; if (t_ == 0xbc166cU) goto L_00BC166C; if (t_ == 0xbc1674U) goto L_00BC1674; if (t_ == 0xbc167cU) goto L_00BC167C; if (t_ == 0xbc1684U) goto L_00BC1684; if (t_ == 0xbc1754U) goto L_00BC1754; if (t_ == 0xbc175cU) goto L_00BC175C; if (t_ == 0xbc1764U) goto L_00BC1764; if (t_ == 0xbc176cU) goto L_00BC176C; if (t_ == 0xbc1774U) goto L_00BC1774; if (t_ == 0xbc177cU) goto L_00BC177C; if (t_ == 0xbc1784U) goto L_00BC1784; if (t_ == 0xbc178cU) goto L_00BC178C; if (t_ == 0xbc1794U) goto L_00BC1794; if (t_ == 0xbc179cU) goto L_00BC179C; if (t_ == 0xbc17a4U) goto L_00BC17A4; if (t_ == 0xbc17acU) goto L_00BC17AC; }
L_00BC1754:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC17BC;
L_00BC175C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1483); goto L_00BC17BC;
L_00BC1764:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1484); goto L_00BC17BC;
L_00BC176C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1485); goto L_00BC17BC;
L_00BC1774:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1486); goto L_00BC17BC;
L_00BC177C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1487); goto L_00BC17BC;
L_00BC1784:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1488); goto L_00BC17BC;
L_00BC178C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1489); goto L_00BC17BC;
L_00BC1794:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1490); goto L_00BC17BC;
L_00BC179C:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1491); goto L_00BC17BC;
L_00BC17A4:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1492); goto L_00BC17BC;
L_00BC17AC:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1493); goto L_00BC17BC;
L_00BC17B4:;
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC17BC:;
    goto L_00BC1A1C;
L_00BC17C4:;
    v0 = 33;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1488); goto L_00BC1820; }
    v0 = 31;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1487); goto L_00BC1820; }
    v0 = 29;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1486); goto L_00BC1820; }
    v0 = 28;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1485); goto L_00BC1820; }
    v0 = 32;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1484); goto L_00BC1820; }
    v0 = 17;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1483); goto L_00BC1820; }
    v0 = 16;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC1820; }
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC1820:;
    goto L_00BC1A1C;
L_00BC1828:;
    v0 = 33;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1488); goto L_00BC1884; }
    v0 = 31;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1487); goto L_00BC1884; }
    v0 = 30;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1486); goto L_00BC1884; }
    v0 = 28;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1485); goto L_00BC1884; }
    v0 = 32;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1484); goto L_00BC1884; }
    v0 = 17;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1483); goto L_00BC1884; }
    v0 = 16;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC1884; }
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC1884:;
    goto L_00BC1A1C;
L_00BC188C:;
    a0 = s0; func_00BC2340(a0);
    goto L_00BC1A1C;
L_00BC189C:;
    a0 = s0; func_00BC2260(a0);
    goto L_00BC1A1C;
L_00BC18AC:;
    a0 = s0; func_00BC2190(a0);
    goto L_00BC1A1C;
L_00BC18BC:;
    a0 = s0; func_00BC20B0(a0);
    goto L_00BC1A1C;
L_00BC18CC:;
    a0 = s0; func_00BC1FF0(a0);
    goto L_00BC1A1C;
L_00BC18DC:;
    a0 = s0; func_00BC1F10(a0);
    goto L_00BC1A1C;
L_00BC18EC:;
    a0 = s0; func_00BC1E40(a0);
    goto L_00BC1A1C;
L_00BC18FC:;
    a0 = s0; func_00BC1D80(a0);
    goto L_00BC1A1C;
L_00BC190C:;
    a0 = s0; func_00BC1CB0(a0);
    goto L_00BC1A1C;
L_00BC191C:;
    a0 = s0; func_00BC1BE0(a0);
    goto L_00BC1A1C;
L_00BC192C:;
    a0 = s0; func_00BC1B10(a0);
    goto L_00BC1A1C;
L_00BC193C:;
    a0 = s0; func_00BC1A30(a0);
    goto L_00BC1A1C;
L_00BC194C:;
    v0 = 3;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1488); goto L_00BC19A8; }
    v0 = 2;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1487); goto L_00BC19A8; }
    v0 = 35;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1486); goto L_00BC19A8; }
    v0 = 36;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1485); goto L_00BC19A8; }
    v0 = 6;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1484); goto L_00BC19A8; }
    v0 = 17;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1483); goto L_00BC19A8; }
    v0 = 77;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC19A8; }
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC19A8:;
    goto L_00BC1A1C;
L_00BC19B0:;
    v0 = 3;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1486); goto L_00BC19F4; }
    v0 = 2;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1485); goto L_00BC19F4; }
    v0 = 1;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1484); goto L_00BC19F4; }
    v0 = 4;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1483); goto L_00BC19F4; }
    v0 = 77;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC19F4; }
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC19F4:;
    goto L_00BC1A1C;
L_00BC19FC:;
    v0 = 5;
    if (s0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1482); goto L_00BC1A10; }
    v0 = 0xffff;
    v0 = v0 & 0xffff;
L_00BC1A10:;
    goto L_00BC1A1C;
L_00BC1A18:;
    v0 = 0xffff;
L_00BC1A1C:;
L_00BC1A20:;
    return v0;
}
