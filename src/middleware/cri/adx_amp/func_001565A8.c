/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxac3.c (ADXB_CheckAc3). See THIRD_PARTY.md. */

int func_001565A8(unsigned char *hdr) {
    if ((hdr[0] == 0x0b) && (hdr[1] == 0x77)) {
        return 1;
    }
    if ((hdr[0] == 0x77) && (hdr[1] == 0x0b)) {
        return 1;
    }
    if ((hdr[16] == 0x0b) && (hdr[17] == 0x77)) {
        return 1;
    }
    if ((hdr[16] == 0x77) && (hdr[17] == 0x0b)) {
        return 1;
    }
    return 0;
}
