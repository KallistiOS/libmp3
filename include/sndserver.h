/* KallistiOS ##version##

   sndserver.h
   (c)2000 Dan Potter
*/

#ifndef __SNDSERVER_H
#define __SNDSERVER_H

#include <sys/cdefs.h>
__BEGIN_DECLS

/* Starts the MP3 server thread */
int mp3_init();

/* Starts a song playing */
int mp3_start(const char *fn, int loop);

/* Stops the playing song */
int mp3_stop();

/* Shuts down the MP3 server thread */
int mp3_shutdown();

/* Controls volume level of stream */
void mp3_volume(int vol);

__END_DECLS

#endif	/* __SNDSERVER_H */
