// --------------------------------------------------------------------------------------------------------------------
// <copyright file="MediaAttachmentBase.java" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in MediaAttachment.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>
#import <OnePointFramework/DataObject.h>
#import "IMediaAttachmentData.h"




//package OnePoint.MOM.Model 
    


    
@interface  MediaAttachmentBase : DataObject<DataObject, IMediaAttachmentData>
{
@private NSNumber *MediaID;
        
@private NSNumber *MediaTypeID;
        
@private NSNumber *MediaUsageTypeID;
        
	@private BOOL isMediaUsageTypeIDSpecified;
@private NSString *Name;
        
@private NSString *Description;
        
@private NSNumber *IsDeleted;
        
@private NSString *Comments;
        
@private NSString *Remark;
        
@private NSMutableData *Blob;
        
@private NSMutableData *FlashBlob;
        
	@private BOOL isFlashBlobSpecified;
@private NSMutableData *SnapshotBlob;
        
	@private BOOL isSnapshotBlobSpecified;
@private NSDate *CreatedDate;
        
	@private BOOL isCreatedDateSpecified;
@private NSNumber *UserID;
        
	@private BOOL isUserIDSpecified;
@private NSMutableData *MovBlob;
        
	@private BOOL isMovBlobSpecified;
@private NSMutableData *T3gBlob;
        
	@private BOOL isT3gBlobSpecified;
@private NSMutableData *Mp4Blob;
        
	@private BOOL isMp4BlobSpecified;
@private NSMutableData *OggBlob;
        
	@private BOOL isOggBlobSpecified;
@private NSMutableData *WebmBlob;
        
	@private BOOL isWebmBlobSpecified;
@private NSDate *LastUpdatedDate;
        
	@private BOOL isLastUpdatedDateSpecified;
}


	  

	@property(nonatomic,retain) NSNumber *MediaID;

	
	@property(nonatomic,retain) NSNumber *MediaTypeID;

	
	@property(nonatomic,retain) NSNumber *MediaUsageTypeID;

		///<summary>Determines whether MediaUsageTypeID currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isMediaUsageTypeIDSpecified;
	
	@property(readwrite,strong) NSString *Name;

	
	@property(readwrite,strong) NSString *Description;

	
	@property(nonatomic,retain) NSNumber *IsDeleted;

	
	@property(readwrite,strong) NSString *Comments;

	
	@property(readwrite,strong) NSString *Remark;

	
	@property(readwrite,strong) NSMutableData *Blob;

	
	@property(readwrite,strong) NSMutableData *FlashBlob;

		///<summary>Determines whether FlashBlob currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isFlashBlobSpecified;
	
	@property(readwrite,strong) NSMutableData *SnapshotBlob;

		///<summary>Determines whether SnapshotBlob currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isSnapshotBlobSpecified;
	
	@property(readwrite,strong) NSDate *CreatedDate;

		///<summary>Determines whether CreatedDate currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isCreatedDateSpecified;
	
	@property(nonatomic,retain) NSNumber *UserID;

		///<summary>Determines whether UserID currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isUserIDSpecified;
	
	@property(readwrite,strong) NSMutableData *MovBlob;

		///<summary>Determines whether MovBlob currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isMovBlobSpecified;
	
	@property(readwrite,strong) NSMutableData *T3gBlob;

		///<summary>Determines whether T3gBlob currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isT3gBlobSpecified;
	
	@property(readwrite,strong) NSMutableData *Mp4Blob;

		///<summary>Determines whether Mp4Blob currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isMp4BlobSpecified;
	
	@property(readwrite,strong) NSMutableData *OggBlob;

		///<summary>Determines whether OggBlob currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isOggBlobSpecified;
	
	@property(readwrite,strong) NSMutableData *WebmBlob;

		///<summary>Determines whether WebmBlob currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isWebmBlobSpecified;
	
	@property(readwrite,strong) NSDate *LastUpdatedDate;

		///<summary>Determines whether LastUpdatedDate currently is set to NULL. Used in XML Serialisation.</summary>      
	@property(nonatomic,assign) BOOL isLastUpdatedDateSpecified;
	@end
         

    

    