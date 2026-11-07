/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Date { unsigned char pad[5], day, month, year; };
void func_002D99E8(struct Date *d) {
    char days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    d->day++;
    if (!(((volatile struct Date *)d)->year & 3)) days[1] = 29;
    if (days[d->month - 1] < d->day) {
        d->day = 1;
        if (++d->month == 13) {
            if (d->year == 99) d->year = 0;
            else d->year++;
            d->month = 1;
        }
    }
}
