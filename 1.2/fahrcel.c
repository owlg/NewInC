#include <stdio.h>
/* Print the fahrenheit and Celsius table.
for fahr = 0, 20, ..., 300 */

main() {
	/* define integers */
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /* starts from 0 */
	upper = 300; /* upper limit */
	step = 20; /* increment by */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) /9; /* formula to change from fahrenheit to celsius */
		printf("&d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}