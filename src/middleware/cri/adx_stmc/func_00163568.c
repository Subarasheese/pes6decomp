/* compiler: ee-gcc-2.96-G0 */
/* adxstm_start_sub adapted from LucasPicoli/god-hand-decomp, src/cod/00328190.c. See
 * THIRD_PARTY.md. */

void func_00163568(char *self) {
    int state = *((int *)(self + 0x14));
    *((int *)(self + 0x34)) = 0;
    *((int *)(self + 0x4C)) = 0;
    if (state == 0)
        *((char *)(self + 1)) = 3;
    else
        *((char *)(self + 1)) = 2;
    self[2] = 0;
    *((int *)(self + 0x24)) = 0;
    *((int *)(self + 0x28)) = 0;
    self[0x47] = 1;
}
