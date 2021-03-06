/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSManagedObjectModel, NSString;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
    id *_additionalPrivateIvars;
    void *_dispatchQueue;
    struct _persistentStoreCoordinatorFlags { 
        unsigned int _isRegistered : 1; 
        unsigned int _reservedFlags : 31; 
    } _flags;
    NSManagedObjectModel *_managedObjectModel;
    long _miniLock;
    NSArray *_persistentStores;
    id _queueOwner;
}

@property(readonly) NSManagedObjectModel * managedObjectModel;
@property(copy) NSString * name;
@property(readonly) NSArray * persistentStores;

+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+ (id)_beginPowerAssertionWithAssert:(unsigned int*)arg1;
+ (Class)_classForPersistentStoreAtURL:(id)arg1;
+ (void)_endPowerAssertionWithAssert:(unsigned int)arg1 andApp:(id)arg2;
+ (void)_registerCoreDataStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (void)_registerDefaultStoreClassesAndTypes;
+ (Class)_storeClassForStoreType:(id)arg1;
+ (id)_storeTypeForStore:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(id*)arg3;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (void)registerStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (id)registeredStoreTypes;
+ (BOOL)removeUbiquitousContentAndPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 error:(id*)arg4;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 localPeerID:(id)arg3 ubiquityName:(id)arg4;
+ (id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 ubiquityName:(id)arg3;

- (id)URLForPersistentStore:(id)arg1;
- (void)_addPersistentStore:(id)arg1 identifier:(id)arg2;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (void)_assignObject:(id)arg1 toPersistentStore:(id)arg2;
- (void)_assignObject:(id)arg1 toPersistentStore:(id)arg2 forConfiguration:(id)arg3;
- (void)_assignObjects:(id)arg1 toStore:(id)arg2;
- (BOOL)_canSaveGraphRootedAtObject:(id)arg1 intoStore:(id)arg2 withPreviouslyChecked:(struct __CFSet { }*)arg3 withAcceptableEntities:(struct __CFSet { }*)arg4;
- (BOOL)_checkForPostLionWriter:(id)arg1;
- (BOOL)_checkForSkewedEntityHashes:(id)arg1 metadata:(id)arg2;
- (id)_checkRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4;
- (id)_conflictsWithRowCacheForObject:(id)arg1 withContext:(id)arg2 andStore:(id)arg3;
- (void)_coordinator_no_idea_what_kind_of_request_that_was_supposed_to_be;
- (void)_coordinator_you_never_successfully_opened_the_database_cant_open:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_corrupted:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_device_locked:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_disk_full:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_io_error:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_missing_directory:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_no_permission:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_schema_mismatch:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_so_saving_back_to_it_is_kinda_hard:(id)arg1;
- (void)_copyMetadataFromStore:(id)arg1 toStore:(id)arg2 migrationManager:(id)arg3;
- (BOOL)_deleteAllRowsNoRelationshipIntegrityForStore:(id)arg1 andEntityWithAllSubentities:(id)arg2 error:(id*)arg3;
- (BOOL)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 error:(id*)arg3;
- (BOOL)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)_doPreSaveAssignmentsForObjects:(id)arg1;
- (id)_exceptionNoStoreSaveFailureForError:(id)arg1 recommendedFrame:(int*)arg2;
- (id)_fetchAllInstancesFromStore:(id)arg1 intoContext:(id)arg2 underlyingException:(id*)arg3;
- (void)_introspectLastErrorAndThrow;
- (BOOL)_isRegisteredWithUbiquity;
- (id)_newConflictRecordForObject:(id)arg1 andOriginalRow:(id)arg2 withContext:(id)arg3;
- (id)_newObjectGraphStyleRecordForRow:(id)arg1 andObject:(id)arg2 withContext:(id)arg3;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)_persistentStoreForIdentifier:(id)arg1;
- (void)_postStoresChangedNotificationsForStores:(id)arg1 changeKey:(id)arg2 options:(id)arg3;
- (id)_processStoreResults:(id)arg1 forRequest:(id)arg2;
- (id)_realStoreTypeForStoreWithType:(id)arg1 URL:(id)arg2 error:(id*)arg3;
- (BOOL)_removePersistentStore:(id)arg1;
- (BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id*)arg6;
- (id)_retainedAllMigratedObjectsInStore:(id)arg1 toStore:(id)arg2;
- (id)_retainedPersistentStores;
- (id)_saveRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4;
- (void)_setIsRegisteredWithUbiquity:(BOOL)arg1;
- (id)addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (void)clearCachedInformationForRequestWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)finalize;
- (id)init;
- (id)initWithManagedObjectModel:(id)arg1;
- (id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (void)lock;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)managedObjectIDForURIRepresentation:(id)arg1;
- (id)managedObjectIDForURIRepresentation:(id)arg1 error:(id*)arg2;
- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned int)arg2;
- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned int)arg2 error:(id*)arg3;
- (id)managedObjectModel;
- (id)metadataForPersistentStore:(id)arg1;
- (id)migratePersistentStore:(id)arg1 toURL:(id)arg2 options:(id)arg3 withType:(id)arg4 error:(id*)arg5;
- (id)name;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (void)performBlock:(id)arg1;
- (void)performBlockAndWait:(id)arg1;
- (id)persistentStoreCoordinator;
- (id)persistentStoreForIdentifier:(id)arg1;
- (id)persistentStoreForURL:(id)arg1;
- (id)persistentStores;
- (BOOL)removePersistentStore:(id)arg1 error:(id*)arg2;
- (void)setMetadata:(id)arg1 forPersistentStore:(id)arg2;
- (void)setName:(id)arg1;
- (BOOL)setURL:(id)arg1 forPersistentStore:(id)arg2;
- (BOOL)tryLock;
- (void)unlock;

@end
