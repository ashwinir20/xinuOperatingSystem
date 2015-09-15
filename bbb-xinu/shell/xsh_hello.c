/* xsh_hello.c - xsh_hello */

#include <xinu.h>
#include <string.h>
#include <stdio.h>

/*------------------------------------------------------------------------
 * xhs_hello - write argument strings to stdout with hello
 *------------------------------------------------------------------------
 */

shellcmd xsh_hello(int nargs, char *args[]) {

	int32	i;			/* walks through args array	*/

	if (nargs > 1) {
		printf("Hello %s, Welcome to the world of Xinu!!", args[1]);

		for (i = 2; i < nargs; i++) {
			printf("Hello %s, Welcome to the world of Xinu!!", args[i]);
		}
	}
	printf("\n");

	return 0;
}