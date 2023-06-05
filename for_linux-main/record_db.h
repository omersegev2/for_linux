/* @author: Omer Segev
 * @id: 313772295
 */
#ifndef __RECORD_DB_H__
#define __RECORD_DB_H__

#include "pr2ex4.h"

typedef struct record_db *Record;

/*
 * int recordCompareRecordsByName(Record record1, Record record2)
 *
 * Description: Compares two records based on their names.
 * 
 * Parameters:
 *      record1: The first record to compare.
 *      record2: The second record to compare.
 * 
 * Result: Returns a negative value if record1 comes before record2, 0 if they are equal, and a positive value if record1 comes after record2.
 */
int recordCompareRecordsByName(Record record1, Record record2);

/*
 * Record recordCopyRecord(Record record)
 *
 * Description: Creates a copy of a record.
 * 
 * Parameters:
 *      record: The record to copy.
 * 
 * Result: Returns a new copy of the given record.
 */
Record recordCopyRecord(Record record);

/* 
 * void recordFreeRecord(Record record)
 * 
 * Description: Frees the memory allocated for a record.
 * Parameters:
 * record: The record to free.
 */
void recordFreeRecord(Record record);


/*
 * void recordPrintRecord(FILE* out, Record record)
 * 
 * Description: Prints the details of a record to a specified file stream.
 * 
 * Parameters:
 *      out: The file stream to which the record details will be printed.
 *      record: The record to print.
*/
void recordPrintRecord(FILE* out, Record record);

/*
 * int recordMatchRecordByName(Record record, char *name)
 * 
 * Description: Checks if a record matches a given name.
 * 
 * Parameters:
 *      record: The record to check.
 *      name: The name to match.
 * 
 * Result: Returns 1 if the record matches the given name, 0 otherwise.
*/
int recordMatchRecordByName(Record record, char *name);

/*
 * int recordMatchRecordByCategory(Record record, RecordsCategory category)
 * 
 * Description: Checks if a record matches a given category.
 * 
 * Parameters:
 *      record: The record to check.
 *      category: The category to match.
 * 
 * Result: Returns 1 if the record matches the given category, 0 otherwise.
*/
int recordMatchRecordByCategory(Record record, RecordsCategory category);

/*
 * int recordMatchRecordByTrackName(Record record, char* trackName)
 * 
 * Description: Checks if a record contains a track with a given name.
 * 
 * Parameters:
 *      record: The record to check.
 *      trackName: The name of the track to match.
 * 
 * Result: Returns 1 if the record contains a track with the given name, 0 otherwise.
*/
int recordMatchRecordByTrackName(Record record, char* trackName);

/*
 * Record recordDbCreate(const char *name, int year, RecordsCategory category)
 * 
 * Description: Creates a new record with the given name, year, and category.
 * 
 * Parameters:
 *      name: The name of the record.
 *      year: The year of the record.
 *      category: The category of the record.
 * 
 * Result: Returns a new Record object.
*/
Record recordDbCreate(const char *name, int year, RecordsCategory category);

/*
 * void recordDbDestroy(Record record)
 * 
 * Description: Destroys a record, freeing its memory and associated resources.
 * 
 * Parameters:
 *      record: The record to destroy.
*/
void recordDbDestroy(Record record);

/*
 * RecordsResult recordDbAddTrackToRecord(Record record, char *trackName, int trackLength)
 * 
 * Description: Adds a new track to a record.
 * 
 * Parameters:
 *      record: The record to which the track will be added.
 *      trackName: The name of the track to add.
 *      trackLength: The length of the track to add.
 * 
 * Result: Returns a RecordsResult indicating the status of the operation.
*/
RecordsResult recordDbAddTrackToRecord(Record record, char *trackName, int trackLength);

/*
 * RecordsResult recordDbRemoveTrackFromRecord(Record record, char *trackName)
 * 
 * Description: Removes a track from a record.
 * 
 * Parameters:
 *      record: The record from which the track will be removed.
 *      trackName: The name of the track to remove.
 * 
 * Result: Returns a RecordsResult indicating the status of the operation.
*/
RecordsResult recordDbRemoveTrackFromRecord(Record record, char *trackName);


#endif //__RECORD_DB_H__
