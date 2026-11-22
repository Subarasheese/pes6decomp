/* compiler: ee-gcc-2.96-G0 */
/* Yotona/twewy, libs/cri/src/adx_crs.c (ADXCRS_Init). See THIRD_PARTY.md. */

extern volatile int D_00390F50;
extern volatile int D_00390F58;

void func_00176390(void) {
    D_00390F58++;
    if (D_00390F58 == 1) {
        D_00390F50 = 0;
    }
}
