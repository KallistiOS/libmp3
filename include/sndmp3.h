/* KallistiOS ##version##

   sndmp3.h
   (c)2000 Dan Potter
*/

#ifndef __SNDMP3_H
#define __SNDMP3_H

#include <sys/cdefs.h>
__BEGIN_DECLS

int sndmp3_init(const char *fn, int loop);

/* Initialize the MP3 driver; takes an input filename and starts the
   decoding process. */
int sndmp3_start(const char *fn, int loop);

/* Shut everything down */
void sndmp3_shutdown();

/* Controls volume of MP3 stream */
void sndmp3_volume(int vol);

__END_DECLS

#endif	/* __SNDMP3_H */

