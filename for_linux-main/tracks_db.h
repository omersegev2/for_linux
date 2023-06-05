/* @author: Omer Segev
 * @id: 313772295
 */
#ifndef __TRACKS_DB_H__
#define __TRACKS_DB_H__

typedef struct tracks_db *TracksDB;

#include "pr2ex4.h"

typedef enum TracksResult_e {
    TRK_SUCCESS,
    TRK_NULL_ARGUMENT,
    TRK_RECORD_DOESNT_EXIST,
    TRK_INVALID_YEAR,
    TRK_INVALID_CATEGORY,
    TRK_RECORD_ALREADY_EXISTS,
    TRK_NO_RECORDS,
    TRK_INVALID_TRACK_LENGTH,
    TRK_TRACK_ALREADY_EXISTS,
    TRK_NO_TRACKS,
    TRK_TRACK_DOESNT_EXIST,
    TRK_OUT_OF_MEMORY
} TracksResult;

/*
 * TracksDB tracksDbCreate()
 * 
 * Description: Creates a new empty tracks database.
 * 
 * Parameters: None.
 * 
 * Result:
 *      NULL - In case of memory allocation failure.
 *      A new TracksDB - In case of success.
*/
TracksDB tracksDbCreate();

/*
 * void tracksDbDestroy(TracksDB tracks_db)
 * 
 * Description: Destroys an existing tracks database.
 * 
 * Parameters:
 *      tracks_db: The tracks database to destroy.
*/
void tracksDbDestroy(TracksDB tracks_db);

/*
 * TracksResult tracksDbAddTrack(TracksDB tracks_db, char *track_name, int track_length)
 * 
 * Description: Adds a new track to the tracks database.
 * 
 * Parameters:
 *      tracks_db: An existing tracks database.
 *      track_name: The name of the track to add.
 *      track_length: The length of the track to add.
 * 
 * Result: Returns a TracksResult indicating the status of the operation.
*/
TracksResult tracksDbAddTrack(TracksDB tracks_db, char *track_name, int track_length);

/*
 * TracksResult tracksDbRemoveTrack(TracksDB tracks_db, char *track_name)
 * 
 * Description: Removes a track from the tracks database.
 * 
 * Parameters:
 *      tracks_db: An existing tracks database.
 *      track_name: The name of the track to remove.
 * 
 * Result: Returns a TracksResult indicating the status of the operation.
*/
TracksResult tracksDbRemoveTrack(TracksDB tracks_db, char *track_name);

/*
 * TracksResult tracksDbReportTracks(TracksDB tracks_db, FILE *out)
 * 
 * Description: Reports all the tracks in the tracks database.
 * 
 * Parameters:
 *      tracks_db: An existing tracks database.
 *      out: The file stream to which the tracks will be reported.
 * 
 * Result: Returns a TracksResult indicating the status of the operation.
*/
TracksResult tracksDbReportTracks(TracksDB tracks_db, FILE *out);

/*
 * TracksDB tracksDbTracksCopy(TracksDB tracks_db)
 * 
 * Description: Creates a copy of the tracks database.
 * 
 * Parameters:
 *      tracks_db: The tracks database to copy.
 * 
 * Result: Returns a new TracksDB that is a copy of the given tracks database.
*/
TracksDB tracksDbTracksCopy(TracksDB tracks_db);

/*
 * int findTrackInRecord(TracksDB tracks_db, char *track_name)
 * 
 * Description: Finds a track in the tracks database by its name.
 * 
 * Parameters:
 *      tracks_db: An existing tracks database.
 *      track_name: The name of the track to find.
 * 
 * Result: Returns 1 if the track is found in the tracks database, 0 otherwise.
*/
int findTrackInRecord(TracksDB tracks_db, char *track_name);

#endif // __TRACKS_DB_H__
