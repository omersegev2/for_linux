/* @author: Omer Segev
 * @id: 313772295
 */
#ifndef __TRACK_DB_H__
#define __TRACK_DB_H__

#include "pr2ex4.h"

typedef struct track_db *Track;

/*
 * Track trackCopyTrack(Track track): Creates a copy of a track.
 * 
 * Parameters:
 *      track: The track to copy.
 * 
 * Result: Returns a new Track that is a copy of the given track.
*/
Track trackCopyTrack(Track track);

/*
 * void trackFreeTrack(Track track): Frees the memory allocated for a track.
 * 
 * Parameters:
 *      track: The track to free.
*/
void trackFreeTrack(Track track);

/*
 * void trackPrintTrack(FILE* out, Track track): Prints the details of a track to a file stream.
 * 
 * Parameters:
 *      out: The file stream to which the track will be printed.
 *      track: The track to print.
*/
void trackPrintTrack(FILE* out, Track track);

/*
 * int trackMatchTrackByName(Track track, char* name): Matches a track by its name.
 * 
 * Parameters:
 *      track: The track to match.
 *      name: The name to match against.
 * 
 * Result: Returns 1 if the track's name matches the given name, 0 otherwise.
*/
int trackMatchTrackByName(Track track, char* name);

/*
 * Track trackDbCreate(char *track_name, int track_length): Creates a new track with the given name and length.
 * 
 * Parameters:
 *      track_name: The name of the track.
 *      track_length: The length of the track.
 * 
 * Result: Returns a new Track with the specified name and length.
*/
Track trackDbCreate(char *track_name, int track_length);

/*
 * void trackDbDestroy(Track track): Destroys an existing track.
 * 
 * Parameters:
 *      track: The track to destroy.
*/
void trackDbDestroy(Track track);

#endif //__TRACK_DB_H__

