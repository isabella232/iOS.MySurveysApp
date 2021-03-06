// --------------------------------------------------------------------------------------------------------------------
// <copyright file="ProjectBase.java" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in Project.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>
#import <OnePointFramework/DataObject.h>
#import "IProjectData.h"




//package OnePoint.PROM.Model 
    


    
@interface  ProjectBase : DataObject<DataObject, IProjectData>
{
@private NSNumber *ProjectID;
        
@private NSNumber *UserID;
        
@private NSString *Name;
        
@private NSString *Description;
        
@private NSString *Remarks;
        
@private NSString *SearchTags;
        
@private NSNumber *IsDeleted;
        
@private NSDate *CreatedDate;
        
@private NSDate *LastUpdatedDate;
        
}


	  
/// <summary>
/// Gets or sets the 
/// </summary>

	@property(nonatomic,retain) NSNumber *ProjectID;

	/// <summary>
/// Gets or sets the 
/// </summary>

	@property(nonatomic,retain) NSNumber *UserID;

	
	@property(readwrite,strong) NSString *Name;

	
	@property(readwrite,strong) NSString *Description;

	
	@property(readwrite,strong) NSString *Remarks;

	
	@property(readwrite,strong) NSString *SearchTags;

	
	@property(nonatomic,retain) NSNumber *IsDeleted;

	
	@property(readwrite,strong) NSDate *CreatedDate;

	
	@property(readwrite,strong) NSDate *LastUpdatedDate;

	@end
         

    

    