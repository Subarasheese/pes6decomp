/* compiler: ee-gcc-2.96-G0 */
/* new-coke/rez-decomp, src/ps/ps_surf.c (psSurfWordsToBlocks). See THIRD_PARTY.md. */

int func_0010F6E0(unsigned int psm, int words) {
    switch (psm) {
    case 0:

    case 1:

    case 2:

    case 10:

    case 27:

    case 36:

    case 44:

    case 48:

    case 49:

    case 50:

    case 58:
        return (words + 63) / 64;

    case 19:

    case 20:
        words = (words + 63) / 64;
        return words + (words & 1);
    }

    return 0;
}
