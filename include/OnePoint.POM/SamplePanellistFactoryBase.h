// --------------------------------------------------------------------------------------------------------------------
// <copyright file="model.cs" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in SamplePanellist.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------


#import <Foundation/Foundation.h>
#import <OnePointFramework/DataObjectFactory.h>
#import "ISamplePanellistData.h"
#import "ISamplePanellistFactoryBase.h"

//package OnePoint.POM.Model; 
  

/// <summary>
/// Creates and finds SamplePanellist objects
/// </summary>



@interface  SamplePanellistFactoryBase : DataObjectFactory<ISamplePanellistData,ISamplePanellistFactoryBase>
{
}

+(NSString*)  FIELD_NAME_SAMPLEPANELLISTID;
+(NSString*)  FIELD_NAME_SAMPLEID;
+(NSString*)  FIELD_NAME_PANELLISTID;
+(NSString*)  FIELD_NAME_PANELID;
+(NSString*)  FIELD_NAME_EXCLUDED;
+(NSString*)  FIELD_NAME_ISDELETED;
+(NSString*)  FIELD_NAME_CREATEDDATE;
+(NSString*)  FIELD_NAME_LASTUPDATEDDATE;
+(NSString*) PARAMETER_NAME_SAMPLEPANELLISTID;
+(NSString*) PARAMETER_NAME_SAMPLEID;
+(NSString*) PARAMETER_NAME_PANELLISTID;
+(NSString*) PARAMETER_NAME_PANELID;
+(NSString*) PARAMETER_NAME_EXCLUDED;
+(NSString*) PARAMETER_NAME_ISDELETED;
+(NSString*) PARAMETER_NAME_CREATEDDATE;
+(NSString*) PARAMETER_NAME_LASTUPDATEDDATE;

/// <summary>
/// The Microsoft SQL statement to join one table to another and perform it.
/// </summary>
-(BOOL) DeleteByPk :(NSNumber *) keySamplePanellistID ;
//-(BOOL) DeleteByPk:(NSNumber *) keySamplePanellistID;
// Define input parameters once only so they can be reused by other methods
-(void) AddSamplePanellistIDParameter:(DataHandler *) dataHandler valSamplePanellistID:(NSNumber *) valSamplePanellistID;	

-(void) AddSampleIDParameter:(DataHandler *) dataHandler valSampleID:(NSNumber *) valSampleID;	

-(void) AddPanellistIDParameter:(DataHandler *) dataHandler valPanellistID:(NSNumber *) valPanellistID;	

-(void) AddPanelIDParameter:(DataHandler *) dataHandler valPanelID:(NSNumber *) valPanelID;	

-(void) AddExcludedParameter:(DataHandler *) dataHandler valExcluded:(NSNumber *) valExcluded;	

-(void) AddIsDeletedParameter:(DataHandler *) dataHandler valIsDeleted:(NSNumber *) valIsDeleted;	

-(void) AddCreatedDateParameter:(DataHandler *) dataHandler valCreatedDate: (NSDate *) valCreatedDate;	

-(void) AddLastUpdatedDateParameter:(DataHandler *) dataHandler valLastUpdatedDate: (NSDate *) valLastUpdatedDate;	

-(BOOL) ProcessPkStatement :(NSNumber *) keySamplePanellistID   query:(NSString *) query;
//-(BOOL) ProcessPkStatement:(NSNumber *) keySamplePanellistID query:(NSString *) query;

-(id<ISamplePanellistData>) Find:(NSString *) attributeName attributeValue:(id) attributeValue;

-(id<ISamplePanellistData>) FindBySamplePanellistID:(NSNumber *) fieldValue;
-(id<ISamplePanellistData>) FindBySampleID:(NSNumber *) fieldValue;
-(id<ISamplePanellistData>) FindByPanellistID:(NSNumber *) fieldValue;
-(id<ISamplePanellistData>) FindByPanelID:(NSNumber *) fieldValue;
-(id<ISamplePanellistData>) FindByExcluded:(NSNumber *) fieldValue;
-(id<ISamplePanellistData>) FindByIsDeleted:(NSNumber *) fieldValue;
-(id<ISamplePanellistData>) FindByCreatedDate:(NSDate *) fieldValue;  
-(id<ISamplePanellistData>) FindByLastUpdatedDate:(NSDate *) fieldValue;  
-(void) AppendSqlParameters:(DataHandler *) dataHandler dataObject:(DataObject *)dataObject mode:(DataMode *) mode;      
-(id<ISamplePanellistData>) FindObject :(NSNumber *) keySamplePanellistID ;
        
-(id<ISamplePanellistData>) Find:(DataHandler *) dataHandler;
        
-(id<ISamplePanellistData>) FindAllObjects;

-(id<ISamplePanellistData>) FindAllObjects:(NSString *) orderByField;

-(id<ISamplePanellistData>) FindAllObjects:(NSString *) orderByField resultLimit:(int)resultLimit;	

-(id<ISamplePanellistData>) CreateSamplePanellist:(id<IDataReader>) reader;
		
-(id<ISamplePanellistData>) createObjectFromDataReader:(id<IDataReader>) reader withPopulate:(BOOL)populateRelatedObject;

-(id<ISamplePanellistData>) Build:(DataHandler *) currentDataHandler closeConnection:(BOOL)closeConnection;
       
@end