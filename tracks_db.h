#ifndef __TRACKS_DB_H__
#define __TRACKS_DB_H__

typedef struct tracks_db *TracksDB;

#include "pr2ex4.h"

TracksDB tracksDbCreate();

void tracksDbDestroy(TracksDB tracks_db);

RecordsResult tracksDbAddTrack(TracksDB tracks_db, char *track_name, int track_length);

RecordsResult tracksDbRemoveTrack(TracksDB tracks_db, char *track_name);

RecordsResult tracksDbReportTracks(TracksDB tracks_db, FILE *out);

TracksDB tracksDbTracksCopy(TracksDB tracks_db);

int findTrackInRecord(TracksDB tracks_db, char *track_name);

#endif // __TRACKS_DB_H__
