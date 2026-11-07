/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Convert 147456000 Hz timer ticks to optional seconds and microseconds.
 * The original truncates the seconds quotient to 32 bits before computing
 * the fractional component; preserve that arithmetic for large inputs. */
void func_00110E58(unsigned long long ticks, int *seconds, int *microseconds) {
    int whole = (int)(ticks / 147456000ULL);
    if (seconds) *seconds = whole;
    if (microseconds) {
        unsigned long long remainder = ticks -
            (unsigned long long)(unsigned)whole * 147456000U;
        *microseconds = (int)(remainder * 1000000ULL / 147456000ULL);
    }
}
